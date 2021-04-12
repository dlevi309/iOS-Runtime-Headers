/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@interface EKUIAccountErrorsPETTracker : NSObject
+(id)_rootUIErrorEventTracker;
+(id)_actionableErrorDisplayedTracker;
+(id)_unknownErrorDisplayedTracker;
+(id)_offlineErrorDisplayedTracker;
+(id)_otherErrorDisplayedTracker;
+(id)_actionableErrorInteractedTracker;
+(id)_refreshedWhileOfflineTracker;
+(void)trackRootUIDisplayedError;
+(void)trackRootUIInteractedWithError;
+(void)trackCalendarListDisplayedActionableError;
+(void)trackCalendarListDisplayedUnknownError;
+(void)trackCalendarListDisplayedOfflineError;
+(void)trackCalendarListDisplayedOtherError;
+(void)trackCalendarListInteractedWithError;
+(void)trackRefreshedWhileOffline;
@end

