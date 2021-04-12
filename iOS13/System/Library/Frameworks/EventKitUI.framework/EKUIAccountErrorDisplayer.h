/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@interface EKUIAccountErrorDisplayer : NSObject
+(unsigned long long)severityForError:(unsigned long long)arg1 ;
+(BOOL)_reauthorizeForAccount:(id)arg1 usingViewController:(id)arg2 ;
+(void)presentAlertForAccount:(id)arg1 error:(unsigned long long)arg2 usingViewController:(id)arg3 ;
+(unsigned long long)moreSevereErrorOfError:(unsigned long long)arg1 andError:(unsigned long long)arg2 ;
+(void)presentAlertForOfflineErrorUsingViewController:(id)arg1 ;
+(BOOL)errorIsActionable:(unsigned long long)arg1 ;
@end

