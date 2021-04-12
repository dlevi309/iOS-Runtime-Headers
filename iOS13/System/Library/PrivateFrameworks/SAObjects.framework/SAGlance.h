/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSDictionary;

@interface SAGlance : SADomainObject

@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSString * glanceDisplayName; 
@property (nonatomic,copy) NSString * glanceId; 
@property (nonatomic,copy) NSDictionary * localizedGlanceDisplayNameMap; 
+(id)glance;
+(id)glanceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)appId;
-(void)setAppId:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)glanceDisplayName;
-(void)setGlanceDisplayName:(NSString *)arg1 ;
-(NSString *)glanceId;
-(void)setGlanceId:(NSString *)arg1 ;
-(NSDictionary *)localizedGlanceDisplayNameMap;
-(void)setLocalizedGlanceDisplayNameMap:(NSDictionary *)arg1 ;
@end

