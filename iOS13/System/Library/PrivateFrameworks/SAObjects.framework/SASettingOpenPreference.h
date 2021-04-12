/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASettingOpenSettings.h>

@class NSString;

@interface SASettingOpenPreference : SASettingOpenSettings

@property (nonatomic,copy) NSString * pane; 
@property (nonatomic,copy) NSString * tag; 
+(id)openPreference;
+(id)openPreferenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)tag;
-(void)setTag:(NSString *)arg1 ;
-(void)setPane:(NSString *)arg1 ;
-(NSString *)pane;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

