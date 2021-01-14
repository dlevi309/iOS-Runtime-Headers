/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSDictionary;

@interface SAGlance : SADomainObject

@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSString * glanceDisplayName; 
@property (nonatomic,copy) NSString * glanceId; 
@property (nonatomic,copy) NSDictionary * localizedGlanceDisplayNameMap; 
+(id)glanceWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)glance;
-(NSString *)appId;
-(id)groupIdentifier;
-(NSString *)glanceDisplayName;
-(void)setGlanceDisplayName:(NSString *)arg1 ;
-(void)setGlanceId:(NSString *)arg1 ;
-(NSDictionary *)localizedGlanceDisplayNameMap;
-(void)setLocalizedGlanceDisplayNameMap:(NSDictionary *)arg1 ;
-(id)encodedClassName;
-(NSString *)glanceId;
-(void)setAppId:(NSString *)arg1 ;
@end

