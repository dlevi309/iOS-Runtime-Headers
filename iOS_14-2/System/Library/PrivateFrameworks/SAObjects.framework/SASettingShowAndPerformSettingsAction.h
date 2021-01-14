/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SASettingShowAndPerformSettingsAction : SABaseClientBoundCommand

@property (nonatomic,retain) id<SASettingSettingsAction> settingsAction; 
+(id)showAndPerformSettingsAction;
+(id)showAndPerformSettingsActionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id<SASettingSettingsAction>)settingsAction;
-(void)setSettingsAction:(id<SASettingSettingsAction>)arg1 ;
@end

