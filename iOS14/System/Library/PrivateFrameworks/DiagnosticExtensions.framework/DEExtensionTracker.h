/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
*/


@interface DEExtensionTracker : NSObject
+(void)checkIn;
+(id)sharedSerialQueue;
+(id)userDefaults;
+(void)_updateXPCActivityDate;
+(BOOL)hasInactiveLoggingSession:(id)arg1 ;
+(id)currentLoggingExtensions;
+(void)increaseRetainCountWithIdentifier:(id)arg1 session:(id)arg2 ;
+(void)updateExpirationDateWithIdentifier:(id)arg1 expirationDate:(id)arg2 ;
+(void)decreaseRetainCountWithIdentifier:(id)arg1 session:(id)arg2 ;
+(void)_updateExtensionExpirationDateWithIdentifier:(id)arg1 expirationDate:(id)arg2 ;
+(void)saveCurrentLoggingExtensionsWithDictionary:(id)arg1 ;
+(double)xpcActivityTimeinterval;
+(void)scheduleXPCActivity;
+(id)criteria:(id)arg1 ;
+(void)extensionTrackerCleanup;
+(BOOL)shouldTeardownWithIdentifier:(id)arg1 session:(id)arg2 ;
+(void)updateRetainCountWithIdentifier:(id)arg1 session:(id)arg2 offsetBy:(int)arg3 ;
+(BOOL)shouldSetupWithIdentifier:(id)arg1 session:(id)arg2 expirationDate:(id)arg3 ;
@end

