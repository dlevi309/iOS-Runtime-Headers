/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSHashTable;

@interface BKSAnimationFenceObserver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _handleNameToTraceMap;
	NSMapTable* _handleNameToFenceNameMap;
	NSMapTable* _fenceNameToHandleNamesMap;
	NSMapTable* _fenceNameToDeathSentinelMap;
	NSHashTable* _validDeathSentinelsTable;
	unsigned _lastHandleName;
	unsigned _encodeCount;

}
+(id)sharedInstance;
+(int)pidFromEncodeIdentifier:(unsigned long long)arg1 ;
+(unsigned)countFromEncodeIdentifier:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)addHandle:(id)arg1 ;
-(void)removeHandleWithName:(unsigned long long)arg1 ;
-(unsigned long long)nextEncodeIdentifier;
@end

