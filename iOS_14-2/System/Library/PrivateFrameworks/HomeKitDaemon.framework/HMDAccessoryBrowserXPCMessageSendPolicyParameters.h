/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDXPCMessageSendPolicyParameters.h>

@interface HMDAccessoryBrowserXPCMessageSendPolicyParameters : HMDXPCMessageSendPolicyParameters {

	BOOL _browsing;

}

@property (assign,getter=isBrowsing,nonatomic) BOOL browsing;              //@synthesize browsing=_browsing - In the implementation block
-(void)setBrowsing:(BOOL)arg1 ;
-(id)signature;
-(BOOL)isBrowsing;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithEntitlements:(unsigned long long)arg1 browsing:(BOOL)arg2 ;
@end

