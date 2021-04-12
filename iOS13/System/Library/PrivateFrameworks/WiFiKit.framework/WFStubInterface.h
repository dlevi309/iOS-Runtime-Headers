/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)interfaceName;
-(BOOL)ipv4SelfAssigned;
-(void)setIpv4SelfAssigned:(BOOL)arg1 ;
-(BOOL)hasNoGatewayIP;
-(void)setHasNoGatewayIP:(BOOL)arg1 ;
-(BOOL)currentNetworkIsDirected;
-(void)setCurrentNetworkIsDirected:(BOOL)arg1 ;
@end

