/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <libobjc.A.dylib/ICAccessibilityExtras.h>
#import <libobjc.A.dylib/ICAnalyticsReporterAccessibilityDelegate.h>

@interface ICAccessibility : NSObject <ICAccessibilityExtras, ICAnalyticsReporterAccessibilityDelegate>
+(id)sharedInstance;
-(void)postAnnouncement:(id)arg1 withSender:(id)arg2 priority:(long long)arg3 ;
-(BOOL)needsAccessibilityElements;
-(BOOL)shouldPerformLoggingForVoiceOver;
-(BOOL)shouldPerformLoggingForSwitchControl;
@end

