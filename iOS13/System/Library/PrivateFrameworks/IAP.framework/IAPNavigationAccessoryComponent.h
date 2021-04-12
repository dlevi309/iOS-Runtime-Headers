/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/IAP
*/


@class NSString;

@interface IAPNavigationAccessoryComponent : NSObject {

	BOOL _isEnabled;
	BOOL _requestSourceName;
	BOOL _requestSourceSupportsRouteGuidance;
	BOOL __enabledModified;
	unsigned long long _identifier;
	NSString* _name;
	unsigned long long _maxLength_CurrentRoadName;
	unsigned long long _maxLength_DestinationRoadName;
	unsigned long long _maxLength_PostManeuverRoadName;
	unsigned long long _maxLength_ManeuverDescription;
	unsigned long long _maxCapacity_GuidanceManeuver;

}

@property (assign) BOOL _enabledModified;                                          //@synthesize _enabledModified=__enabledModified - In the implementation block
@property (assign) unsigned long long identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * name;                                                //@synthesize name=_name - In the implementation block
@property (assign) BOOL isEnabled;                                                 //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign) unsigned long long maxLength_CurrentRoadName;                   //@synthesize maxLength_CurrentRoadName=_maxLength_CurrentRoadName - In the implementation block
@property (assign) unsigned long long maxLength_DestinationRoadName;               //@synthesize maxLength_DestinationRoadName=_maxLength_DestinationRoadName - In the implementation block
@property (assign) unsigned long long maxLength_PostManeuverRoadName;              //@synthesize maxLength_PostManeuverRoadName=_maxLength_PostManeuverRoadName - In the implementation block
@property (assign) unsigned long long maxLength_ManeuverDescription;               //@synthesize maxLength_ManeuverDescription=_maxLength_ManeuverDescription - In the implementation block
@property (assign) unsigned long long maxCapacity_GuidanceManeuver;                //@synthesize maxCapacity_GuidanceManeuver=_maxCapacity_GuidanceManeuver - In the implementation block
@property (assign) BOOL requestSourceName;                                         //@synthesize requestSourceName=_requestSourceName - In the implementation block
@property (assign) BOOL requestSourceSupportsRouteGuidance;                        //@synthesize requestSourceSupportsRouteGuidance=_requestSourceSupportsRouteGuidance - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)identifier;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(BOOL)isEnabled;
-(id)initWithDict:(id)arg1 ;
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
-(BOOL)_enabledModified;
-(void)set_enabledModified:(BOOL)arg1 ;
@end

