/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <libobjc.A.dylib/ICAccessibilityExtras.h>

@interface ICAccessibility : NSObject <ICAccessibilityExtras>
+(id)sharedInstance;
-(void)postAnnouncement:(id)arg1 withSender:(id)arg2 priority:(long long)arg3 ;
-(BOOL)needsAccessibilityElements;
-(BOOL)shouldPerformLoggingForVoiceOver;
-(BOOL)shouldPerformLoggingForSwitchControl;
@end

