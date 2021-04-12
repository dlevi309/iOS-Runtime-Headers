/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HMFoundation/HMFMessageTransport.h>
#import <libobjc.A.dylib/HMXPCMessageTransport.h>

@class NSString;

@interface HMXPCClientConnectionProxy : HMFMessageTransport <HMXPCMessageTransport> {

	/*^block*/id _refreshHandler;

}

@property (nonatomic,copy) id refreshHandler;                       //@synthesize refreshHandler=_refreshHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleMessage:(id)arg1 ;
-(void)handleMessage:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(id)refreshHandler;
-(id)initWithRefreshHandler:(/*^block*/id)arg1 ;
-(void)setRefreshHandler:(id)arg1 ;
@end

