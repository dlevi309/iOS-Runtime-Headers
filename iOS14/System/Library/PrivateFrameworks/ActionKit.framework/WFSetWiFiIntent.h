/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/WFBooleanSettingIntent.h>

@class NSNumber;

@interface WFSetWiFiIntent : INIntent <WFBooleanSettingIntent>

@property (assign,nonatomic) long long operation; 
@property (nonatomic,retain) NSNumber * state; 
@property (nonatomic,readonly) Class settingsClientClass; 
@property (nonatomic,copy) NSNumber * state; 
-(void)applyWithSettingsClient:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(Class)settingsClientClass;
@end

