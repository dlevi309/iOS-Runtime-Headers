/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASettingOpenSettings.h>

@class NSString;

@interface SASettingOpenPreference : SASettingOpenSettings

@property (nonatomic,copy) NSString * pane; 
@property (nonatomic,copy) NSString * tag; 
+(id)openPreference;
+(id)openPreferenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)pane;
-(id)groupIdentifier;
-(void)setTag:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)tag;
-(void)setPane:(NSString *)arg1 ;
@end

