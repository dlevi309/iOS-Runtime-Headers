/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)clear;
-(id)data;
-(void)setRoutingToken:(NSData *)arg1 ;
-(NSData *)routingToken;
-(void)setWrappedInvocationKey:(pcc_wrapped_invocation_key*)arg1 ;
-(pcc_wrapped_invocation_key*)wrappedInvocationKey;
-(id)initWithKey:(id)arg1 permittedRemoteMeasurement:(id)arg2 attestation:(id)arg3 ;
@end

