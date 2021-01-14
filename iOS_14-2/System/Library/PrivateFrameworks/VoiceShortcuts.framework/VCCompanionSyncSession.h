/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/SYSessionDelegate.h>

@protocol VCCompanionSyncSessionDelegate, OS_dispatch_queue, OS_os_transaction, VCShortcutSyncService;
@class SYSession, NSObject, NSSet, NSString;

@interface VCCompanionSyncSession : NSObject <SYSessionDelegate> {

	id<VCCompanionSyncSessionDelegate> _delegate;
	SYSession* _session;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_os_transaction> _transaction;
	id<VCShortcutSyncService> _service;
	NSSet* _syncDataHandlers;

}

@property (nonatomic,readonly) SYSession * session;                                           //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_transaction> transaction;                      //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) id<VCShortcutSyncService> service;                             //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSSet * syncDataHandlers;                                 //@synthesize syncDataHandlers=_syncDataHandlers - In the implementation block
@property (assign,nonatomic,__weak) id<VCCompanionSyncSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)direction;
-(id<VCCompanionSyncSessionDelegate>)delegate;
-(NSObject*<OS_os_transaction>)transaction;
-(NSString *)debugDescription;
-(NSSet *)syncDataHandlers;
-(unsigned)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)syncSession:(id)arg1 didEndWithError:(id)arg2 ;
-(BOOL)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2 ;
-(void)resetDataStoreForSyncSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(SYSession *)session;
-(void)setDelegate:(id<VCCompanionSyncSessionDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<VCShortcutSyncService>)service;
-(id)initWithSYSession:(id)arg1 service:(id)arg2 syncDataHandlers:(id)arg3 ;
@end

