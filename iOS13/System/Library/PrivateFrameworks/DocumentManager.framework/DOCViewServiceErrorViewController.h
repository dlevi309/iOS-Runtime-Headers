/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/DOCViewServiceErrorViewDelegate.h>

@protocol DOCViewServiceErrorViewControllerDelegate;
@class DOCViewServiceErrorView, NSString;

@interface DOCViewServiceErrorViewController : UIViewController <DOCViewServiceErrorViewDelegate> {

	DOCViewServiceErrorView* _errorView;
	id<DOCViewServiceErrorViewControllerDelegate> _delegate;

}

@property (__weak) id<DOCViewServiceErrorViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * errorTitle; 
@property (nonatomic,retain) NSString * errorSubtitle; 
-(id<DOCViewServiceErrorViewControllerDelegate>)delegate;
-(void)setDelegate:(id<DOCViewServiceErrorViewControllerDelegate>)arg1 ;
-(void)loadView;
-(NSString *)errorTitle;
-(void)setErrorTitle:(NSString *)arg1 ;
-(void)setErrorSubtitle:(NSString *)arg1 ;
-(void)didTapTryAgainInErrorView:(id)arg1 ;
-(NSString *)errorSubtitle;
@end

