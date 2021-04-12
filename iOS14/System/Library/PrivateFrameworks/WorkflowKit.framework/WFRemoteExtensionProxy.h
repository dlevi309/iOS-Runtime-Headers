/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/INCExtensionProxy.h>

@class INCExtensionConnection, SARemoteDevice;

@interface WFRemoteExtensionProxy : NSObject <INCExtensionProxy> {

	INCExtensionConnection* _connection;
	SARemoteDevice* _remoteDevice;

}

@property (nonatomic,readonly) INCExtensionConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy,readonly) SARemoteDevice * remoteDevice;               //@synthesize remoteDevice=_remoteDevice - In the implementation block
@property (nonatomic,copy) id backgroundAppHandler; 
-(void)handleIntentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)confirmIntentWithCompletionHandler:(/*^block*/id)arg1 ;
-(INCExtensionConnection *)connection;
-(SARemoteDevice *)remoteDevice;
-(void)resolveIntentSlotKeyPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resolveIntentSlotKeyPaths:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithConnection:(id)arg1 andDevice:(id)arg2 ;
-(void)handleIntentRemotelyWithRemoteOperation:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

