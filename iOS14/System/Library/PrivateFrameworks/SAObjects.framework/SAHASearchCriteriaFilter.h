/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAHAFilter.h>

@class NSURL, NSString;

@interface SAHASearchCriteriaFilter : SAHAFilter

@property (nonatomic,copy) NSURL * accessoryIdentifier; 
@property (nonatomic,copy) NSString * accessoryName; 
@property (nonatomic,copy) NSString * attribute; 
@property (nonatomic,copy) NSString * entityType; 
@property (nonatomic,copy) NSString * groupName; 
@property (nonatomic,copy) NSURL * homeIdentifier; 
@property (nonatomic,copy) NSString * homeName; 
@property (nonatomic,copy) NSURL * roomIdentifier; 
@property (nonatomic,copy) NSString * roomName; 
@property (nonatomic,copy) NSURL * sceneIdentifier; 
@property (nonatomic,copy) NSString * sceneName; 
@property (nonatomic,copy) NSString * sceneType; 
@property (nonatomic,copy) NSURL * serviceGroupIdentifier; 
@property (nonatomic,copy) NSURL * serviceIdentifier; 
@property (nonatomic,copy) NSString * serviceName; 
@property (nonatomic,copy) NSString * serviceSubType; 
@property (nonatomic,copy) NSString * serviceType; 
@property (nonatomic,copy) NSURL * zoneIdentifier; 
@property (nonatomic,copy) NSString * zoneName; 
+(id)searchCriteriaFilter;
+(id)searchCriteriaFilterWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)accessoryName;
-(NSString *)entityType;
-(NSURL *)zoneIdentifier;
-(void)setSceneIdentifier:(NSURL *)arg1 ;
-(void)setZoneIdentifier:(NSURL *)arg1 ;
-(id)groupIdentifier;
-(NSURL *)sceneIdentifier;
-(id)encodedClassName;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(NSString *)zoneName;
-(void)setSceneType:(NSString *)arg1 ;
-(NSString *)attribute;
-(void)setRoomName:(NSString *)arg1 ;
-(void)setServiceIdentifier:(NSURL *)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setAttribute:(NSString *)arg1 ;
-(NSURL *)serviceIdentifier;
-(void)setHomeName:(NSString *)arg1 ;
-(NSURL *)roomIdentifier;
-(void)setRoomIdentifier:(NSURL *)arg1 ;
-(void)setSceneName:(NSString *)arg1 ;
-(NSURL *)serviceGroupIdentifier;
-(void)setServiceGroupIdentifier:(NSURL *)arg1 ;
-(NSString *)serviceSubType;
-(void)setServiceSubType:(NSString *)arg1 ;
-(NSString *)sceneName;
-(NSURL *)homeIdentifier;
-(void)setHomeIdentifier:(NSURL *)arg1 ;
-(NSString *)serviceName;
-(NSString *)sceneType;
-(void)setEntityType:(NSString *)arg1 ;
-(NSString *)homeName;
-(NSString *)roomName;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)serviceType;
-(void)setAccessoryName:(NSString *)arg1 ;
-(void)setZoneName:(NSString *)arg1 ;
-(NSURL *)accessoryIdentifier;
-(void)setAccessoryIdentifier:(NSURL *)arg1 ;
@end

