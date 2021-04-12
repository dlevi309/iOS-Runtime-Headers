/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/


@protocol ReplayKitMacHelperDelegate <NSObject>
@optional
-(void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 cancelled:(BOOL)arg4;
-(void)macApplicationDidResignActive;
-(void)replayKitMacHelper:(id)arg1 didDismissVideoEditorSheetWithActivityTypes:(id)arg2;
-(void)userDidStopRecordingFromStatusBar;
-(void)userDidStopRecordingFromWindowClose;
-(void)macApplicationDidBecomeActive;

@end

