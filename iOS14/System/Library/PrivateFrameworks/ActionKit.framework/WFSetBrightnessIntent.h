/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/WFDecimalSettingIntent.h>

@class NSNumber;

@interface WFSetBrightnessIntent : INIntent <WFDecimalSettingIntent>

@property (nonatomic,retain) NSNumber * value; 
@property (nonatomic,readonly) Class settingsClientClass; 
@property (nonatomic,copy) NSNumber * value; 
-(void)applyWithSettingsClient:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(Class)settingsClientClass;
@end

