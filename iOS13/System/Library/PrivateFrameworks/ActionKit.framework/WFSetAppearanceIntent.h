/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/WFSettingIntent.h>

@interface WFSetAppearanceIntent : INIntent <WFSettingIntent>

@property (nonatomic,readonly) Class settingsClientClass; 
@property (assign,nonatomic) long long style; 
-(void)applyWithSettingsClient:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(Class)settingsClientClass;
@end

