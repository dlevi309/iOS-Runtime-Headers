/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <libobjc.A.dylib/PSSettingsDetail.h>

@class NSString;

@interface PSBrightnessSettingsDetail : NSObject <PSSettingsDetail>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)iconImage;
+(void)setValue:(double)arg1 ;
+(double)currentValue;
+(double)incrementedBrightnessValue:(double)arg1 ;
+(BOOL)autoBrightnessEnabled;
+(void)incrementBrightnessValue:(double)arg1 ;
+(void)beginBrightnessAdjustmentTransaction;
+(void)endBrightnessAdjustmentTransaction;
+(void)endObservingExternalBrightnessChanges;
+(void)beginObservingExternalBrightnessChanges:(/*^block*/id)arg1 changedAction:(/*^block*/id)arg2 ;
+(void)setAutoBrightnessEnabled:(BOOL)arg1 ;
+(BOOL)deviceSupportsAutoBrightness;
+(id)preferencesURL;
@end

