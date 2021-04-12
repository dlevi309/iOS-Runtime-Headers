/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/


@protocol OS_dispatch_queue;
#import <FileProviderDaemon/FileProviderDaemon-Structs.h>
@class PQLConnection, NSURL, NSObject;

@interface FPDAccessControlStore : NSObject {

	PQLConnection* _dbConnection;
	NSURL* _databaseBaseURL;
	BOOL _dbIsOpen;
	NSObject*<OS_dispatch_queue> _syncQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;              //@synthesize syncQueue=_syncQueue - In the implementation block
+(id)sharedStore;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(id)init;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)openDatabase;
-(void)dealloc;
-(id)initWithDatabaseBaseURL:(id)arg1 ;
-(void)validateDatabase:(id)arg1 ;
-(void)performWithDBConnection:(/*^block*/id)arg1 ;
-(void)reopenDatabaseAfterUnlock;
-(id)keyForBundleIdentifier:(id)arg1 generateIfNotFound:(BOOL)arg2 keyGenBlock:(/*^block*/id)arg3 ;
-(id)bookmarkForItemID:(id)arg1 consumerIdentifier:(id)arg2 ;
-(id)verifyBookmark:(id)arg1 auditToken:(SCD_Struct_FP0)arg2 consumerIdentifier:(id)arg3 ;
-(id)parseUnverifiedBookmark:(id)arg1 ;
-(BOOL)lookupLRUSignature:(id)arg1 ;
-(void)addLRUSignature:(id)arg1 ;
@end

