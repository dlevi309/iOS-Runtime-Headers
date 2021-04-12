/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PDFViewDelegate.h>

@interface NewsArticles.PDFReplicaViewController : UIViewController <UIGestureRecognizerDelegate, PDFViewDelegate> {

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

@property (readonly,nonatomic) BOOL canBecomeFirstResponder; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)handlePinchGesture;
-(void)PDFViewWillClickOnLink:(id)arg1 withURL:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

