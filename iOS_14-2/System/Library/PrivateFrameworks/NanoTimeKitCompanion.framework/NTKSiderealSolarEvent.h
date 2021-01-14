/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface NTKSiderealSolarEvent : NSObject <NSSecureCoding> {

	double _degree;
	NSDate* _time;
	long long _type;

}

@property (nonatomic,readonly) NSDate * time;               //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double angle; 
@property (nonatomic,readonly) double degree; 
+(BOOL)supportsSecureCoding;
+(id)eventWithType:(long long)arg1 time:(id)arg2 degree:(double)arg3 ;
+(id)eventWithType:(long long)arg1 degree:(double)arg2 ;
-(double)angle;
-(NSDate *)time;
-(void)encodeWithCoder:(id)arg1 ;
-(double)degree;
-(id)description;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugNameForType:(long long)arg1 ;
@end

