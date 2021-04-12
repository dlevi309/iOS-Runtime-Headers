/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/HearingAidsModule.bundle/HearingAidsModule
*/

#import <ControlCenterUIKit/CCUIButtonModuleViewController.h>

@protocol HACCIconViewControllerDelegate;
@interface HACCIconViewController : CCUIButtonModuleViewController {

	id<HACCIconViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HACCIconViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HACCIconViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HACCIconViewControllerDelegate>)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
@end

