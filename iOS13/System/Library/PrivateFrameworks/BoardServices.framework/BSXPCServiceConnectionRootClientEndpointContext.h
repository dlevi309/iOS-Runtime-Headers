/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BSXPCServiceConnectionRootContext.h>

@protocol OS_xpc_object;
@class NSObject;

@interface BSXPCServiceConnectionRootClientEndpointContext : BSXPCServiceConnectionRootContext {

	NSObject*<OS_xpc_object> _endpoint;
	BOOL _nonLaunching;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> endpoint;                    //@synthesize endpoint=_endpoint - In the implementation block
@property (getter=isNonLaunching,nonatomic,readonly) BOOL nonLaunching;              //@synthesize nonLaunching=_nonLaunching - In the implementation block
+(id)uniqueClientContextWithEndpoint:(id)arg1 nonLaunching:(BOOL)arg2 description:(id)arg3 ;
-(NSObject*<OS_xpc_object>)endpoint;
-(BOOL)isClient;
-(id)_initWithEndpoint:(id)arg1 nonLaunching:(BOOL)arg2 eDesc:(id)arg3 ;
-(BOOL)isNonLaunching;
@end

