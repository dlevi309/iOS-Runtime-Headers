/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSString;

@interface NEHotspotNetwork : NSObject {

	CNNetworkRef _network;

}

@property (assign) CNNetworkRef network;                                   //@synthesize network=_network - In the implementation block
@property (readonly) NSString * interfaceName; 
@property (readonly) NSString * SSID; 
@property (readonly) NSString * BSSID; 
@property (readonly) double signalStrength; 
@property (getter=isSecure,readonly) BOOL secure; 
@property (getter=didAutoJoin,readonly) BOOL autoJoined; 
@property (getter=didJustJoin,readonly) BOOL justJoined; 
@property (getter=isChosenHelper,readonly) BOOL chosenHelper; 
-(void)dealloc;
-(id)description;
-(void)setPassword:(id)arg1 ;
-(void)setConfidence:(long long)arg1 ;
-(CNNetworkRef)network;
-(void)setNetwork:(CNNetworkRef)arg1 ;
-(BOOL)isSecure;
-(NSString *)interfaceName;
-(double)signalStrength;
-(id)initWithNetwork:(CNNetworkRef)arg1 ;
-(NSString *)SSID;
-(NSString *)BSSID;
-(BOOL)didAutoJoin;
-(BOOL)didJustJoin;
-(BOOL)isChosenHelper;
@end

