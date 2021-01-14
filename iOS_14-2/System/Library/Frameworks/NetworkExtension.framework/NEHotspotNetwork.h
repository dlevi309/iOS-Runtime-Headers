/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSString;

@interface NEHotspotNetwork : NSObject {

	CNNetworkRef _network;

}

@property (assign) CNNetworkRef network;                    //@synthesize network=_network - In the implementation block
@property (readonly) NSString * interfaceName; 
@property (readonly) NSString * SSID; 
@property (readonly) NSString * BSSID; 
+(void)fetchCurrentWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)SSID;
-(BOOL)isSecure;
-(CNNetworkRef)network;
-(NSString *)interfaceName;
-(id)description;
-(id)initWithNetwork:(CNNetworkRef)arg1 ;
-(void)setConfidence:(long long)arg1 ;
-(void)setPassword:(id)arg1 ;
-(double)signalStrength;
-(NSString *)BSSID;
-(BOOL)didAutoJoin;
-(void)setNetwork:(CNNetworkRef)arg1 ;
-(BOOL)didJustJoin;
-(BOOL)isChosenHelper;
-(void)dealloc;
@end

