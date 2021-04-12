/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)batteryState;
-(double)batteryLevel;
-(void)setBatteryLevel:(double)arg1 ;
-(long long)batteryType;
-(void)setBatteryState:(long long)arg1 ;
-(void)setBatteryType:(long long)arg1 ;
@end

