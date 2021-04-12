/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoBackup.framework/NanoBackup
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface NBManager : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _externalQueue;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> externalQueue;              //@synthesize externalQueue=_externalQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(id)connection;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)unsafe_invalidate;
-(NSObject*<OS_dispatch_queue>)externalQueue;
-(void)setExternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)listBackupsOfType:(unsigned long long)arg1 timeout:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)listBackupsWithTimeout:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)listBackupsOfType:(unsigned long long)arg1 withSynchronousCompletionHandler:(/*^block*/id)arg2 ;
-(void)createBackupForPairingID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)createBackupForPairingID:(id)arg1 synchronousCompletionHandler:(/*^block*/id)arg2 ;
-(void)listBackupsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)listBackupsWithSynchronousCompletionHandler:(/*^block*/id)arg1 ;
-(void)restoreFromBackup:(id)arg1 forDevice:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)restoreFromBackup:(id)arg1 forDevice:(id)arg2 ;
-(void)restoreFromDevice:(id)arg1 forDevice:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)restoreFromDevice:(id)arg1 forDevice:(id)arg2 ;
-(void)createBackupForDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)createBackupForDevice:(id)arg1 synchronousCompletionHandler:(/*^block*/id)arg2 ;
-(void)deleteBackup:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)deleteBackup:(id)arg1 ;
@end

