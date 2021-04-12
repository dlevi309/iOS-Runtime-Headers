/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/

#import <NetworkExtension/NEAppProxyProvider.h>

@class NSPManager;

@interface NSPFlowDivertProvider : NEAppProxyProvider {

	NSPManager* _manager;

}

@property (retain) NSPManager * manager;              //@synthesize manager=_manager - In the implementation block
-(id)init;
-(void)setManager:(NSPManager *)arg1 ;
-(BOOL)handleNewFlow:(id)arg1 ;
-(void)startProxyWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopProxyWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSPManager *)manager;
@end

