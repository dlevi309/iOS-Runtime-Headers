/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/

#import <ToneKit/ToneKit-Structs.h>
#import <UIKitCore/UIView.h>

@class CADisplayLink, NSMutableArray, CAMediaTimingFunction;

@interface TKDownloadIndicatorView : UIView {

	float _initialAnimatedProgress;
	float _currentAnimatedProgress;
	double _progressAnimationEndTime;
	double _progressAnimationStartTime;
	BOOL _isAnimatingProgress;
	CADisplayLink* _displayLink;
	NSMutableArray* _progressAnimationCompletionHandlers;
	CAMediaTimingFunction* _progressAnimationTimingFunction;
	float _progress;

}

@property (assign,nonatomic) float progress;              //@synthesize progress=_progress - In the implementation block
+(CGSize)_intrinsicDownloadIndicatorViewSize;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(float)progress;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setProgress:(float)arg1 ;
-(void)setProgress:(float)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)_handleDisplayLinkDidFire:(id)arg1 ;
-(void)_stopProgressAnimation;
@end

