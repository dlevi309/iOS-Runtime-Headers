/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UIView.h>

@protocol EKUITintColorUpdateDelegate;
@class UIView;

@interface TintColorUpdateView : UIView {

	UIView*<EKUITintColorUpdateDelegate> _tintColorUpdateDelegate;

}

@property (assign,nonatomic) UIView*<EKUITintColorUpdateDelegate> tintColorUpdateDelegate;              //@synthesize tintColorUpdateDelegate=_tintColorUpdateDelegate - In the implementation block
-(void)tintColorDidChange;
-(UIView*<EKUITintColorUpdateDelegate>)tintColorUpdateDelegate;
-(void)setTintColorUpdateDelegate:(UIView*<EKUITintColorUpdateDelegate>)arg1 ;
@end

