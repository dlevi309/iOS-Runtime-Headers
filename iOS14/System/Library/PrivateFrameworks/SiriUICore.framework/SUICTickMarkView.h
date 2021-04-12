/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/

#import <SiriUICore/SiriUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class CADisplayLink, NSTimer, NSLock;

@interface SUICTickMarkView : UIView {

	CADisplayLink* _displayLink;
	BOOL _shown;
	long long _currentPreferredFrameRate;
	long long _currentFrame;
	int _animState;
	NSTimer* _safetyTimer;
	BOOL _completionCalled;
	/*^block*/id _completionBlock;
	NSLock* _completionLock;
	long long _fadeInFrames;
	long long _pauseFrames;
	long long _fadeOutFrames;

}
+(void)initialize;
-(id)init;
-(void)setHidden:(BOOL)arg1 ;
-(void)didMoveToSuperview;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setUpDisplayLink;
-(CGImageRef)imageMask:(BOOL)arg1 ;
-(void)handleSafetyTimer:(id)arg1 ;
-(void)tearDownDisplayLink;
-(void)startAnimationsForTickMark:(BOOL)arg1 fadeInFrames:(long long)arg2 pauseFrames:(long long)arg3 fadeOutFrames:(long long)arg4 completion:(/*^block*/id)arg5 ;
@end

