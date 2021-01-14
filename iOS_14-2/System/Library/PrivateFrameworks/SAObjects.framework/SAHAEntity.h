/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSURL, NSArray, NSNumber;

@interface SAHAEntity : SADomainObject

@property (nonatomic,copy) NSString * accessory; 
@property (nonatomic,copy) NSURL * accessoryIdentifier; 
@property (nonatomic,copy) NSArray * attributes; 
@property (nonatomic,copy) NSNumber * currentDevice; 
@property (nonatomic,copy) NSString * entityType; 
@property (nonatomic,copy) NSString * groupType; 
@property (nonatomic,copy) NSString * hashedRouteUID; 
@property (nonatomic,copy) NSString * home; 
@property (nonatomic,copy) NSURL * homeIdentifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSURL * primaryServiceIdentifier; 
@property (nonatomic,copy) NSArray * relatedEntityIdentifiers; 
@property (nonatomic,copy) NSString * room; 
@property (nonatomic,copy) NSURL * roomIdentifier; 
@property (nonatomic,copy) NSArray * sceneActions; 
@property (nonatomic,copy) NSString * sceneType; 
@property (nonatomic,copy) NSString * serviceGroup; 
@property (nonatomic,copy) NSArray * serviceGroupIdentifiers; 
@property (nonatomic,copy) NSString * serviceSubType; 
@property (nonatomic,copy) NSString * serviceType; 
@property (nonatomic,copy) NSArray * status; 
@property (nonatomic,copy) NSArray * targetAttributes; 
@property (nonatomic,copy) NSString * zone; 
@property (nonatomic,copy) NSArray * zoneIdentifiers; 
+(id)entity;
+(id)entityWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)zone;
-(NSString *)entityType;
-(void)setGroupType:(NSString *)arg1 ;
-(NSString *)room;
-(id)groupIdentifier;
-(NSString *)hashedRouteUID;
-(id)encodedClassName;
-(void)setAttributes:(NSArray *)arg1 ;
-(void)setSceneType:(NSString *)arg1 ;
-(NSNumber *)currentDevice;
-(NSString *)accessory;
-(void)setRoom:(NSString *)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)name;
-(void)setZone:(NSString *)arg1 ;
-(NSArray *)attributes;
-(NSURL *)roomIdentifier;
-(void)setRoomIdentifier:(NSURL *)arg1 ;
-(NSString *)serviceSubType;
-(void)setServiceSubType:(NSString *)arg1 ;
-(void)setAccessory:(NSString *)arg1 ;
-(NSURL *)homeIdentifier;
-(void)setHomeIdentifier:(NSURL *)arg1 ;
-(NSString *)sceneType;
-(NSString *)groupType;
-(void)setEntityType:(NSString *)arg1 ;
-(void)setHashedRouteUID:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSURL *)primaryServiceIdentifier;
-(void)setPrimaryServiceIdentifier:(NSURL *)arg1 ;
-(NSArray *)relatedEntityIdentifiers;
-(void)setRelatedEntityIdentifiers:(NSArray *)arg1 ;
-(NSArray *)sceneActions;
-(void)setSceneActions:(NSArray *)arg1 ;
-(NSString *)serviceGroup;
-(void)setServiceGroup:(NSString *)arg1 ;
-(NSArray *)serviceGroupIdentifiers;
-(void)setServiceGroupIdentifiers:(NSArray *)arg1 ;
-(NSArray *)targetAttributes;
-(void)setStatus:(NSArray *)arg1 ;
-(void)setTargetAttributes:(NSArray *)arg1 ;
-(NSArray *)zoneIdentifiers;
-(void)setZoneIdentifiers:(NSArray *)arg1 ;
-(NSString *)serviceType;
-(void)setHome:(NSString *)arg1 ;
-(NSURL *)accessoryIdentifier;
-(void)setAccessoryIdentifier:(NSURL *)arg1 ;
-(void)setCurrentDevice:(NSNumber *)arg1 ;
-(NSArray *)status;
-(NSString *)home;
@end

