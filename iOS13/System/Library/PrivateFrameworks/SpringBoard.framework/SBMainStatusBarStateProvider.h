/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBStatusBarStateProvider.h>
#import <UIKit/UIStatusBarStateObserver.h>

@class NSCountedSet, NSHashTable, NSString;

@interface SBMainStatusBarStateProvider : SBStatusBarStateProvider <UIStatusBarStateObserver> {

	BOOL _overridePercent;
	BOOL _killActivity;
	BOOL _itemIsDisabled[42];
	BOOL _itemWasDisabled[42];
	NSCountedSet* _itemDisabledRequests[42];
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
-(id)init;
-(void)dealloc;
-(void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const SCD_Struct_SB46*)arg2 withActions:(int)arg3 ;
-(void)disableStatusBarItem:(int)arg1 requestor:(id)arg2 ;
-(void)setTimeCloaked:(BOOL)arg1 ;
-(void)forceUpdateLocalStatusBarData;
-(void)updateTimeEnabledImmediately:(BOOL)arg1 ;
-(void)updateTimeEnabled;
-(void)setTelephonyAndBluetoothItemsCloaked:(BOOL)arg1 ;
-(void)enableStatusBarItem:(int)arg1 requestor:(id)arg2 ;
-(void)statusBarStateAggregatorDidRequestImmediateUpdates:(id)arg1 ;
-(void)statusBarStateAggregatorDidStopRequestingImmediateUpdates:(id)arg1 ;
-(void)_updateDisabledItems;
-(BOOL)contentAssertionsWantTimeEnabledAnimated:(inout BOOL*)arg1 duration:(inout double*)arg2 ;
-(void)_enableTime:(BOOL)arg1 crossfade:(BOOL)arg2 crossfadeDuration:(double)arg3 immediately:(BOOL)arg4 ;
-(void)enableTime:(BOOL)arg1 crossfade:(BOOL)arg2 crossfadeDuration:(double)arg3 ;
-(id)_identifierForStateAggregator:(id)arg1 ;
-(void)disableDataUpdateAnimationsForRequestor:(id)arg1 ;
-(void)stopDisablingDataUpdateAnimationsForRequestor:(id)arg1 ;
-(void)acquireContentAssertion:(id)arg1 ;
-(void)relinquishContentAssertion:(id)arg1 ;
-(void)didUpdateContentAssertion:(id)arg1 ;
-(BOOL)isTimeEnabled;
-(void)enableTime:(BOOL)arg1 ;
-(void)setAllItemsExceptBatteryCloaked:(BOOL)arg1 ;
-(BOOL)_shouldPostForVisitedItem:(int)arg1 withUpdates:(BOOL)arg2 toAggregatorData:(const SCD_Struct_SB46*)arg3 lastPost:(const SCD_Struct_SB46*)arg4 ;
-(void)_composePostDataFromAggregatorData:(SCD_Struct_SB46*)arg1 ;
-(NSHashTable *)contentAssertions;
-(void)setContentAssertions:(NSHashTable *)arg1 ;
@end

