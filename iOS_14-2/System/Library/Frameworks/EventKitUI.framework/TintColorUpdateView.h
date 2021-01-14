/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

