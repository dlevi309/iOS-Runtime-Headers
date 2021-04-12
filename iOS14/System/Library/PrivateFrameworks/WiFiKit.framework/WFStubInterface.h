/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <WiFiKit/WFInterface.h>

@class WFNetworkScanRecord;

@interface WFStubInterface : WFInterface {

	BOOL _currentNetworkIsDirected;
	BOOL _ipv4SelfAssigned;
	BOOL _hasNoGatewayIP;
	WFNetworkScanRecord* _currentNetwork;

}

@property (assign) BOOL currentNetworkIsDirected;              //@synthesize currentNetworkIsDirected=_currentNetworkIsDirected - In the implementation block
@property (assign) BOOL ipv4SelfAssigned;                      //@synthesize ipv4SelfAssigned=_ipv4SelfAssigned - In the implementation block
@property (assign) BOOL hasNoGatewayIP;                        //@synthesize hasNoGatewayIP=_hasNoGatewayIP - In the implementation block
-(void)setCurrentNetwork:(id)arg1 ;
-(id)currentNetwork;
-(void)setHasNoGatewayIP:(BOOL)arg1 ;
-(void)setIpv4SelfAssigned:(BOOL)arg1 ;
-(id)interfaceName;
-(BOOL)currentNetworkIsDirected;
-(BOOL)ipv4SelfAssigned;
-(BOOL)hasNoGatewayIP;
-(void)setCurrentNetworkIsDirected:(BOOL)arg1 ;
@end

