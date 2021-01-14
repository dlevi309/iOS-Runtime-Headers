/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDuration:(double)arg1 ;
-(void)startAnimating;
-(void)setProgressView:(UIView *)arg1 ;
-(UIView *)progressView;
-(double)duration;
-(id)initWithFrame:(CGRect)arg1 duration:(double)arg2 ;
-(BOOL)hasStartedAnimating;
-(void)setHasStartedAnimating:(BOOL)arg1 ;
@end

