/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MTAlarmIntentHandler.h>
#import <libobjc.A.dylib/MTUpdateAlarmIntentHandling.h>

@class NSString;

@interface MTUpdateAlarmIntentHandler : MTAlarmIntentHandler <MTUpdateAlarmIntentHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_alarmUserActivityWithIntent:(id)arg1 ;
-(void)confirmUpdateAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleUpdateAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmMTUpdateAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleMTUpdateAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

