/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/CRKIDSListener.h>

@class IDSService, NSString;

@interface CRKConcreteIDSMessageReceiveListener : NSObject <IDSServiceDelegate, CRKIDSListener> {

	IDSService* _service;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) IDSService * service;                //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) id handler;                              //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)listenerWithService:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setHandler:(id)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)invalidate;
-(id)handler;
-(IDSService *)service;
-(void)dealloc;
-(id)initWithService:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

