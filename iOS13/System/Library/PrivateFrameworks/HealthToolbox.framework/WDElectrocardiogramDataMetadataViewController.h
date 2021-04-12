/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HKDataMetadataDeletionSectionDelegate.h>
#import <libobjc.A.dylib/HKElectrocardiogramMetadataViewDelegate.h>

@protocol HKDataMetadataViewControllerDelegate;
@class HKElectrocardiogram, NSMutableArray, WDElectrocardiogramReportDataSource, HRElectrocardiogramReportGenerator;

@interface WDElectrocardiogramDataMetadataViewController : HKTableViewController <HKDataMetadataDeletionSectionDelegate, HKElectrocardiogramMetadataViewDelegate> {

	BOOL _actionsEnabled;
	HKElectrocardiogram* _sample;
	id<HKDataMetadataViewControllerDelegate> _delegate;
	NSMutableArray* _sections;
	WDElectrocardiogramReportDataSource* _reportDataSource;
	HRElectrocardiogramReportGenerator* _reportGenerator;

}

@property (nonatomic,retain) HKElectrocardiogram * sample;                                          //@synthesize sample=_sample - In the implementation block
@property (assign,nonatomic,__weak) id<HKDataMetadataViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * sections;                                             //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) WDElectrocardiogramReportDataSource * reportDataSource;                //@synthesize reportDataSource=_reportDataSource - In the implementation block
@property (nonatomic,retain) HRElectrocardiogramReportGenerator * reportGenerator;                  //@synthesize reportGenerator=_reportGenerator - In the implementation block
@property (assign,nonatomic) BOOL actionsEnabled;                                                   //@synthesize actionsEnabled=_actionsEnabled - In the implementation block
-(void)dealloc;
-(id<HKDataMetadataViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HKDataMetadataViewControllerDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(NSMutableArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)setSections:(NSMutableArray *)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setSample:(HKElectrocardiogram *)arg1 ;
-(HKElectrocardiogram *)sample;
-(void)setActionsEnabled:(BOOL)arg1 ;
-(id)initWithSample:(id)arg1 delegate:(id)arg2 ;
-(void)_localeOrDisplayTypeChange:(id)arg1 ;
-(void)_loadSections;
-(void)shareButtonTapped:(id)arg1 ;
-(void)_reloadElectrocardiogramMetadataTableHeaderView;
-(id)_shortVersionNumberFromString:(id)arg1 ;
-(BOOL)_addSectionIfNonNull:(id)arg1 ;
-(id)_electrocardiogramMetadataContainerView;
-(BOOL)actionsEnabled;
-(void)deleteSampleTriggeredBySection:(id)arg1 ;
-(void)presentPDFViewController;
-(HRElectrocardiogramReportGenerator *)reportGenerator;
-(void)deletionSectionDidSelectRow:(id)arg1 ;
-(void)electrocardiogramMetadataViewDidTapDetailButton:(id)arg1 ;
-(id)electrocardiogramMetadataView:(id)arg1 regulatedBodyTextForSample:(id)arg2 ;
-(BOOL)electrocardiogramMetadataViewShouldShowShareRow:(id)arg1 ;
-(void)electrocardiogramMetadataViewDidSelectShareRow:(id)arg1 ;
-(WDElectrocardiogramReportDataSource *)reportDataSource;
-(void)setReportDataSource:(WDElectrocardiogramReportDataSource *)arg1 ;
-(void)setReportGenerator:(HRElectrocardiogramReportGenerator *)arg1 ;
@end

