/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PDFViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@interface NewsArticles.PDFReplicaViewController : UIViewController <PDFViewDelegate, UIGestureRecognizerDelegate> {

	 identifier;
	 delegate;
	 contentBackgroundColor;
	 styler;
	 eventHandler;
	 pdfView;
	 coverViewManager;
	 loadingIndicatorProvider;
	 pinchRecognizer;
	 loadingStateMachine;

}
-(void)PDFViewWillClickOnLink:(id)arg1 withURL:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)handlePinchGesture;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

