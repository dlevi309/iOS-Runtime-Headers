/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HKHeartbeatSequenceListMetadataSectionDelegate.h>

@protocol HKDataMetadataViewControllerDelegate;
@class HKCategorySample, NSMutableArray;

@interface WDAtrialFibrillationEventMetadataViewController : HKTableViewController <HKHeartbeatSequenceListMetadataSectionDelegate> {

	HKCategorySample* _event;
	NSMutableArray* _sections;
	id<HKDataMetadataViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) HKCategorySample * event;                                              //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) NSMutableArray * sections;                                             //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic,__weak) id<HKDataMetadataViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HKDataMetadataViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HKDataMetadataViewControllerDelegate>)arg1 ;
-(HKCategorySample *)event;
-(void)setEvent:(HKCategorySample *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(NSMutableArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)setSections:(NSMutableArray *)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithEvent:(id)arg1 delegate:(id)arg2 ;
-(void)_loadSections;
-(id)_shortVersionNumberFromString:(id)arg1 ;
-(BOOL)_addSectionIfNonNull:(id)arg1 ;
-(void)_reloadAtrialFibrillationEducationTableHeaderView;
-(id)_atrialFibrillationEducationContainerView;
-(void)heartbeatSequecesListQueryComplete:(id)arg1 ;
@end

