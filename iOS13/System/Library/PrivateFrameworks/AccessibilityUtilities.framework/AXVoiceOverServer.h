/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AccessibilityUtilities/AXServer.h>

@interface AXVoiceOverServer : AXServer
+(id)server;
-(id)_serviceName;
-(BOOL)_connectIfNecessary;
-(void)performAutomationTestingCommand:(id)arg1 userInfo:(id)arg2 timeout:(double)arg3 completion:(/*^block*/id)arg4 ;
-(id)lastSpokenPhrases;
-(id)lastSpokenContents;
-(id)lastSoundsPlayed;
-(id)currentRotorName;
-(id)lastScreenChange;
-(id)currentFocusedElement;
-(BOOL)triggerGesture:(id)arg1 ;
-(BOOL)triggerCommand:(long long)arg1 ;
-(BOOL)triggerCommand:(long long)arg1 withArgument:(id)arg2 ;
-(BOOL)isBrailleInputUIShowing;
-(BOOL)isHandwritingInputUIShowing;
-(BOOL)isBluetoothBrailleDisplayConnected;
@end

