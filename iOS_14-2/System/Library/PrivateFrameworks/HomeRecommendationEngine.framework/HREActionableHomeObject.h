/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine
*/

#import <libobjc.A.dylib/HFHomeContainedObject.h>
#import <libobjc.A.dylib/HFRoomContextProviding.h>

@protocol HFHomeKitObject;
@class HMHome, HMRoom, NSSet, NSString, HMService, NSUUID;

@interface HREActionableHomeObject : NSObject <HFHomeContainedObject, HFRoomContextProviding> {

	id<HFHomeKitObject> _homeKitObject;

}

@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject;              //@synthesize homeKitObject=_homeKitObject - In the implementation block
@property (nonatomic,readonly) NSSet * characteristics; 
@property (nonatomic,readonly) NSString * primaryType; 
@property (nonatomic,readonly) NSSet * matchingTypes; 
@property (nonatomic,readonly) NSSet * actionTypes; 
@property (nonatomic,readonly) NSSet * profiles; 
@property (nonatomic,readonly) HMService * service; 
@property (nonatomic,readonly) NSSet * services; 
@property (nonatomic,readonly) BOOL isActionable; 
@property (nonatomic,__weak,readonly) HMHome * home; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HMRoom * hf_parentRoom; 
+(id)_types:(id)arg1 notMatchedByActionableObjects:(id)arg2 ;
+(id)actionableObjectsFromHomeKitObjects:(id)arg1 ;
+(BOOL)actionableObjects:(id)arg1 matchAllTypes:(id)arg2 ;
+(BOOL)actionableObjects:(id)arg1 matchAllTypeGroups:(id)arg2 ;
+(id)filterActionableObjects:(id)arg1 toMatchTypes:(id)arg2 ;
+(id)filterActionableObjects:(id)arg1 toRooms:(id)arg2 ;
+(id)filterActionableObjects:(id)arg1 excludingObjectsInActions:(id)arg2 ;
-(NSSet *)services;
-(NSSet *)profiles;
-(NSUUID *)uniqueIdentifier;
-(NSString *)debugDescription;
-(id<HFHomeKitObject>)homeKitObject;
-(HMRoom *)hf_parentRoom;
-(BOOL)isActionable;
-(NSString *)description;
-(unsigned long long)hash;
-(NSSet *)actionTypes;
-(id)initWithHomeKitObject:(id)arg1 ;
-(id)serviceGroup;
-(NSSet *)characteristics;
-(BOOL)isEqual:(id)arg1 ;
-(HMService *)service;
-(NSString *)primaryType;
-(HMHome *)home;
-(id)singularProfile;
-(id)_characteristicsInServices:(id)arg1 ;
-(NSSet *)matchingTypes;
-(BOOL)_actionMap:(id)arg1 includesType:(id)arg2 ;
-(id)_profileTypeForProfile:(id)arg1 ;
-(BOOL)_matchesAnyInTypes:(id)arg1 ;
-(id)actionBuildersDerivedFromActions:(id)arg1 ;
-(BOOL)involvedInActionMap:(id)arg1 ;
-(id)characteristicMapFromActionMap:(id)arg1 ;
-(BOOL)involvedInAction:(id)arg1 ;
@end

