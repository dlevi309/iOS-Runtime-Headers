/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSMutableArray, GEOTileDB, NSObject;

@interface _GEOTileDBWriteQueue : NSObject {

	unsigned long long _maxOperations;
	unsigned long long _maxOperationsSizeInBytes;
	NSMutableArray* _pendingOperations;
	GEOTileDB* _db;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _pendingSizeInBytes;

}
-(id)initWithDB:(id)arg1 maxOperations:(unsigned long long)arg2 maxOperationsSizeInBytes:(unsigned long long)arg3 ;
-(id)init;
-(void)addOperation:(id)arg1 ;
-(void)_prunePendingOperationsSupercededByOperationOnIsolationQueue:(id)arg1 ;
-(id)dataForKey:(const GEOTileKey*)arg1 ETag:(id*)arg2 originalLoadReason:(unsigned char*)arg3 isKnownNotToExist:(BOOL*)arg4 ;
-(void)prunePendingOperationsSupercededByOperation:(id)arg1 ;
-(void)dropAllPendingOperations;
-(void)flushPendingOperations:(BOOL)arg1 ;
-(void)_flushPendingOperations;
@end

