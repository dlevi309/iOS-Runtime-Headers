/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

