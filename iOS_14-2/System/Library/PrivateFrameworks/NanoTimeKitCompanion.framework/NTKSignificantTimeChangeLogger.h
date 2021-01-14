/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@interface NTKSignificantTimeChangeLogger : NSObject
+(id)sharedInstance;
+(void)beginLogging;
-(id)init;
-(void)_startObserving;
-(void)_handleNotification:(id)arg1 ;
-(void)_logNotificationReceiptWithName:(id)arg1 ;
@end

