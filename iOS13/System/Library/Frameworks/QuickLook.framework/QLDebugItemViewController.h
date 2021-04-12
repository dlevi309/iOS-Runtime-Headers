/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLItemViewController.h>

@class UITextView, NSMutableDictionary, NSLayoutConstraint;

@interface QLDebugItemViewController : QLItemViewController {

	BOOL _constraintsSetUp;
	UITextView* _logTextView;
	NSMutableDictionary* _selectorToCount;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;

}
-(BOOL)canSwipeToDismiss;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)previewWillAppear:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewWillDisappear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(void)_addLog:(id)arg1 logLevel:(unsigned long long)arg2 ;
-(void)_encounterMethodCall:(SEL)arg1 ;
-(void)previewIsAppearingWithProgress:(double)arg1 ;
-(void)previewWillFinishAppearing;
-(void)_encounterMethodCall:(SEL)arg1 animatedValue:(unsigned long long)arg2 ;
-(id)_attributesForLogLevel:(unsigned long long)arg1 ;
@end

