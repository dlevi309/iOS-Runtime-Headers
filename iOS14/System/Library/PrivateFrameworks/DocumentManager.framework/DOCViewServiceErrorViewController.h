/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)errorTitle;
-(void)setErrorTitle:(NSString *)arg1 ;
-(void)setDelegate:(id<DOCViewServiceErrorViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)setErrorSubtitle:(NSString *)arg1 ;
-(void)didTapTryAgainInErrorView:(id)arg1 ;
-(NSString *)errorSubtitle;
@end

