/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@interface EKUIAccountErrorDisplayer : NSObject
+(unsigned long long)severityForError:(unsigned long long)arg1 ;
+(BOOL)errorIsActionable:(unsigned long long)arg1 ;
+(unsigned long long)moreSevereErrorOfError:(unsigned long long)arg1 andError:(unsigned long long)arg2 ;
+(void)handleContinueSyncingForAccount:(id)arg1 calendars:(id)arg2 error:(unsigned long long)arg3 ;
+(void)presentAlertForOfflineErrorUsingViewController:(id)arg1 ;
+(void)presentAlertForAccount:(id)arg1 error:(unsigned long long)arg2 usingViewController:(id)arg3 ;
+(BOOL)_reauthorizeForAccount:(id)arg1 usingViewController:(id)arg2 ;
@end

