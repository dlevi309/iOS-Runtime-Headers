/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


@protocol ARUICountdownAnimation;
@class NSArray;

@interface ARUICountdownTimeline : NSObject {

	id<ARUICountdownAnimation> _prepareToAnimate;
	NSArray* _animations;
	id<ARUICountdownAnimation> _prepareToCancel;
	NSArray* _cancelAnimations;

}

@property (nonatomic,retain) id<ARUICountdownAnimation> prepareToAnimate;              //@synthesize prepareToAnimate=_prepareToAnimate - In the implementation block
@property (nonatomic,retain) NSArray * animations;                                     //@synthesize animations=_animations - In the implementation block
@property (nonatomic,retain) id<ARUICountdownAnimation> prepareToCancel;               //@synthesize prepareToCancel=_prepareToCancel - In the implementation block
@property (nonatomic,retain) NSArray * cancelAnimations;                               //@synthesize cancelAnimations=_cancelAnimations - In the implementation block
-(NSArray *)animations;
-(void)setAnimations:(NSArray *)arg1 ;
-(id<ARUICountdownAnimation>)prepareToAnimate;
-(id<ARUICountdownAnimation>)prepareToCancel;
-(NSArray *)cancelAnimations;
-(void)setPrepareToAnimate:(id<ARUICountdownAnimation>)arg1 ;
-(void)setPrepareToCancel:(id<ARUICountdownAnimation>)arg1 ;
-(void)setCancelAnimations:(NSArray *)arg1 ;
@end

