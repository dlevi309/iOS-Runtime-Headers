/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <WiFiKit/WFOperation.h>

@class WFNetworkProfile, WFNetworkScanRecord, CWFAssocParameters, CWFInterface;

@interface WFEnterpriseJoinOperation : WFOperation {

	BOOL _usingCoreWiFi;
	WFNetworkProfile* _profile;
	WFNetworkScanRecord* _network;
	CWFAssocParameters* _associationParameters;
	CWFInterface* _interface;
	WiFiManagerClientRef _manager;
	WiFiDeviceClientRef _device;

}

@property (nonatomic,retain) WFNetworkProfile * profile;                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) WFNetworkScanRecord * network;                           //@synthesize network=_network - In the implementation block
@property (assign,nonatomic) BOOL usingCoreWiFi;                                      //@synthesize usingCoreWiFi=_usingCoreWiFi - In the implementation block
@property (nonatomic,retain) CWFAssocParameters * associationParameters;              //@synthesize associationParameters=_associationParameters - In the implementation block
@property (nonatomic,retain) CWFInterface * interface;                                //@synthesize interface=_interface - In the implementation block
@property (assign,nonatomic) WiFiManagerClientRef manager;                            //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic) WiFiDeviceClientRef device;                              //@synthesize device=_device - In the implementation block
-(void)setProfile:(WFNetworkProfile *)arg1 ;
-(void)setInterface:(CWFInterface *)arg1 ;
-(void)start;
-(WFNetworkScanRecord *)network;
-(void)setManager:(WiFiManagerClientRef)arg1 ;
-(CWFInterface *)interface;
-(WiFiDeviceClientRef)device;
-(WFNetworkProfile *)profile;
-(WiFiManagerClientRef)manager;
-(void)setDevice:(WiFiDeviceClientRef)arg1 ;
-(void)setNetwork:(WFNetworkScanRecord *)arg1 ;
-(void)dealloc;
-(id)initWithNetwork:(id)arg1 profile:(id)arg2 ;
-(BOOL)usingCoreWiFi;
-(void)_joinWithCoreWiFi;
-(void)_joinWithMobileWiFi;
-(CWFAssocParameters *)associationParameters;
-(void)joinNetworkRef:(WiFiNetworkRef)arg1 ;
-(void)_joinComplete:(int)arg1 userInfo:(CFDictionaryRef)arg2 network:(WiFiNetworkRef)arg3 ;
-(void)_handleEnterpriseJoinResult:(long long)arg1 userInfo:(id)arg2 network:(WiFiNetworkRef)arg3 ;
-(id)initWithAssocParameters:(id)arg1 interface:(id)arg2 ;
-(void)setUsingCoreWiFi:(BOOL)arg1 ;
-(void)setAssociationParameters:(CWFAssocParameters *)arg1 ;
@end

