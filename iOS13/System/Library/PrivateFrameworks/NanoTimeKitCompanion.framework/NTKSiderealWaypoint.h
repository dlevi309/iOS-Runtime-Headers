/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@interface NTKSiderealWaypoint : NSObject {

	double _degree;
	long long _type;

}

@property (assign,nonatomic) double degree;               //@synthesize degree=_degree - In the implementation block
@property (assign,nonatomic) long long type;              //@synthesize type=_type - In the implementation block
+(long long)_waypointTypeFromSolarEventType:(long long)arg1 ;
+(id)waypointWithType:(long long)arg1 degree:(double)arg2 ;
+(id)waypointFromSolarEvent:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(id)localizedName;
-(double)degree;
-(void)setDegree:(double)arg1 ;
-(id)initWithType:(long long)arg1 degree:(double)arg2 ;
@end

