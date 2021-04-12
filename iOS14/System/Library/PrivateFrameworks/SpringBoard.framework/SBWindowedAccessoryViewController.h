/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBWindowedAccessoryViewDelegate.h>

@protocol SBWindowedAccessoryViewControllerDelegate;
@class SBWindowedAccessoryView, NSString;

@interface SBWindowedAccessoryViewController : UIViewController <SBWindowedAccessoryViewDelegate> {

	id<SBWindowedAccessoryViewControllerDelegate> _delegate;
	SBWindowedAccessoryView* _windowedAccessoryView;

}

@property (nonatomic,retain) SBWindowedAccessoryView * windowedAccessoryView;                            //@synthesize windowedAccessoryView=_windowedAccessoryView - In the implementation block
@property (assign,nonatomic,__weak) id<SBWindowedAccessoryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SBWindowedAccessoryViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBWindowedAccessoryViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)loadView;
-(void)forceDetachWindowedAcessoryButtonTapped:(id)arg1 ;
-(SBWindowedAccessoryView *)windowedAccessoryView;
-(void)setWindowedAccessoryView:(SBWindowedAccessoryView *)arg1 ;
@end

