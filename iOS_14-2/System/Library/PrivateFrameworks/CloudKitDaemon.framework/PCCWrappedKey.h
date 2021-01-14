/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class NSData;

@interface PCCWrappedKey : NSObject {

	pcc_wrapped_invocation_key* _wrappedInvocationKey;
	NSData* _routingToken;

}

@property (assign) pcc_wrapped_invocation_key* wrappedInvocationKey;              //@synthesize wrappedInvocationKey=_wrappedInvocationKey - In the implementation block
@property (retain) NSData * routingToken;                                         //@synthesize routingToken=_routingToken - In the implementation block
-(void)clear;
-(id)data;
-(void)dealloc;
-(void)setRoutingToken:(NSData *)arg1 ;
-(NSData *)routingToken;
-(void)setWrappedInvocationKey:(pcc_wrapped_invocation_key*)arg1 ;
-(pcc_wrapped_invocation_key*)wrappedInvocationKey;
-(id)initWithKey:(id)arg1 permittedRemoteMeasurement:(id)arg2 attestation:(id)arg3 ;
@end

