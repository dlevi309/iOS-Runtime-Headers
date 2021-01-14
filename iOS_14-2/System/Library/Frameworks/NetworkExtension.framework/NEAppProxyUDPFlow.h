/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEAppProxyFlow.h>

@class NWEndpoint;

@interface NEAppProxyUDPFlow : NEAppProxyFlow {

	NWEndpoint* _localEndpoint;

}

@property (readonly) NWEndpoint * localEndpoint;              //@synthesize localEndpoint=_localEndpoint - In the implementation block
-(void)readDatagramsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithNEFlow:(NEFlowRef)arg1 queue:(id)arg2 ;
-(void)openWithLocalEndpoint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)writeDatagrams:(id)arg1 sentByEndpoints:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)description;
-(NWEndpoint *)localEndpoint;
@end

