/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <WiFiKit/WFOperation.h>

@protocol WFWiFiJoinProxy;
@class WFNetworkProfile, WFNetworkScanRecord;

@interface WFEnterpriseJoinOperation : WFOperation {

	WFNetworkProfile* _profile;
	WFNetworkScanRecord* _network;
	id<WFWiFiJoinProxy> _joinProxy;

}

@property (nonatomic,retain) WFNetworkProfile * profile;                 //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) WFNetworkScanRecord * network;              //@synthesize network=_network - In the implementation block
@property (nonatomic,retain) id<WFWiFiJoinProxy> joinProxy;              //@synthesize joinProxy=_joinProxy - In the implementation block
-(void)start;
-(WFNetworkScanRecord *)network;
-(void)setNetwork:(WFNetworkScanRecord *)arg1 ;
-(WFNetworkProfile *)profile;
-(void)setProfile:(WFNetworkProfile *)arg1 ;
-(void)joinNetworkRef:(WiFiNetworkRef)arg1 ;
-(void)_handleEnterpriseJoinResult:(long long)arg1 userInfo:(id)arg2 ;
-(id<WFWiFiJoinProxy>)joinProxy;
-(id)initWithJoinProxy:(id)arg1 network:(id)arg2 profile:(id)arg3 ;
-(void)_joinComplete:(int)arg1 network:(WiFiNetworkRef)arg2 ;
-(void)setJoinProxy:(id<WFWiFiJoinProxy>)arg1 ;
@end

