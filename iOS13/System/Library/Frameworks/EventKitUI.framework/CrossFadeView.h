/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface CrossFadeView : UIView {

	BOOL _scaleSize;
	UIView* _startView;
	UIView* _endView;
	CGRect _startFrame;
	CGRect _endFrame;

}

@property (nonatomic,readonly) UIView * startView;              //@synthesize startView=_startView - In the implementation block
@property (nonatomic,readonly) UIView * endView;                //@synthesize endView=_endView - In the implementation block
@property (nonatomic,readonly) CGRect startFrame;               //@synthesize startFrame=_startFrame - In the implementation block
@property (nonatomic,readonly) CGRect endFrame;                 //@synthesize endFrame=_endFrame - In the implementation block
@property (assign,nonatomic) BOOL scaleSize;                    //@synthesize scaleSize=_scaleSize - In the implementation block
-(id)description;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)endFrame;
-(CGRect)startFrame;
-(UIView *)endView;
-(void)setEndView:(UIView *)arg1 ;
-(void)setStartView:(UIView *)arg1 ;
-(void)setToEndState;
-(void)setToStartState;
-(void)springAnimateToStartStateWithTimingFunction:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)springAnimateToEndStateWithTimingFunction:(int)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)scaleSize;
-(UIView *)startView;
-(id)initWithStartView:(id)arg1 endView:(id)arg2 startFrame:(CGRect)arg3 endFrame:(CGRect)arg4 ;
-(void)animateToStartStateWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)animateToEndStateWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)springAnimateToStartStateWithTimingFunction:(int)arg1 ;
-(void)springAnimateToEndStateWithTimingFunction:(int)arg1 ;
-(void)haltAnimation;
-(void)setScaleSize:(BOOL)arg1 ;
@end

