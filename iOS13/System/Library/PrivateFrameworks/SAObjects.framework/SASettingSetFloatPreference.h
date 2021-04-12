/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASettingSetFloat.h>

@class NSString;

@interface SASettingSetFloatPreference : SASettingSetFloat

@property (nonatomic,copy) NSString * settingKey; 
+(id)setFloatPreference;
+(id)setFloatPreferenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSString *)settingKey;
-(void)setSettingKey:(NSString *)arg1 ;
@end

