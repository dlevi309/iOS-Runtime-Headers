/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
*/

#import <ControlCenterUIKit/CCUIMenuModuleViewController.h>

@protocol HACCContentModuleDelegate;
@interface HACCMenuModuleViewController : CCUIMenuModuleViewController {

	id<HACCContentModuleDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HACCContentModuleDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HACCContentModuleDelegate>)delegate;
-(void)setDelegate:(id<HACCContentModuleDelegate>)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_canShowWhileLocked;
@end

