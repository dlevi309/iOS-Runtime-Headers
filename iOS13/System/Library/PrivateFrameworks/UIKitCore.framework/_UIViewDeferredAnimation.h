/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, NSArray;

@interface _UIViewDeferredAnimation : NSObject {

	BOOL _finalized;
	BOOL _autoreverses;
	NSString* _key;
	double _duration;
	id _initialValue;
	double _repeatCount;

}

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,copy) NSString * key;                                     //@synthesize key=_key - In the implementation block
@property (getter=isFinalized,nonatomic,readonly) BOOL finalized;              //@synthesize finalized=_finalized - In the implementation block
@property (assign,nonatomic) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) id initialValue;                                  //@synthesize initialValue=_initialValue - In the implementation block
@property (nonatomic,readonly) NSArray * animationFrames; 
@property (assign,nonatomic) double repeatCount;                               //@synthesize repeatCount=_repeatCount - In the implementation block
@property (assign,nonatomic) BOOL autoreverses;                                //@synthesize autoreverses=_autoreverses - In the implementation block
-(id)description;
-(NSString *)key;
-(BOOL)isEmpty;
-(void)setKey:(NSString *)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setAutoreverses:(BOOL)arg1 ;
-(void)setRepeatCount:(double)arg1 ;
-(NSArray *)animationFrames;
-(void)animateFrameAtIndex:(long long)arg1 animations:(/*^block*/id)arg2 ;
-(id)initialValue;
-(void)addAnimationFrameForValue:(id)arg1 ;
-(BOOL)autoreverses;
-(double)repeatCount;
-(void)setInitialValue:(id)arg1 ;
-(void)_finalize;
-(void)calculateFrameValues:(id)arg1 frameTimes:(id)arg2 withFrameInterval:(double)arg3 valueTransformer:(/*^block*/id)arg4 ;
-(id)_animationFrames;
-(void)_enumerateAnimationFramesForKeyframes:(/*^block*/id)arg1 ;
-(BOOL)isFinalized;
@end

