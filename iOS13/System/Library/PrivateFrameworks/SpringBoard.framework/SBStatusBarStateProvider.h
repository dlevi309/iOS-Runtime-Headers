/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBStatusBarStateAggregatorPosting.h>
#import <UIKit/UIStatusBarStateProvider.h>

@class SBStatusBarStateAggregator, NSHashTable, NSMutableArray, NSString;

@interface SBStatusBarStateProvider : NSObject <SBStatusBarStateAggregatorPosting, UIStatusBarStateProvider> {

	SBStatusBarStateAggregator* _stateAggregator;
	NSHashTable* _stateObservers;
	SCD_Struct_SB46 _aggregatorData;
	int _aggregatorActions;
	SCD_Struct_SB46 _lastPost;
	unsigned long long _coalescentBlockDepth;
	BOOL _itemNeedsPost[42];
	BOOL _anyItemNeedsPost;
	BOOL _nonItemDataNeedsPost;
	BOOL _posting;
	NSMutableArray* _stylesWithDetailUpdates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)getStatusBarData:(SCD_Struct_SB46*)arg1 ;
-(void)addStatusBarStateObserver:(id)arg1 ;
-(void)removeStatusBarStateObserver:(id)arg1 ;
-(void)beginCoalescentBlock;
-(void)endCoalescentBlock;
-(void)updateStatusBarItem:(int)arg1 ;
-(void)statusBarStateAggregatorDidStartPost:(id)arg1 ;
-(void)statusBarStateAggregator:(id)arg1 didVisitItem:(int)arg2 withUpdates:(BOOL)arg3 toData:(const SCD_Struct_SB46*)arg4 ;
-(void)statusBarStateAggregatorDidFinishPost:(id)arg1 withData:(const SCD_Struct_SB46*)arg2 actions:(int)arg3 ;
-(void)statusBarStateAggregator:(id)arg1 didUpdateNonItemData:(const SCD_Struct_SB46*)arg2 ;
-(BOOL)_shouldPostForVisitedItem:(int)arg1 withUpdates:(BOOL)arg2 toAggregatorData:(const SCD_Struct_SB46*)arg3 lastPost:(const SCD_Struct_SB46*)arg4 ;
-(void)_composePostDataFromAggregatorData:(SCD_Struct_SB46*)arg1 ;
-(void)_composePostActionsFromAggregatorActions:(int*)arg1 ;
-(void)_didFinishPost;
-(BOOL)_shouldPostForUpdatesToNonItemData:(const SCD_Struct_SB46*)arg1 ;
-(void)_didChangeDoubleHeightStatusStringForStyle:(long long)arg1 ;
@end

