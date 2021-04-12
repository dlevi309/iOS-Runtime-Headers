/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSURL, NSArray, NSNumber;

@interface SAHAEntity : SADomainObject

@property (nonatomic,copy) NSString * accessory; 
@property (nonatomic,copy) NSURL * accessoryIdentifier; 
@property (nonatomic,copy) NSString * accessoryType; 
@property (nonatomic,copy) NSArray * attributes; 
@property (nonatomic,copy) NSNumber * currentDevice; 
@property (nonatomic,copy) NSString * entityType; 
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
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)attributes;
-(void)setAttributes:(NSArray *)arg1 ;
-(NSArray *)status;
-(id)groupIdentifier;
-(NSNumber *)currentDevice;
-(NSString *)serviceType;
-(NSString *)home;
-(void)setStatus:(NSArray *)arg1 ;
-(NSString *)accessoryType;
-(void)setAccessoryType:(NSString *)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setHome:(NSString *)arg1 ;
-(NSString *)accessory;
-(void)setAccessory:(NSString *)arg1 ;
-(NSString *)room;
-(NSString *)entityType;
-(void)setEntityType:(NSString *)arg1 ;
-(void)setRoom:(NSString *)arg1 ;
-(void)setZone:(NSString *)arg1 ;
-(NSString *)sceneType;
-(void)setSceneType:(NSString *)arg1 ;
-(NSURL *)homeIdentifier;
-(void)setHomeIdentifier:(NSURL *)arg1 ;
-(void)setCurrentDevice:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSString *)hashedRouteUID;
-(NSURL *)accessoryIdentifier;
-(void)setAccessoryIdentifier:(NSURL *)arg1 ;
-(NSURL *)roomIdentifier;
-(void)setRoomIdentifier:(NSURL *)arg1 ;
-(NSString *)serviceSubType;
-(void)setServiceSubType:(NSString *)arg1 ;
-(void)setHashedRouteUID:(NSString *)arg1 ;
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
-(void)setTargetAttributes:(NSArray *)arg1 ;
-(NSArray *)zoneIdentifiers;
-(void)setZoneIdentifiers:(NSArray *)arg1 ;
@end

