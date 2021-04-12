/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol OS_dispatch_queue, NUPurgeableStorage;
@class NSObject;

@interface _NUImageTile : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<NUPurgeableStorage> _storage;
	unsigned long long _useCount;
	unsigned long long _accessCount;
	BOOL _wasPurged;

}
-(void)dealloc;
-(id)description;
-(BOOL)isValid;
-(id)initWithStorage:(id)arg1 ;
-(void)incrementUseCount;
-(BOOL)decrementUseCount;
-(BOOL)isShared;
-(unsigned long long)useCount;
-(BOOL)incrementAccessCount;
-(unsigned long long)accessCount;
-(void)returnToStorageFactory:(id)arg1 ;
-(BOOL)decrementAccessCount;
-(BOOL)decrementAccessAndUseCountButLeaveAccessedIfLastUse;
-(BOOL)decrementAccessAndUseCount;
-(BOOL)_decrementUseCount;
-(BOOL)_incrementAccessCount;
-(BOOL)_decrementAccessCount;
-(void)_markAsPurgeable;
-(BOOL)_markAsUnpurgeable;
-(void)_visitRead:(/*^block*/id)arg1 ;
-(long long)readStorageInRegion:(id)arg1 block:(/*^block*/id)arg2 ;
-(long long)writeStorageInRegion:(id)arg1 block:(/*^block*/id)arg2 ;
-(long long)copyFromTile:(id)arg1 region:(id)arg2 ;
@end

