/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)previewWillAppear:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewWillDisappear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)_addLog:(id)arg1 logLevel:(unsigned long long)arg2 ;
-(void)_encounterMethodCall:(SEL)arg1 ;
-(void)previewIsAppearingWithProgress:(double)arg1 ;
-(void)previewWillFinishAppearing;
-(void)_encounterMethodCall:(SEL)arg1 animatedValue:(unsigned long long)arg2 ;
-(id)_attributesForLogLevel:(unsigned long long)arg1 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(BOOL)canSwipeToDismiss;
@end

