/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray, SBFHomeGrabberSettings, SBHomeGrabberView;

@interface SBHomeGrabberRotationView : UIView {

	NSMutableArray* _rotationWrapperViews;
	SBFHomeGrabberSettings* _grabberSettings;
	SBHomeGrabberView* _grabberView;
	long long _orientation;

}

@property (nonatomic,readonly) SBHomeGrabberView * grabberView;              //@synthesize grabberView=_grabberView - In the implementation block
@property (assign,nonatomic) long long orientation;                          //@synthesize orientation=_orientation - In the implementation block
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 settings:(id)arg2 ;
-(SBHomeGrabberView *)grabberView;
-(id)_addWrapperViewWithOrientation:(long long)arg1 ;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 rotationSettings:(id)arg3 ;
@end

