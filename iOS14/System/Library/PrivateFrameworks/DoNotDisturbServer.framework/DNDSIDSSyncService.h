/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/DNDSSyncService.h>

@protocol OS_dispatch_queue, DNDSSyncServiceDelegate;
@class NSObject, IDSService, NSString;

@interface DNDSIDSSyncService : NSObject <IDSServiceDelegate, DNDSSyncService> {

	NSObject*<OS_dispatch_queue> _queue;
	IDSService* _syncService;
	id<DNDSSyncServiceDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<DNDSSyncServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(id<DNDSSyncServiceDelegate>)delegate;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)setDelegate:(id<DNDSSyncServiceDelegate>)arg1 ;
-(id)initWithIDSService:(id)arg1 ;
-(void)_queue_resume;
-(void)resume;
-(void)sendMessage:(id)arg1 withVersionNumber:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_queue_sendMessage:(id)arg1 withVersionNumber:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)_queue_handleIncomingMessage:(id)arg1 deviceIdentifier:(id)arg2 ;
@end

