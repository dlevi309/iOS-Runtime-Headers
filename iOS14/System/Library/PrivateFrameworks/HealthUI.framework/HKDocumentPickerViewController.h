/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HKCDADocumentTableViewCellDelegate.h>
#import <libobjc.A.dylib/HKDataMetadataViewControllerDelegate.h>

@protocol HKDocumentPickerViewControllerDelegate;
@class NSMutableArray, HKHealthStore, HKSource, HKTitledIconHeaderView, NSSet, NSMutableSet, NSString;

@interface HKDocumentPickerViewController : HKTableViewController <HKCDADocumentTableViewCellDelegate, HKDataMetadataViewControllerDelegate> {

	NSMutableArray* _samplesList;
	long long _presentationStyle;
	HKHealthStore* _healthStore;
	BOOL _hasPendingDocumentFetch;
	HKSource* _source;
	BOOL _showCheckboxes;
	HKTitledIconHeaderView* _tableHeaderView;
	NSSet* _allSamples;
	NSMutableSet* _enabledSamples;
	id<HKDocumentPickerViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) NSMutableSet * enabledSamples;                                           //@synthesize enabledSamples=_enabledSamples - In the implementation block
@property (nonatomic,retain) HKSource * source;                                                       //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSSet * allSamples;                                                    //@synthesize allSamples=_allSamples - In the implementation block
@property (assign,nonatomic,__weak) id<HKDocumentPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_tableHeaderView;
-(HKHealthStore *)healthStore;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_done:(id)arg1 ;
-(id<HKDocumentPickerViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_finishWithError:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setSource:(HKSource *)arg1 ;
-(void)setDelegate:(id<HKDocumentPickerViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)_updateForCurrentSizeCategory;
-(void)_cancel:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSSet *)allSamples;
-(HKSource *)source;
-(void)cdaDocumentTableViewCellDidChangeValue:(id)arg1 ;
-(void)_addCancelAndDoneButtons;
-(id)initWithDocumentAuthorizations:(id)arg1 ;
-(NSMutableSet *)enabledSamples;
-(id)initWithDocuments:(id)arg1 presentationStyle:(long long)arg2 ;
-(BOOL)_isPrompting;
-(void)_enableDocumentSample:(id)arg1 enabled:(BOOL)arg2 ;
-(void)configureHeaderView:(id)arg1 ;
-(BOOL)_needsSampleRequestDescription;
-(id)dataMetadataViewControllerForSample:(id)arg1 ;
-(void)pushDetailForDocumentSample:(id)arg1 ;
-(void)setEnabledSamples:(NSMutableSet *)arg1 ;
@end

