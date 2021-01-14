/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(unsigned)countFromEncodeIdentifier:(unsigned long long)arg1 ;
+(int)pidFromEncodeIdentifier:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(unsigned long long)addHandle:(id)arg1 ;
-(unsigned long long)nextEncodeIdentifier;
-(void)removeHandleWithName:(unsigned long long)arg1 ;
-(void)dealloc;
@end

