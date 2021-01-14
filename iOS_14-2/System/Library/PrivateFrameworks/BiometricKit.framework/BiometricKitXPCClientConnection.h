/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableDictionary;

@interface BiometricKitXPCClientConnection : NSObject {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _clients;
	int serverStartedNotificationToken;

}

@property (nonatomic,readonly) NSXPCConnection * xpcConnection;                 //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)connectionWithDeviceType:(long long)arg1 ;
-(BOOL)addClient:(id)arg1 ;
-(void)touchIDButtonPressed:(BOOL)arg1 client:(unsigned long long)arg2 ;
-(void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2 ;
-(void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3 ;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2 ;
-(NSXPCConnection *)xpcConnection;
-(BOOL)removeClient:(id)arg1 ;
-(void)enrollResult:(id)arg1 client:(unsigned long long)arg2 ;
-(void)statusMessage:(unsigned)arg1 details:(id)arg2 client:(unsigned long long)arg3 ;
-(id)client:(unsigned long long)arg1 ;
-(void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)templateUpdate:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3 ;
-(void)homeButtonPressed:(unsigned long long)arg1 ;
-(void)taskResumeStatus:(int)arg1 client:(unsigned long long)arg2 ;
-(id)initWithDeviceType:(long long)arg1 ;
-(void)dealloc;
@end

