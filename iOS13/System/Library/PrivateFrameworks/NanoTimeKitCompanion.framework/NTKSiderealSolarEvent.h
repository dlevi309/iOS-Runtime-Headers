/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSDate;

@interface NTKSiderealSolarEvent : NSObject {

	double _degree;
	NSDate* _time;
	long long _type;

}

@property (nonatomic,readonly) NSDate * time;               //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double angle; 
@property (nonatomic,readonly) double degree; 
+(id)eventWithType:(long long)arg1 time:(id)arg2 degree:(double)arg3 ;
+(id)eventWithType:(long long)arg1 degree:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
-(NSDate *)time;
-(double)angle;
-(double)degree;
-(id)debugNameForType:(long long)arg1 ;
@end

