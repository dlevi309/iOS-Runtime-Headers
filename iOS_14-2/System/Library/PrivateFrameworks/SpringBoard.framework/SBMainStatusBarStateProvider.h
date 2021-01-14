/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBStatusBarStateProvider.h>
#import <UIKit/UIStatusBarStateObserver.h>

@class NSCountedSet, NSHashTable, NSString;

@interface SBMainStatusBarStateProvider : SBStatusBarStateProvider <UIStatusBarStateObserver> {

	BOOL _overridePercent;
	BOOL _killActivity;
	BOOL _itemIsDisabled[43];
	BOOL _itemWasDisabled[43];
	NSCountedSet* _itemDisabledRequests[43];
	NSCountedSet* _dataUpdateAnimationsDisabledRequests;
	BOOL _timeEnabled;
	BOOL _statusBarTimeRequiresUpdate;
	BOOL _timeCloaked;
	BOOL _allButBatteryCloaked;
	BOOL _telephonyAndBluetoothCloaked;
	NSHashTable* _contentAssertions;

}

@property (nonatomic,retain) NSHashTable * contentAssertions;              //@synthesize contentAssertions=_contentAssertions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)updateTimeEnabledImmediately:(BOOL)arg1 ;
-(id)init;
-(void)disableDataUpdateAnimationsForRequestor:(id)arg1 ;
-(void)setContentAssertions:(NSHashTable *)arg1 ;
-(void)stopDisablingDataUpdateAnimationsForRequestor:(id)arg1 ;
-(void)didUpdateContentAssertion:(id)arg1 ;
-(BOOL)isTimeEnabled;
-(BOOL)contentAssertionsWantTimeEnabledAnimated:(inout BOOL*)arg1 duration:(inout double*)arg2 ;
-(void)relinquishContentAssertion:(id)arg1 ;
-(void)enableTime:(BOOL)arg1 ;
-(id)_identifierForStateAggregator:(id)arg1 ;
-(void)acquireContentAssertion:(id)arg1 ;
-(void)setTimeCloaked:(BOOL)arg1 ;
-(void)forceUpdateLocalStatusBarData;
-(BOOL)_shouldPostForVisitedItem:(int)arg1 withUpdates:(BOOL)arg2 toAggregatorData:(const SCD_Struct_SB43*)arg3 lastPost:(const SCD_Struct_SB43*)arg4 ;
-(NSHashTable *)contentAssertions;
-(void)_updateDisabledItems;
-(void)statusBarStateAggregatorDidStopRequestingImmediateUpdates:(id)arg1 ;
-(void)statusBarStateAggregatorDidRequestImmediateUpdates:(id)arg1 ;
-(void)_composePostDataFromAggregatorData:(SCD_Struct_SB43*)arg1 ;
-(void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const SCD_Struct_SB43*)arg2 withActions:(int)arg3 ;
-(void)enableTime:(BOOL)arg1 crossfade:(BOOL)arg2 crossfadeDuration:(double)arg3 ;
-(void)enableStatusBarItem:(int)arg1 requestor:(id)arg2 ;
-(void)setTelephonyAndBluetoothItemsCloaked:(BOOL)arg1 ;
-(void)setAllItemsExceptBatteryCloaked:(BOOL)arg1 ;
-(void)_enableTime:(BOOL)arg1 crossfade:(BOOL)arg2 crossfadeDuration:(double)arg3 immediately:(BOOL)arg4 ;
-(void)dealloc;
-(void)updateTimeEnabled;
-(void)disableStatusBarItem:(int)arg1 requestor:(id)arg2 ;
@end

