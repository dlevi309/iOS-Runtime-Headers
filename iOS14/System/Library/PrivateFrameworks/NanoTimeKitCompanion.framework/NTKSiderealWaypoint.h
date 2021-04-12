/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NTKSiderealWaypoint : NSObject <NSSecureCoding> {

	double _degree;
	long long _type;

}

@property (assign,nonatomic) double degree;               //@synthesize degree=_degree - In the implementation block
@property (assign,nonatomic) long long type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)_waypointTypeFromSolarEventType:(long long)arg1 ;
+(id)waypointWithType:(long long)arg1 degree:(double)arg2 ;
+(id)waypointFromSolarEvent:(id)arg1 ;
-(id)localizedName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setType:(long long)arg1 ;
-(double)degree;
-(id)description;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithType:(long long)arg1 degree:(double)arg2 ;
-(void)setDegree:(double)arg1 ;
@end

