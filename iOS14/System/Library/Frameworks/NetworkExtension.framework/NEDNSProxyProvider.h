/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEProvider.h>

@class NSArray;

@interface NEDNSProxyProvider : NEProvider {

	NSArray* _systemDNSSettings;

}

@property (retain) NSArray * systemDNSSettings;              //@synthesize systemDNSSettings=_systemDNSSettings - In the implementation block
-(BOOL)handleNewFlow:(id)arg1 ;
-(void)startProxyWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopProxyWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelProxyWithError:(id)arg1 ;
-(BOOL)handleNewUDPFlow:(id)arg1 initialRemoteEndpoint:(id)arg2 ;
-(NSArray *)systemDNSSettings;
-(void)setSystemDNSSettings:(NSArray *)arg1 ;
@end

