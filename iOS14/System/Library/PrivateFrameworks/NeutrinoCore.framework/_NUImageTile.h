/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <libobjc.A.dylib/NUSharableImage.h>

@protocol OS_dispatch_queue, NUPurgeableStorage;
@class NSObject, NSString;

@interface _NUImageTile : NSObject <NUSharableImage> {

	NSObject*<OS_dispatch_queue> _queue;
	id<NUPurgeableStorage> _storage;
	unsigned long long _accessCount;
	BOOL _wasPurged;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStorage:(id)arg1 ;
-(BOOL)incrementAccessCount;
-(void)incrementUseCount;
-(BOOL)decrementUseCount;
-(BOOL)isInUse;
-(NSString *)description;
-(BOOL)isValid;
-(int)useCount;
-(BOOL)isShared;
-(void)dealloc;
-(void)returnToStorageFactory:(id)arg1 ;
-(unsigned long long)accessCount;
-(BOOL)decrementAccessCount;
-(BOOL)decrementAccessAndUseCountButLeaveAccessedIfLastUse;
-(BOOL)decrementAccessAndUseCount;
-(BOOL)_incrementAccessCount;
-(BOOL)_decrementAccessCount;
-(void)_markAsPurgeable;
-(BOOL)_markAsUnpurgeable;
-(void)_visitRead:(/*^block*/id)arg1 ;
-(long long)readStorageInRegion:(id)arg1 block:(/*^block*/id)arg2 ;
-(long long)writeStorageInRegion:(id)arg1 block:(/*^block*/id)arg2 ;
-(long long)copyFromTile:(id)arg1 region:(id)arg2 ;
@end

