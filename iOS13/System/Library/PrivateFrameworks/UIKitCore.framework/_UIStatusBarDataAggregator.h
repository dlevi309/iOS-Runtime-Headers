/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class _UIStatusBarData, NSCountedSet, NSMutableDictionary, NSSet;

@interface _UIStatusBarDataAggregator : NSObject {

	_UIStatusBarData* _overlayData;
	/*^block*/id _updateBlock;
	Class _dataClass;
	NSCountedSet* _delayedKeys;
	NSMutableDictionary* _pendingUpdates;
	NSMutableDictionary* _coalescedKeys;
	NSMutableDictionary* _coalescedTimers;

}

@property (nonatomic,copy) id updateBlock;                                       //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,copy) Class dataClass;                                      //@synthesize dataClass=_dataClass - In the implementation block
@property (nonatomic,retain) NSCountedSet * delayedKeys;                         //@synthesize delayedKeys=_delayedKeys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingUpdates;               //@synthesize pendingUpdates=_pendingUpdates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * coalescedKeys;                //@synthesize coalescedKeys=_coalescedKeys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * coalescedTimers;              //@synthesize coalescedTimers=_coalescedTimers - In the implementation block
@property (nonatomic,copy) _UIStatusBarData * overlayData;                       //@synthesize overlayData=_overlayData - In the implementation block
@property (nonatomic,copy,readonly) NSSet * delayedEntryKeys; 
@property (nonatomic,copy,readonly) NSSet * coalescedEntryKeys; 
+(void)initialize;
-(id)updateBlock;
-(void)setUpdateBlock:(id)arg1 ;
-(void)beginCoalescingUpdatesForEntryKeys:(id)arg1 delay:(double)arg2 ;
-(void)beginDelayingUpdatesForEntryKeys:(id)arg1 ;
-(void)endDelayingUpdatesForEntryKeys:(id)arg1 ;
-(id)initWithUpdateBlock:(/*^block*/id)arg1 ;
-(_UIStatusBarData *)overlayData;
-(void)setOverlayData:(_UIStatusBarData *)arg1 ;
-(void)updateWithData:(id)arg1 ;
-(NSSet *)delayedEntryKeys;
-(void)setDelayedKeys:(NSCountedSet *)arg1 ;
-(void)setPendingUpdates:(NSMutableDictionary *)arg1 ;
-(void)setCoalescedKeys:(NSMutableDictionary *)arg1 ;
-(void)setCoalescedTimers:(NSMutableDictionary *)arg1 ;
-(void)_updateForOverlayWithData:(id)arg1 ;
-(void)_updateForDelayedKeysWithData:(id)arg1 ;
-(void)_updateForCoalescedKeysWithData:(id)arg1 ;
-(id)_updatedDataFromData:(id)arg1 delayedKeys:(id)arg2 ;
-(void)_updateFromPendingUpdatesForKeys:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSSet *)coalescedEntryKeys;
-(void)_coalescedUpdateForEntryKeys:(id)arg1 ;
-(void)endCoalescingUpdatesForEntryKeys:(id)arg1 ;
-(Class)dataClass;
-(void)setDataClass:(Class)arg1 ;
-(NSCountedSet *)delayedKeys;
-(NSMutableDictionary *)pendingUpdates;
-(NSMutableDictionary *)coalescedKeys;
-(NSMutableDictionary *)coalescedTimers;
@end

