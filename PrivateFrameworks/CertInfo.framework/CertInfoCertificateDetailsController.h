/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertInfoCertificateDetailsController : UITableViewController {
    <CertInfoCertificateDetailsControllerDelegate> * _delegate;
    UIBarButtonItem * _doneButton;
    NSArray * _sectionDictionaries;
    unsigned int  _showsDoneButton;
}

@property (nonatomic) <CertInfoCertificateDetailsControllerDelegate> *delegate;
@property (nonatomic) BOOL showsDoneButton;

- (void).cxx_destruct;
- (void)_doneButtonPressed:(id)arg1;
- (id)_propertiesForIndexPath:(id)arg1;
- (id)_sectionsForProperties:(id)arg1;
- (id)_sectionsForProperties:(id)arg1 currentSectionDictionary:(id)arg2;
- (id)delegate;
- (id)initWithCertificateProperties:(id)arg1;
- (id)initWithTrust:(struct __SecTrust { }*)arg1;
- (id)initWithTrust:(struct __SecTrust { }*)arg1 certificateIndex:(long)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowsDoneButton:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)showsDoneButton;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;

@end
