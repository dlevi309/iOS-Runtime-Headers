/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/


@class NSNumber, NSString;

@interface WFHotspotDetails : NSObject {

	NSNumber* _batteryLife;
	NSString* _cellularProtocolString;
	NSNumber* _signalStrength;

}

@property (nonatomic,retain) NSNumber * batteryLife;                       //@synthesize batteryLife=_batteryLife - In the implementation block
@property (nonatomic,copy) NSString * cellularProtocolString;              //@synthesize cellularProtocolString=_cellularProtocolString - In the implementation block
@property (nonatomic,retain) NSNumber * signalStrength;                    //@synthesize signalStrength=_signalStrength - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSNumber *)signalStrength;
-(NSNumber *)batteryLife;
-(void)setBatteryLife:(NSNumber *)arg1 ;
-(void)setSignalStrength:(NSNumber *)arg1 ;
-(NSString *)cellularProtocolString;
-(void)setCellularProtocolString:(NSString *)arg1 ;
-(BOOL)isEqualHotspotDetails:(id)arg1 ;
@end

