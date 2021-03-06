/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicForYouRecommendationItem : MPModelObject {
    MPModelAlbum * _album;
    BOOL  _backedByStoreItemMetadata;
    unsigned int  _itemType;
    MusicForYouRecommendationGroup * _parentGroup;
    MPModelPlaylist * _playlist;
    int  _subgroupIndex;
}

@property (nonatomic, retain) MPModelAlbum *album;
@property (getter=isBackedByStoreItemMetadata, nonatomic) BOOL backedByStoreItemMetadata;
@property (nonatomic) unsigned int itemType;
@property (nonatomic) MusicForYouRecommendationGroup *parentGroup;
@property (nonatomic, retain) MPModelPlaylist *playlist;
@property (nonatomic, readonly) MusicForYouRecommendationGroup *subgroup;
@property (nonatomic) int subgroupIndex;

+ (id)__MusicForYouRecommendationItemPropertyBackedByStoreItemMetadata__PROPERTY;
+ (id)__MusicForYouRecommendationItemPropertyItemType__PROPERTY;
+ (id)__MusicForYouRecommendationItemPropertyParentGroup__PROPERTY;
+ (id)__MusicForYouRecommendationItemPropertySubgroupIndex__PROPERTY;
+ (id)__MusicForYouRecommendationItemRelationshipAlbum__PROPERTY;
+ (id)__MusicForYouRecommendationItemRelationshipPlaylist__PROPERTY;
+ (id)__album__KEY;
+ (id)__backedByStoreItemMetadata__KEY;
+ (id)__itemType__KEY;
+ (id)__parentGroup__KEY;
+ (id)__playlist__KEY;
+ (id)__subgroupIndex__KEY;
+ (id)requiredStoreLibraryPersonalizationProperties;

- (void).cxx_destruct;
- (id)album;
- (id)descriptionWithType:(int)arg1;
- (BOOL)isBackedByStoreItemMetadata;
- (unsigned int)itemType;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)parentGroup;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)playlist;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (void)setAlbum:(id)arg1;
- (void)setBackedByStoreItemMetadata:(BOOL)arg1;
- (void)setItemType:(unsigned int)arg1;
- (void)setParentGroup:(id)arg1;
- (void)setPlaylist:(id)arg1;
- (void)setSubgroupIndex:(int)arg1;
- (id)subgroup;
- (int)subgroupIndex;

@end
