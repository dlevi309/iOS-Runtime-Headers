/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASettingSetFloat.h>

@class NSString;

@interface SASettingSetFloatPreference : SASettingSetFloat

@property (nonatomic,copy) NSString * settingKey; 
+(id)setFloatPreference;
+(id)setFloatPreferenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setSettingKey:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSString *)settingKey;
@end

