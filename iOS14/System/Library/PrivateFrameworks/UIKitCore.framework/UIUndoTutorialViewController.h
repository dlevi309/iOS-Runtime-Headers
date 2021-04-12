/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)doneButtonPressed;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(UIUndoTutorialView *)tutorialView;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setTutorialView:(UIUndoTutorialView *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
@end

