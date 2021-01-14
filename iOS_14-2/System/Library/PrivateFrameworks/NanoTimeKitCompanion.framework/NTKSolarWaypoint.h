/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NTKCacheableKeyProvider.h>

@class NSDate, NSString, NTKSolarTimeModel;

@interface NTKSolarWaypoint : NSObject <NTKCacheableKeyProvider> {

	long long _type;
	NSDate* _waypointDate;
	NSString* _localizedName;
	NTKSolarTimeModel* _solarTimeModel;
	double _percentageThroughPeriodForWaypointDate;

}

@property (nonatomic,readonly) long long type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NTKSolarTimeModel * solarTimeModel;                         //@synthesize solarTimeModel=_solarTimeModel - In the implementation block
@property (nonatomic,readonly) NSDate * waypointDate;                                      //@synthesize waypointDate=_waypointDate - In the implementation block
@property (nonatomic,readonly) double percentageThroughPeriodForWaypointDate;              //@synthesize percentageThroughPeriodForWaypointDate=_percentageThroughPeriodForWaypointDate - In the implementation block
@property (nonatomic,readonly) NSString * localizedName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)localizedName;
-(NSString *)description;
-(long long)type;
-(id)ntkCacheableKey;
-(id)initWithType:(long long)arg1 solarTimeModel:(id)arg2 ;
-(void)updateDependentValues;
-(void)updateDependentValuesWithPlaceholderData;
-(NTKSolarTimeModel *)solarTimeModel;
-(NSDate *)waypointDate;
-(double)percentageThroughPeriodForWaypointDate;
@end

