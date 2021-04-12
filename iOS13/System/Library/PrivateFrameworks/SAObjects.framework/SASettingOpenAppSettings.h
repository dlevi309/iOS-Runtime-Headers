/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASettingOpenSettings.h>
#import <SAObjects/SASettingAppSettingCommand.h>

@class NSString, NSArray;

@interface SASettingOpenAppSettings : SASettingOpenSettings <SASettingAppSettingCommand>

@property (nonatomic,copy) NSString * appWithSettingsId; 
@property (nonatomic,copy) NSString * location; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
+(id)openAppSettings;
+(id)openAppSettingsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)appWithSettingsId;
-(void)setAppWithSettingsId:(NSString *)arg1 ;
@end

