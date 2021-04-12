/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AccessibilityUtilities/AXServer.h>

@interface AXVoiceOverServer : AXServer
+(id)server;
-(BOOL)_connectIfNecessary;
-(id)_serviceName;
-(BOOL)triggerGesture:(id)arg1 ;
-(id)lastSpokenPhrases;
-(void)performAutomationTestingCommand:(id)arg1 userInfo:(id)arg2 timeout:(double)arg3 completion:(/*^block*/id)arg4 ;
-(id)lastScreenChange;
-(id)currentRotorName;
-(BOOL)isBrailleInputUIShowing;
-(BOOL)isBluetoothBrailleDisplayConnected;
-(BOOL)triggerCommand:(long long)arg1 ;
-(id)currentFocusedElement;
-(BOOL)isHandwritingInputUIShowing;
-(BOOL)triggerCommand:(long long)arg1 withArgument:(id)arg2 ;
-(id)lastSoundsPlayed;
-(id)lastSpokenContents;
@end

