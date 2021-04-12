/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/WFBooleanSettingIntent.h>
#import <libobjc.A.dylib/WFDecimalSettingIntent.h>

@class NSNumber;

@interface WFSetFlashlightIntent : INIntent <WFBooleanSettingIntent, WFDecimalSettingIntent>

@property (nonatomic,readonly) Class settingsClientClass; 
@property (assign,nonatomic) long long operation; 
@property (nonatomic,retain) NSNumber * state; 
@property (nonatomic,retain) NSNumber * value; 
@property (nonatomic,copy) NSNumber * state; 
@property (nonatomic,copy) NSNumber * value; 
-(void)applyWithSettingsClient:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(Class)settingsClientClass;
@end

