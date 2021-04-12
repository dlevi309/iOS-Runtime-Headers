/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLItemViewController.h>
#import <UIKit/UIDocumentPasswordViewDelegate.h>

@class QLPreviewContext;

@interface QLPasswordItemViewController : QLItemViewController <UIDocumentPasswordViewDelegate> {

	QLPreviewContext* _context;
	/*^block*/id _completionBlock;

}
-(void)invalidate;
-(void)loadView;
-(void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2 ;
-(BOOL)canSwipeToDismiss;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewWillDisappear:(BOOL)arg1 ;
-(id)passwordView;
@end

