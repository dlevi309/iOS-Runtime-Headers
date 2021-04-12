/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEAppProxyFlow.h>

@class NWEndpoint;

@interface NEAppProxyTCPFlow : NEAppProxyFlow {

	NWEndpoint* _remoteEndpoint;

}

@property (readonly) NWEndpoint * remoteEndpoint;              //@synthesize remoteEndpoint=_remoteEndpoint - In the implementation block
-(id)description;
-(NWEndpoint *)remoteEndpoint;
-(id)initWithNEFlow:(NEFlowRef)arg1 queue:(id)arg2 ;
-(void)readDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)writeData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

