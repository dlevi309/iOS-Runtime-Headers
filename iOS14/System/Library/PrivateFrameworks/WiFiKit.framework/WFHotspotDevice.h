/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <libobjc.A.dylib/WFNetworkListRecord.h>

@class SFRemoteHotspotDevice, NSString;

@interface WFHotspotDevice : NSObject <WFNetworkListRecord> {

	SFRemoteHotspotDevice* _hotspotDevice;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SFRemoteHotspotDevice * hotspotDevice;              //@synthesize hotspotDevice=_hotspotDevice - In the implementation block
@property (nonatomic,readonly) NSString * ssid; 
-(BOOL)isSecure;
-(unsigned long long)signalBars;
-(id)hotspotSignalStrength;
-(id)init;
-(BOOL)_isEqualToHotspotDevice:(id)arg1 ;
-(id)hotspotBatteryLife;
-(BOOL)isEquivalentRecord:(id)arg1 ;
-(id)subtitle;
-(long long)rssi;
-(void)setScaledRSSI:(float)arg1 ;
-(NSString *)ssid;
-(unsigned long long)uniqueIdentifier;
-(BOOL)prominentDisplay;
-(BOOL)iOSHotspot;
-(BOOL)isKnown;
-(NSString *)description;
-(BOOL)_isEqualToNetwork:(id)arg1 ;
-(BOOL)isUnconfiguredAccessory;
-(unsigned long long)hash;
-(BOOL)isHotspot20;
-(BOOL)isEnterprise;
-(BOOL)isPopular;
-(float)scaledRSSI;
-(id)hotspotCellularProtocol;
-(BOOL)isAdhoc;
-(id)title;
-(BOOL)isInstantHotspot;
-(BOOL)canBeDisplayedAsCurrent;
-(long long)securityMode;
-(BOOL)isEqual:(id)arg1 ;
-(SFRemoteHotspotDevice *)hotspotDevice;
-(id)initWithHotspotDevice:(id)arg1 ;
-(void)setHotspotDevice:(SFRemoteHotspotDevice *)arg1 ;
@end

