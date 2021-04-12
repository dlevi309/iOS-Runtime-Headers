/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)addOperation:(id)arg1 ;
-(void)_prunePendingOperationsSupercededByOperationOnIsolationQueue:(id)arg1 ;
-(void)flushPendingOperations:(BOOL)arg1 ;
-(void)_flushPendingOperations;
-(id)dataForKey:(const GEOTileKey*)arg1 ETag:(id*)arg2 originalLoadReason:(unsigned char*)arg3 isKnownNotToExist:(BOOL*)arg4 ;
-(id)initWithDB:(id)arg1 maxOperations:(unsigned long long)arg2 maxOperationsSizeInBytes:(unsigned long long)arg3 ;
-(void)dropAllPendingOperations;
-(void)prunePendingOperationsSupercededByOperation:(id)arg1 ;
@end

