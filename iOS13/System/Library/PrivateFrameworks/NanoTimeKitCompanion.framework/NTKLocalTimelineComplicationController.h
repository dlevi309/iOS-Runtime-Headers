/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKTimelineComplicationController.h>
#import <libobjc.A.dylib/CLKCComplicationDataSourceDelegate.h>
#import <libobjc.A.dylib/NTKComplicationTimelineDelegate.h>
#import <libobjc.A.dylib/NTKTimeTravel.h>

@class CLKCComplicationDataSource, NSDate, NTKComplicationTimeline, NTKTimelineDataOperation, NSMutableSet, CLKComplicationTemplate, NSString;

@interface NTKLocalTimelineComplicationController : NTKTimelineComplicationController <CLKCComplicationDataSourceDelegate, NTKComplicationTimelineDelegate, NTKTimeTravel> {

	CLKCComplicationDataSource* _dataSource;
	NSDate* _timeTravelDate;
	BOOL _supportsTimeTravelForward;
	BOOL _supportsTimeTravelBackward;
	NSDate* _timelineStartDate;
	NSDate* _timelineEndDate;
	BOOL _hasQueuedAnimation;
	unsigned long long _queuedAnimation;
	NTKComplicationTimeline* _timeline;
	NTKTimelineDataOperation* _currentOperation;
	NSMutableSet* _suspendedLeftBoundaryDates;
	NSMutableSet* _suspendedRightBoundaryDates;
	NSMutableSet* _delayedBlocks;
	CLKComplicationTemplate* _switcherTemplate;
	BOOL _hasBeenLive;
	long long _dataSourceState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)complicationDataSourceClassForComplication:(id)arg1 family:(long long)arg2 device:(id)arg3 ;
+(BOOL)_acceptsComplicationType:(unsigned long long)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(void)_activate;
-(void)_deactivate;
-(id)_currentEntry;
-(BOOL)hasTapAction;
-(id)complicationApplicationIdentifier;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(void)didTouchDownInView:(id)arg1 ;
-(void)didTouchUpInsideView:(id)arg1 ;
-(id)lockedTemplate;
-(id)alwaysOnTemplate;
-(void)performTapAction;
-(void)invalidateSwitcherTemplate;
-(void)setShowsLockedUI:(BOOL)arg1 ;
-(void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2 ;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)addDisplayWrapper:(id)arg1 ;
-(Class)richComplicationDisplayViewClass;
-(void)invalidateEntries;
-(void)entriesDidChangeInTimeline:(id)arg1 withTritiumUpdatePriority:(long long)arg2 ;
-(void)nowEntryDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(void)timeTravelEntryDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(void)invalidateEntriesWithTritiumUpdatePriority:(long long)arg1 ;
-(void)_cancelDelayedBlocks;
-(void)_queueAnimationForNextUpdate:(unsigned long long)arg1 ;
-(void)_resetTimelineForCachingChange;
-(void)_startSetupOperationIfPossibleWithPriority:(long long)arg1 ;
-(void)_requestDataSourceToUpdateToState:(long long)arg1 ;
-(void)_extendTimelineIfNecessaryAndPossible;
-(void)_updateCurrentTemplateWithReason:(long long)arg1 ;
-(id)activeDisplayTemplate;
-(void)_updateTimeTravelBoundaries;
-(void)_updateDimStateForCurrentTimeline;
-(void)setCurrentTemplate:(id)arg1 reason:(long long)arg2 animation:(unsigned long long)arg3 ;
-(void)appendEntries:(id)arg1 withTritiumUpdatePriority:(long long)arg2 ;
-(void)setTimelineStartDate:(id)arg1 ;
-(void)setTimelineEndDate:(id)arg1 ;
-(void)_completeSetupOperationWithDirections:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 currentEntry:(id)arg4 priority:(long long)arg5 ;
-(void)_startExtendOperationIfNecessaryForWindow:(id)arg1 withDate:(id)arg2 minBuffer:(double)arg3 ;
-(void)_startExtendLeftOperationFromDate:(id)arg1 ;
-(void)_suspendLeftBoundaryDate:(id)arg1 ;
-(void)_startExtendRightOperationFromDate:(id)arg1 ;
-(void)_suspendRightBoundaryDate:(id)arg1 ;
-(void)_completeExtendRightOperationWithBoundaryDate:(id)arg1 entries:(id)arg2 ;
-(void)_completeExtendLeftOperationWithBoundaryDate:(id)arg1 entries:(id)arg2 ;
-(void)appendEntries:(id)arg1 ;
-(double)minimumIntervalBetweenTimelineEntries;
-(void)_applyCachingMode;
-(void)_applyUpdatingMode;
-(void)_applyAnimationMode;
-(void)_updateIsComplicationActive:(BOOL)arg1 ;
@end

