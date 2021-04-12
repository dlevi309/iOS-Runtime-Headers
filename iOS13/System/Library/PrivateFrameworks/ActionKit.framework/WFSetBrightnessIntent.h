/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/WFDecimalSettingIntent.h>

@class NSNumber;

@interface WFSetBrightnessIntent : INIntent <WFDecimalSettingIntent>

@property (nonatomic,readonly) Class settingsClientClass; 
@property (nonatomic,retain) NSNumber * value; 
@property (nonatomic,copy) NSNumber * value; 
-(void)applyWithSettingsClient:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(Class)settingsClientClass;
@end

