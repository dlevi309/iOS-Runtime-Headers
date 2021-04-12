/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASettingGetFloat.h>

@class NSString;

@interface SASettingGetFloatPreference : SASettingGetFloat

@property (nonatomic,copy) NSString * settingKey; 
+(id)getFloatPreference;
+(id)getFloatPreferenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)settingKey;
-(void)setSettingKey:(NSString *)arg1 ;
@end

