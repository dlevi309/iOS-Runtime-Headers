/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_errorWithErrorCode:(int)arg1 ;
+(id)privateOnDiskDatabaseURL;
+(id)writeAheadLogURLForDatabaseURL:(id)arg1 ;
+(id)writeAheadLogSharedMemoryURLForDatabaseURL:(id)arg1 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(int)close;
-(id<WBSSQLiteDatabaseDelegate>)delegate;
-(void)setDelegate:(id<WBSSQLiteDatabaseDelegate>)arg1 ;
-(sqlite3Ref)handle;
-(NSURL *)url;
-(long long)lastInsertRowID;
-(BOOL)executeQuery:(id)arg1 error:(id*)arg2 ;
-(NSString *)lastErrorMessage;
-(NSError *)lastError;
-(id)fetchQuery:(id)arg1 ;
-(id)initWithURL:(id)arg1 queue:(id)arg2 ;
-(BOOL)openWithAccessType:(long long)arg1 error:(id*)arg2 ;
-(int)checkpointWriteAheadLogWithLogFrameCount:(int*)arg1 checkpointedFrameCount:(int*)arg2 ;
-(BOOL)reportErrorWithCode:(int)arg1 statement:(sqlite3_stmtRef)arg2 error:(id*)arg3 ;
-(id)checkIntegrity;
-(int)lastErrorCode;
-(BOOL)openWithAccessType:(long long)arg1 vfs:(id)arg2 error:(id*)arg3 ;
-(BOOL)openWithAccessType:(long long)arg1 protectionType:(long long)arg2 vfs:(id)arg3 error:(id*)arg4 ;
-(BOOL)_openWithFlags:(int)arg1 vfs:(id)arg2 error:(id*)arg3 ;
-(BOOL)reportErrorWithCode:(int)arg1 query:(id)arg2 error:(id*)arg3 ;
-(void)_reportSevereError:(id)arg1 ;
-(id)fetchQuery:(id)arg1 stringArguments:(id)arg2 ;
-(long long)changedRowCount;
-(BOOL)tryToPerformTransactionInBlock:(/*^block*/id)arg1 ;
-(BOOL)enableWAL:(id*)arg1 ;
@end

