/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


#import <HomeUI/HomeUI-Structs.h>
@class HMHome, CLCircularRegion, NSString;

@interface HULocationTriggerRegion : NSObject {

	unsigned long long _regionType;
	unsigned long long _eventType;
	HMHome* _home;
	CLCircularRegion* _circularRegion;

}

@property (nonatomic,readonly) unsigned long long regionType;                                      //@synthesize regionType=_regionType - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) unsigned long long eventType;                                       //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                      //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) CLCircularRegion * circularRegion;                                  //@synthesize circularRegion=_circularRegion - In the implementation block
@property (nonatomic,readonly) CLCircularRegion * defaultCircularRegionForCoordinate; 
+(id)homeRegionWithHome:(id)arg1 eventType:(unsigned long long)arg2 ;
+(id)customRegionWithCircularRegion:(id)arg1 ;
-(unsigned long long)eventType;
-(CLLocationCoordinate2D)coordinate;
-(CLCircularRegion *)circularRegion;
-(unsigned long long)regionType;
-(NSString *)identifier;
-(HMHome *)home;
-(CLCircularRegion *)defaultCircularRegionForCoordinate;
-(id)initWithRegionType:(unsigned long long)arg1 home:(id)arg2 circularRegion:(id)arg3 eventType:(unsigned long long)arg4 ;
@end

