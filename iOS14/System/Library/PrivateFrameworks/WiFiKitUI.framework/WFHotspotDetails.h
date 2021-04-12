/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)description;
-(void)setSignalStrength:(NSNumber *)arg1 ;
-(unsigned long long)hash;
-(NSNumber *)signalStrength;
-(NSNumber *)batteryLife;
-(void)setBatteryLife:(NSNumber *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)cellularProtocolString;
-(void)setCellularProtocolString:(NSString *)arg1 ;
-(BOOL)isEqualHotspotDetails:(id)arg1 ;
@end

