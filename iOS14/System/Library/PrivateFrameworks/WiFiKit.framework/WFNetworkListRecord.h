/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@protocol WFNetworkListRecord <NSObject,NSCopying>
@required
-(BOOL)isSecure;
-(unsigned long long)signalBars;
-(id)hotspotSignalStrength;
-(id)hotspotBatteryLife;
-(BOOL)isEquivalentRecord:(id)arg1;
-(id)subtitle;
-(long long)rssi;
-(id)ssid;
-(unsigned long long)uniqueIdentifier;
-(BOOL)prominentDisplay;
-(BOOL)iOSHotspot;
-(BOOL)isKnown;
-(BOOL)isUnconfiguredAccessory;
-(BOOL)isEnterprise;
-(BOOL)isPopular;
-(float)scaledRSSI;
-(id)hotspotCellularProtocol;
-(BOOL)isAdhoc;
-(id)title;
-(BOOL)isInstantHotspot;
-(BOOL)canBeDisplayedAsCurrent;

@end

