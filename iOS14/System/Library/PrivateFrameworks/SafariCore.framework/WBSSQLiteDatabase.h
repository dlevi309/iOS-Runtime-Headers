/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


@protocol OS_dispatch_queue, WBSSQLiteDatabaseDelegate;
#import <SafariCore/SafariCore-Structs.h>
@class NSObject, NSURL, NSString, NSError;

@interface WBSSQLiteDatabase : NSObject {

	sqlite3Ref _handle;
	NSObject*<OS_dispatch_queue> _queue;
	id<WBSSQLiteDatabaseDelegate> _delegate;
	NSURL* _url;

}

@property (assign,nonatomic,__weak) id<WBSSQLiteDatabaseDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) sqlite3Ref handle;                                        //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                              //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) int lastErrorCode; 
@property (nonatomic,readonly) NSString * lastErrorMessage; 
@property (nonatomic,readonly) NSError * lastError; 
@property (nonatomic,readonly) long long lastInsertRowID; 
@property (nonatomic,readonly) long long changedRowCount; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
+(void)initialize;
+(id)inMemoryDatabaseURL;
+(id)privateOnDiskDatabaseURL;
+(id)_errorWithErrorCode:(int)arg1 ;
+(id)writeAheadLogURLForDatabaseURL:(id)arg1 ;
+(id)writeAheadLogSharedMemoryURLForDatabaseURL:(id)arg1 ;
-(NSError *)lastError;
-(int)lastErrorCode;
-(sqlite3Ref)handle;
-(id<WBSSQLiteDatabaseDelegate>)delegate;
-(long long)lastInsertRowID;
-(int)close;
-(id)checkIntegrity;
-(BOOL)_openWithFlags:(int)arg1 vfs:(id)arg2 error:(id*)arg3 ;
-(BOOL)executeQuery:(id)arg1 error:(id*)arg2 ;
-(BOOL)reportErrorWithCode:(int)arg1 statement:(sqlite3_stmtRef)arg2 error:(id*)arg3 ;
-(NSURL *)url;
-(BOOL)tryToPerformTransactionInBlock:(/*^block*/id)arg1 ;
-(BOOL)enableWAL:(id*)arg1 ;
-(void)_reportSevereError:(id)arg1 ;
-(void)setDelegate:(id<WBSSQLiteDatabaseDelegate>)arg1 ;
-(BOOL)reportErrorWithCode:(int)arg1 query:(id)arg2 error:(id*)arg3 ;
-(BOOL)openWithAccessType:(long long)arg1 protectionType:(long long)arg2 vfs:(id)arg3 error:(id*)arg4 ;
-(NSString *)lastErrorMessage;
-(BOOL)openWithAccessType:(long long)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithURL:(id)arg1 queue:(id)arg2 ;
-(id)fetchQuery:(id)arg1 ;
-(id)fetchQuery:(id)arg1 stringArguments:(id)arg2 ;
-(int)checkpointWriteAheadLogWithLogFrameCount:(int*)arg1 checkpointedFrameCount:(int*)arg2 ;
-(void)dealloc;
-(BOOL)openWithAccessType:(long long)arg1 vfs:(id)arg2 error:(id*)arg3 ;
-(long long)changedRowCount;
@end

