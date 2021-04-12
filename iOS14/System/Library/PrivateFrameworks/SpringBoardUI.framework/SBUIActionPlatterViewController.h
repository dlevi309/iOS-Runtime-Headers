/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SBUIActionPlatterViewControllerDelegate;
@class UIStackView, UIView, UISelectionFeedbackGenerator, NSArray, UILongPressGestureRecognizer, NSString;

@interface SBUIActionPlatterViewController : UIViewController <UIGestureRecognizerDelegate> {

	SCD_Struct_SB2 _delegateRespondsTo;
	UIStackView* _stackView;
	UIView* _keylinesContainerView;
	UISelectionFeedbackGenerator* _feedbackRetargetBehavior;
	BOOL _reversesActions;
	NSArray* _actions;
	unsigned long long _systemInteractionStartIndex;
	UILongPressGestureRecognizer* _gestureRecognizer;
	long long _imagePosition;
	id<SBUIActionPlatterViewControllerDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSArray * actions;                                                 //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) unsigned long long systemInteractionStartIndex;                           //@synthesize systemInteractionStartIndex=_systemInteractionStartIndex - In the implementation block
@property (nonatomic,__weak,readonly) UILongPressGestureRecognizer * gestureRecognizer;                //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL reversesActions;                                                     //@synthesize reversesActions=_reversesActions - In the implementation block
@property (assign,nonatomic) long long imagePosition;                                                  //@synthesize imagePosition=_imagePosition - In the implementation block
@property (assign,nonatomic,__weak) id<SBUIActionPlatterViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(UILongPressGestureRecognizer *)gestureRecognizer;
-(long long)imagePosition;
-(NSArray *)actions;
-(id<SBUIActionPlatterViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setImagePosition:(long long)arg1 ;
-(void)setDelegate:(id<SBUIActionPlatterViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)_handleLongPressGestureRecognizer:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithActions:(id)arg1 gestureRecognizer:(id)arg2 ;
-(BOOL)reversesActions;
-(void)_updateKeylineViews;
-(void)setSystemInteractionStartIndex:(unsigned long long)arg1 ;
-(void)setReversesActions:(BOOL)arg1 ;
-(unsigned long long)systemInteractionStartIndex;
@end

