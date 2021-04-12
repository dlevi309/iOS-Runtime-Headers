/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEAppProxyFlow.h>

@class NWEndpoint;

@interface NEAppProxyUDPFlow : NEAppProxyFlow {

	NWEndpoint* _localEndpoint;

}

@property (readonly) NWEndpoint * localEndpoint;              //@synthesize localEndpoint=_localEndpoint - In the implementation block
-(id)description;
-(NWEndpoint *)localEndpoint;
-(void)readDatagramsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithNEFlow:(NEFlowRef)arg1 queue:(id)arg2 ;
-(void)openWithLocalEndpoint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)writeDatagrams:(id)arg1 sentByEndpoints:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

