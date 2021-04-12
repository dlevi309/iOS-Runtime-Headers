/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TUMotionManagerObserver.h>

@interface TeaUI.MotionDebugView : UIView <TUMotionManagerObserver> {

	 label;
	 labelBackgroundView;

}
-(void)motionManager:(id)arg1 didUpdateMotionData:(id)arg2 ;
-(void)motionManager:(id)arg1 motionEnabled:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(id)initWithCoder:(id)arg1 ;
-(void)safeAreaInsetsDidChange;
@end

