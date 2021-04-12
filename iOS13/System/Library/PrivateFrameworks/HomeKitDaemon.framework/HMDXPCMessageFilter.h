/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFMessageFilter.h>

@class HMDXPCClientConnection;

@interface HMDXPCMessageFilter : HMFMessageFilter {

	HMDXPCClientConnection* _connection;

}

@property (readonly) HMDXPCClientConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(BOOL)canInitWithMessage:(id)arg1 ;
+(id)policyClasses;
-(HMDXPCClientConnection *)connection;
-(id)initWithMessage:(id)arg1 ;
@end

