/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UIUndoTutorialView;

@interface UIUndoTutorialViewController : UIViewController {

	/*^block*/id _completionHandler;
	UIUndoTutorialView* _tutorialView;

}

@property (nonatomic,copy) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) UIUndoTutorialView * tutorialView;              //@synthesize tutorialView=_tutorialView - In the implementation block
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIUndoTutorialView *)tutorialView;
-(void)doneButtonPressed;
-(void)setTutorialView:(UIUndoTutorialView *)arg1 ;
@end

