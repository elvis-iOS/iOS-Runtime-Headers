/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSharedContentsCollectionViewCell : CKSharedAssetCollectionViewCell <UIGestureRecognizerDelegate> {
    UIImageView * _checkmarkView;
    <CKSharedContentsCollectionViewCellDelegate> * _delegate;
    BOOL  _editing;
    UIImage * _previewImage;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic, retain) UIImageView *checkmarkView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKSharedContentsCollectionViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEditing, nonatomic) BOOL editing;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIImage *previewImage;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)checkmarkView;
- (void)copy:(id)arg1;
- (id)delegate;
- (void)delete:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleTap:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isEditing;
- (void)layoutSubviews;
- (void)more:(id)arg1;
- (id)previewImage;
- (void)saveAttachment:(id)arg1;
- (void)setCheckmarkView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setPreviewImage:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setupTapGestureRecognizer;
- (id)tapGestureRecognizer;
- (void)toggleCheckmarkViewWithEnabled:(BOOL)arg1;

@end