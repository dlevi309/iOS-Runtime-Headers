/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 settings:(id)arg2 ;
-(void)layoutSubviews;
-(SBHomeGrabberView *)grabberView;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 rotationSettings:(id)arg3 ;
-(id)_addWrapperViewWithOrientation:(long long)arg1 ;
@end

