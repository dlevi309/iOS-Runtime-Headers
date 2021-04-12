/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UILabel, PMRoundProgressView, UIButton, UIScreenEdgePanGestureRecognizer, NSString;

@interface PMRoundProgressViewController : UIViewController <UIGestureRecognizerDelegate> {

	BOOL _didFadeOut;
	UILabel* _label;
	PMRoundProgressView* _progressView;
	UIButton* _leftCancelButton;
	UIButton* _rightCancelButton;
	UIScreenEdgePanGestureRecognizer* _screenEdgePanLeftGestureRecognizer;

}

@property (assign,nonatomic) BOOL didFadeOut;                                                                    //@synthesize didFadeOut=_didFadeOut - In the implementation block
@property (nonatomic,retain) UILabel * label;                                                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) PMRoundProgressView * progressView;                                                 //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIButton * leftCancelButton;                                                        //@synthesize leftCancelButton=_leftCancelButton - In the implementation block
@property (nonatomic,retain) UIButton * rightCancelButton;                                                       //@synthesize rightCancelButton=_rightCancelButton - In the implementation block
@property (nonatomic,retain) UIScreenEdgePanGestureRecognizer * screenEdgePanLeftGestureRecognizer;              //@synthesize screenEdgePanLeftGestureRecognizer=_screenEdgePanLeftGestureRecognizer - In the implementation block
@property (nonatomic,retain) NSString * labelText; 
@property (assign,nonatomic) float progress; 
@property (assign,nonatomic) BOOL showCancelButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)cancelButton;
-(BOOL)prefersStatusBarHidden;
-(float)progress;
-(id)nibBundle;
-(void)setShowCancelButton:(BOOL)arg1 ;
-(void)viewDidLoad;
-(NSString *)labelText;
-(void)setProgress:(float)arg1 ;
-(void)setLabelText:(NSString *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setProgressView:(PMRoundProgressView *)arg1 ;
-(void)configureView;
-(PMRoundProgressView *)progressView;
-(void)setLabel:(UILabel *)arg1 ;
-(BOOL)showCancelButton;
-(UILabel *)label;
-(UIButton *)rightCancelButton;
-(UIButton *)leftCancelButton;
-(void)handlePanFromEdge:(id)arg1 ;
-(void)setScreenEdgePanLeftGestureRecognizer:(UIScreenEdgePanGestureRecognizer *)arg1 ;
-(UIScreenEdgePanGestureRecognizer *)screenEdgePanLeftGestureRecognizer;
-(BOOL)didFadeOut;
-(void)setDidFadeOut:(BOOL)arg1 ;
-(void)setCancelTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setLeftCancelButton:(UIButton *)arg1 ;
-(void)setRightCancelButton:(UIButton *)arg1 ;
@end

