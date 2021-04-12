/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFMessageFilter.h>

@class HMDXPCClientConnection;

@interface HMDXPCMessageFilter : HMFMessageFilter {

	HMDXPCClientConnection* _connection;

}

@property (readonly) HMDXPCClientConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)policyClasses;
+(BOOL)canInitWithMessage:(id)arg1 ;
-(id)initWithMessage:(id)arg1 ;
-(HMDXPCClientConnection *)connection;
@end

