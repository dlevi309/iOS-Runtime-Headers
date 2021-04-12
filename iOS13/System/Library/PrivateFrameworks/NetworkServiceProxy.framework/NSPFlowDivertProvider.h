/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/

#import <NetworkExtension/NEAppProxyProvider.h>

@class NSPManager;

@interface NSPFlowDivertProvider : NEAppProxyProvider {

	NSPManager* _manager;

}

@property (retain) NSPManager * manager;              //@synthesize manager=_manager - In the implementation block
-(id)init;
-(NSPManager *)manager;
-(void)setManager:(NSPManager *)arg1 ;
-(BOOL)handleNewFlow:(id)arg1 ;
-(void)startProxyWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopProxyWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

