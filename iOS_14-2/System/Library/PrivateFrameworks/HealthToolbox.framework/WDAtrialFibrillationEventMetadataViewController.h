/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HKHeartbeatSequenceListMetadataSectionDelegate.h>

@protocol HKDataMetadataViewControllerDelegate;
@class HKCategorySample, NSMutableArray;

@interface WDAtrialFibrillationEventMetadataViewController : HKTableViewController <HKHeartbeatSequenceListMetadataSectionDelegate> {

	BOOL _firstViewDidLayoutSubviews;
	HKCategorySample* _event;
	NSMutableArray* _sections;
	id<HKDataMetadataViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) BOOL firstViewDidLayoutSubviews;                                       //@synthesize firstViewDidLayoutSubviews=_firstViewDidLayoutSubviews - In the implementation block
@property (nonatomic,retain) HKCategorySample * event;                                              //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) NSMutableArray * sections;                                             //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic,__weak) id<HKDataMetadataViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setSections:(NSMutableArray *)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<HKDataMetadataViewControllerDelegate>)delegate;
-(NSMutableArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<HKDataMetadataViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(HKCategorySample *)event;
-(void)setEvent:(HKCategorySample *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)_loadSections;
-(void)heartbeatSequecesListQueryComplete:(id)arg1 ;
-(BOOL)_addSectionIfNonNull:(id)arg1 ;
-(BOOL)firstViewDidLayoutSubviews;
-(void)setFirstViewDidLayoutSubviews:(BOOL)arg1 ;
-(void)_reloadAtrialFibrillationEducationTableHeaderView;
-(id)_shortVersionNumberFromString:(id)arg1 ;
-(id)_atrialFibrillationEducationContainerView;
-(id)initWithEvent:(id)arg1 delegate:(id)arg2 ;
@end

