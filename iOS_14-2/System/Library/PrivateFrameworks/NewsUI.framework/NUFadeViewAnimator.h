/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFadeInDelay:(double)arg1 ;
-(double)fadeOutDuration;
-(double)fadeInDelay;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(void)fadeFromView:(id)arg1 toView:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

