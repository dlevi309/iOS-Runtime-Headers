/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecureChannel.framework/SecureChannel
*/

#import <SecureChannel/SecureChannelService.h>

@protocol SecureChannelService;
@class NSXPCConnection, NSObject;

@interface SecureChannelServiceProxy : NSObject <SecureChannelService> {

	NSXPCConnection* _connectionToService;
	NSObject*<SecureChannelService> _remoteObject;

}
+(id)sharedInstance;
-(id)init;
-(void)actionForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)runApproverFlowForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

