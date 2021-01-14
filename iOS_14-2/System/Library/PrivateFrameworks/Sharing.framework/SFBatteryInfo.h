/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SFBatteryInfo : NSObject <NSSecureCoding> {

	double _batteryLevel;
	long long _batteryState;
	long long _batteryType;

}

@property (assign,nonatomic) double batteryLevel;                 //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (assign,nonatomic) long long batteryState;              //@synthesize batteryState=_batteryState - In the implementation block
@property (assign,nonatomic) long long batteryType;               //@synthesize batteryType=_batteryType - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)batteryLevel;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)batteryState;
-(long long)batteryType;
-(void)setBatteryState:(long long)arg1 ;
-(void)setBatteryType:(long long)arg1 ;
-(void)setBatteryLevel:(double)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

