/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessoryNavigation.framework/AccessoryNavigation
*/


@class ACCNavigationProvider, NSString, NSMutableDictionary, NSDictionary;

@interface ACCNavigationAccessory : NSObject {

	ACCNavigationProvider* _provider;
	NSString* _accessoryUID;
	NSMutableDictionary* _componentListInternal;
	NSMutableDictionary* _objectDetectionComponentListInternal;

}

@property (retain) NSMutableDictionary * componentListInternal;                             //@synthesize componentListInternal=_componentListInternal - In the implementation block
@property (retain) NSMutableDictionary * objectDetectionComponentListInternal;              //@synthesize objectDetectionComponentListInternal=_objectDetectionComponentListInternal - In the implementation block
@property (nonatomic,__weak,readonly) ACCNavigationProvider * provider;                     //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) NSString * accessoryUID;                                       //@synthesize accessoryUID=_accessoryUID - In the implementation block
@property (readonly) NSDictionary * componentList; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(ACCNavigationProvider *)provider;
-(BOOL)requestedSourceNameForAnyComponent;
-(BOOL)requestedSourceSupportsRouteGuidanceForAnyComponent;
-(NSString *)accessoryUID;
-(void)setAccessoryUID:(NSString *)arg1 ;
-(id)initWithAccessoryUID:(id)arg1 provider:(id)arg2 ;
-(NSMutableDictionary *)componentListInternal;
-(NSMutableDictionary *)objectDetectionComponentListInternal;
-(id)objectDetectionComponentList;
-(NSDictionary *)componentList;
-(id)componentListForIdList:(id)arg1 ;
-(BOOL)objectDetectionComponentIdListIsEnabled:(id)arg1 ;
-(BOOL)componentIdListIsEnabled:(id)arg1 ;
-(id)objectDetectionComponentListForIdList:(id)arg1 ;
-(void)iterateComponentIdList:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)supportsExitInfoForAnyComponent;
-(void)updateRouteGuidanceInfo:(id)arg1 componentList:(id)arg2 ;
-(void)updateManeuverInfo:(id)arg1 componentList:(id)arg2 ;
-(void)updateLaneGuidanceInfo:(id)arg1 componentList:(id)arg2 ;
-(void)setComponentListInternal:(NSMutableDictionary *)arg1 ;
-(void)setObjectDetectionComponentListInternal:(NSMutableDictionary *)arg1 ;
@end

