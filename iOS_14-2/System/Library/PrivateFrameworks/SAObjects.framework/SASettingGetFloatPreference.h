/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASettingGetFloat.h>

@class NSString;

@interface SASettingGetFloatPreference : SASettingGetFloat

@property (nonatomic,copy) NSString * settingKey; 
+(id)getFloatPreference;
+(id)getFloatPreferenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setSettingKey:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)settingKey;
@end

