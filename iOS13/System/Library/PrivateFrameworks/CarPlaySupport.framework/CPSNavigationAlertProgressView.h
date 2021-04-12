/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface CPSNavigationAlertProgressView : UIView {

	BOOL _hasStartedAnimating;
	double _duration;
	UIView* _progressView;

}

@property (assign,nonatomic) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) UIView * progressView;                 //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic) BOOL hasStartedAnimating;              //@synthesize hasStartedAnimating=_hasStartedAnimating - In the implementation block
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)startAnimating;
-(UIView *)progressView;
-(void)setProgressView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 duration:(double)arg2 ;
-(BOOL)hasStartedAnimating;
-(void)setHasStartedAnimating:(BOOL)arg1 ;
@end

