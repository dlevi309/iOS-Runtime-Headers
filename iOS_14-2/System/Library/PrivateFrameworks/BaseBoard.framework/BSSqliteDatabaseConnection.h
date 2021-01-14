/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@protocol OS_dispatch_queue;
#import <BaseBoard/BaseBoard-Structs.h>
@class NSObject, NSCache, NSHashTable;

@interface BSSqliteDatabaseConnection : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	sqlite3Ref _queue_dbConnection;
	NSCache* _queue_queryCache;
	NSHashTable* _queue_observers;

}
-(id)init;
-(id)initWithInMemoryDatabase;
-(void)close;
-(id)prepareStatement:(id)arg1 ;
-(BOOL)truncateDatabaseAndReturnError:(out id*)arg1 ;
-(id)initWithFileURL:(id)arg1 dataProtectionClass:(unsigned long long)arg2 ;
-(void)dealloc;
@end

