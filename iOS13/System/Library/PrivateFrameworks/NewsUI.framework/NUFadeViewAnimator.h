/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@interface NUFadeViewAnimator : NSObject {

	double _fadeOutDuration;
	double _fadeInDuration;
	double _fadeInDelay;

}

@property (assign,nonatomic) double fadeOutDuration;              //@synthesize fadeOutDuration=_fadeOutDuration - In the implementation block
@property (assign,nonatomic) double fadeInDuration;               //@synthesize fadeInDuration=_fadeInDuration - In the implementation block
@property (assign,nonatomic) double fadeInDelay;                  //@synthesize fadeInDelay=_fadeInDelay - In the implementation block
-(id)init;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(void)fadeFromView:(id)arg1 toView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(double)fadeInDelay;
-(void)setFadeInDelay:(double)arg1 ;
@end

