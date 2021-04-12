/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <libobjc.A.dylib/NRTermsAcknowledgementRegistry.h>

@protocol NRTermsAcknowledgementRegistry <NSObject>
@required
-(void)add:(id)arg1 forDeviceID:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)checkForAcknowledgement:(id)arg1 forDeviceID:(id)arg2 withCompletion:(/*^block*/id)arg3;

@end


@protocol NRTermsAcknowledgementRegistry;
@class NSXPCConnection, NSString;

@interface NRTermsAcknowledgementRegistry : NSObject <NRTermsAcknowledgementRegistry> {

	id<NRTermsAcknowledgementRegistry> _proxy;

}

@property (nonatomic,readonly) NSXPCConnection * connection; 
@property (nonatomic,readonly) id<NRTermsAcknowledgementRegistry> proxy;              //@synthesize proxy=_proxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)errorWithEnum:(unsigned long long)arg1 ;
+(id)errorStringWithEnum:(unsigned long long)arg1 ;
-(NSXPCConnection *)connection;
-(id<NRTermsAcknowledgementRegistry>)proxy;
-(id)proxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)add:(id)arg1 forDeviceID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)checkForAcknowledgement:(id)arg1 forDeviceID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

