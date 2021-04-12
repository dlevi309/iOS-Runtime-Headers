/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, CADisplayLink;

@interface CKBrowserIconView : UIView {

	double _percentComplete;
	UIImage* _iconImage;
	BOOL _animating;
	double _animationStartTime;
	double _animationStartPercentComplete;
	double _animationEndPercentComplete;
	CADisplayLink* _displayLink;

}

@property (assign,nonatomic) BOOL animating;                                    //@synthesize animating=_animating - In the implementation block
@property (assign,nonatomic) double animationStartTime;                         //@synthesize animationStartTime=_animationStartTime - In the implementation block
@property (assign,nonatomic) double animationStartPercentComplete;              //@synthesize animationStartPercentComplete=_animationStartPercentComplete - In the implementation block
@property (assign,nonatomic) double animationEndPercentComplete;                //@synthesize animationEndPercentComplete=_animationEndPercentComplete - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                       //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                               //@synthesize iconImage=_iconImage - In the implementation block
@property (assign,nonatomic) double percentComplete;                            //@synthesize percentComplete=_percentComplete - In the implementation block
+(id)_pieImageForPercentComplete:(double)arg1 size:(CGSize)arg2 center:(CGPoint)arg3 radius:(double)arg4 ;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(double)percentComplete;
-(void)drawRect:(CGRect)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(BOOL)animating;
-(void)setPercentComplete:(double)arg1 ;
-(void)setAnimationStartTime:(double)arg1 ;
-(UIImage *)iconImage;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)setPercentComplete:(double)arg1 animated:(BOOL)arg2 ;
-(void)setAnimationStartPercentComplete:(double)arg1 ;
-(void)setAnimationEndPercentComplete:(double)arg1 ;
-(void)_onDisplayLink:(id)arg1 ;
-(double)animationStartTime;
-(double)animationEndPercentComplete;
-(double)animationStartPercentComplete;
@end

