/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessoryNavigation.framework/AccessoryNavigation
*/


@class NSString;

@interface ACCNavigationAccessoryComponent : NSObject {

	BOOL _isEnabled;
	BOOL _requestSourceName;
	BOOL _requestSourceSupportsRouteGuidance;
	BOOL _supportsExitInfo;
	unsigned long long _identifier;
	NSString* _name;
	unsigned long long _maxLength_CurrentRoadName;
	unsigned long long _maxLength_DestinationRoadName;
	unsigned long long _maxLength_PostManeuverRoadName;
	unsigned long long _maxLength_ManeuverDescription;
	unsigned long long _maxLength_LaneGuidanceDescription;
	unsigned long long _maxCapacity_GuidanceManeuver;
	unsigned long long _maxCapacity_LaneGuidance;

}

@property (assign,nonatomic) unsigned long long identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * name;                                                             //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL isEnabled;                                                    //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long maxLength_CurrentRoadName;                      //@synthesize maxLength_CurrentRoadName=_maxLength_CurrentRoadName - In the implementation block
@property (assign,nonatomic) unsigned long long maxLength_DestinationRoadName;                  //@synthesize maxLength_DestinationRoadName=_maxLength_DestinationRoadName - In the implementation block
@property (assign,nonatomic) unsigned long long maxLength_PostManeuverRoadName;                 //@synthesize maxLength_PostManeuverRoadName=_maxLength_PostManeuverRoadName - In the implementation block
@property (assign,nonatomic) unsigned long long maxLength_ManeuverDescription;                  //@synthesize maxLength_ManeuverDescription=_maxLength_ManeuverDescription - In the implementation block
@property (assign,nonatomic) unsigned long long maxLength_LaneGuidanceDescription;              //@synthesize maxLength_LaneGuidanceDescription=_maxLength_LaneGuidanceDescription - In the implementation block
@property (assign,nonatomic) BOOL requestSourceName;                                            //@synthesize requestSourceName=_requestSourceName - In the implementation block
@property (assign,nonatomic) BOOL requestSourceSupportsRouteGuidance;                           //@synthesize requestSourceSupportsRouteGuidance=_requestSourceSupportsRouteGuidance - In the implementation block
@property (assign,nonatomic) BOOL supportsExitInfo;                                             //@synthesize supportsExitInfo=_supportsExitInfo - In the implementation block
@property (assign,nonatomic) unsigned long long maxCapacity_GuidanceManeuver;                   //@synthesize maxCapacity_GuidanceManeuver=_maxCapacity_GuidanceManeuver - In the implementation block
@property (assign,nonatomic) unsigned long long maxCapacity_LaneGuidance;                       //@synthesize maxCapacity_LaneGuidance=_maxCapacity_LaneGuidance - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)identifier;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(BOOL)isEnabled;
-(void)setIsEnabled:(BOOL)arg1 ;
-(BOOL)requestSourceName;
-(BOOL)requestSourceSupportsRouteGuidance;
-(unsigned long long)maxLength_CurrentRoadName;
-(unsigned long long)maxLength_DestinationRoadName;
-(unsigned long long)maxLength_PostManeuverRoadName;
-(unsigned long long)maxLength_ManeuverDescription;
-(unsigned long long)maxCapacity_GuidanceManeuver;
-(void)setMaxLength_CurrentRoadName:(unsigned long long)arg1 ;
-(void)setMaxLength_DestinationRoadName:(unsigned long long)arg1 ;
-(void)setMaxLength_PostManeuverRoadName:(unsigned long long)arg1 ;
-(void)setMaxLength_ManeuverDescription:(unsigned long long)arg1 ;
-(void)setMaxCapacity_GuidanceManeuver:(unsigned long long)arg1 ;
-(void)setRequestSourceName:(BOOL)arg1 ;
-(void)setRequestSourceSupportsRouteGuidance:(BOOL)arg1 ;
-(void)setMaxLength_LaneGuidanceDescription:(unsigned long long)arg1 ;
-(void)setMaxCapacity_LaneGuidance:(unsigned long long)arg1 ;
-(void)setSupportsExitInfo:(BOOL)arg1 ;
-(unsigned long long)maxLength_LaneGuidanceDescription;
-(unsigned long long)maxCapacity_LaneGuidance;
-(BOOL)supportsExitInfo;
@end

