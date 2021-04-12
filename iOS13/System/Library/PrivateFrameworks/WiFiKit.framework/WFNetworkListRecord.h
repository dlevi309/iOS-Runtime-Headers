/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@protocol WFNetworkListRecord <NSObject,NSCopying>
@required
-(id)title;
-(unsigned long long)uniqueIdentifier;
-(id)subtitle;
-(id)ssid;
-(long long)rssi;
-(BOOL)isSecure;
-(BOOL)isKnown;
-(unsigned long long)signalBars;
-(BOOL)isAdhoc;
-(BOOL)iOSHotspot;
-(float)scaledRSSI;
-(BOOL)isUnconfiguredAccessory;
-(BOOL)isEnterprise;
-(BOOL)isPopular;
-(BOOL)prominentDisplay;
-(BOOL)isInstantHotspot;
-(id)hotspotBatteryLife;
-(id)hotspotSignalStrength;
-(id)hotspotCellularProtocol;
-(BOOL)canBeDisplayedAsCurrent;

@end

