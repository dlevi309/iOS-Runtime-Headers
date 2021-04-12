/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
*/

#import <libobjc.A.dylib/DCAccessibilityExtras.h>
#import <libobjc.A.dylib/DCAnalyticsReporterAccessibilityDelegate.h>

@interface DCAccessibility : NSObject <DCAccessibilityExtras, DCAnalyticsReporterAccessibilityDelegate>
+(id)sharedInstance;
-(void)postAnnouncement:(id)arg1 withSender:(id)arg2 priority:(long long)arg3 ;
-(BOOL)needsAccessibilityElements;
-(BOOL)shouldPerformLoggingForVoiceOver;
-(BOOL)shouldPerformLoggingForSwitchControl;
@end

