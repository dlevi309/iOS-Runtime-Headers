/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)attribute;
-(id)groupIdentifier;
-(NSString *)serviceName;
-(NSString *)accessoryName;
-(NSString *)serviceType;
-(NSString *)sceneName;
-(NSString *)zoneName;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(void)setZoneName:(NSString *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(NSURL *)sceneIdentifier;
-(void)setSceneIdentifier:(NSURL *)arg1 ;
-(void)setZoneIdentifier:(NSURL *)arg1 ;
-(NSURL *)zoneIdentifier;
-(NSURL *)serviceIdentifier;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setRoomName:(NSString *)arg1 ;
-(NSString *)roomName;
-(void)setServiceIdentifier:(NSURL *)arg1 ;
-(NSString *)entityType;
-(void)setEntityType:(NSString *)arg1 ;
-(NSString *)sceneType;
-(void)setSceneType:(NSString *)arg1 ;
-(void)setAttribute:(NSString *)arg1 ;
-(NSURL *)homeIdentifier;
-(void)setHomeIdentifier:(NSURL *)arg1 ;
-(id)encodedClassName;
-(NSURL *)accessoryIdentifier;
-(void)setAccessoryIdentifier:(NSURL *)arg1 ;
-(void)setAccessoryName:(NSString *)arg1 ;
-(NSString *)homeName;
-(void)setHomeName:(NSString *)arg1 ;
-(NSURL *)roomIdentifier;
-(void)setRoomIdentifier:(NSURL *)arg1 ;
-(void)setSceneName:(NSString *)arg1 ;
-(NSURL *)serviceGroupIdentifier;
-(void)setServiceGroupIdentifier:(NSURL *)arg1 ;
-(NSString *)serviceSubType;
-(void)setServiceSubType:(NSString *)arg1 ;
@end

