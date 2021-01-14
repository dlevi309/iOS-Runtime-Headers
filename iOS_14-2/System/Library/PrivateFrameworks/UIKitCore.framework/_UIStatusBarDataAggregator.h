/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableDictionary *)coalescedKeys;
-(void)beginDelayingUpdatesForEntryKeys:(id)arg1 ;
-(void)updateWithData:(id)arg1 ;
-(void)endCoalescingUpdatesForEntryKeys:(id)arg1 ;
-(NSMutableDictionary *)coalescedTimers;
-(NSMutableDictionary *)pendingUpdates;
-(void)endDelayingUpdatesForEntryKeys:(id)arg1 ;
-(_UIStatusBarData *)overlayData;
-(void)setDataClass:(Class)arg1 ;
-(void)_updateForCoalescedKeysWithData:(id)arg1 ;
-(id)initWithUpdateBlock:(/*^block*/id)arg1 ;
-(void)setCoalescedTimers:(NSMutableDictionary *)arg1 ;
-(void)setCoalescedKeys:(NSMutableDictionary *)arg1 ;
-(void)setPendingUpdates:(NSMutableDictionary *)arg1 ;
-(NSSet *)coalescedEntryKeys;
-(void)setUpdateBlock:(id)arg1 ;
-(void)setOverlayData:(_UIStatusBarData *)arg1 ;
-(void)_updateFromPendingUpdatesForKeys:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_updateForOverlayWithData:(id)arg1 ;
-(void)_updateForDelayedKeysWithData:(id)arg1 ;
-(id)updateBlock;
-(void)_coalescedUpdateForEntryKeys:(id)arg1 ;
-(NSSet *)delayedEntryKeys;
-(Class)dataClass;
-(NSCountedSet *)delayedKeys;
-(void)beginCoalescingUpdatesForEntryKeys:(id)arg1 delay:(double)arg2 ;
-(void)setDelayedKeys:(NSCountedSet *)arg1 ;
-(id)_updatedDataFromData:(id)arg1 delayedKeys:(id)arg2 ;
@end

