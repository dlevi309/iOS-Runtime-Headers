/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HMFoundation/HMFMessageTransport.h>
#import <libobjc.A.dylib/HMXPCMessageTransport.h>

@class HMXPCClient, NSString;

@interface HMXPCClientConnectionProxy : HMFMessageTransport <HMXPCMessageTransport> {

	HMXPCClient* _client;
	/*^block*/id _refreshHandler;

}

@property (__weak) HMXPCClient * client;                            //@synthesize client=_client - In the implementation block
@property (nonatomic,copy) id refreshHandler;                       //@synthesize refreshHandler=_refreshHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleMessage:(id)arg1 ;
-(HMXPCClient *)client;
-(void)setClient:(HMXPCClient *)arg1 ;
-(void)fetchUserInfo:(/*^block*/id)arg1 ;
-(void)setRefreshHandler:(id)arg1 ;
-(id)initWithRefreshHandler:(/*^block*/id)arg1 ;
-(id)refreshHandler;
-(void)handleMessage:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
@end

