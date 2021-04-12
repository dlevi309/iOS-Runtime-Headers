/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)repeatCount;
-(void)_finalize;
-(BOOL)isFinalized;
-(void)calculateFrameValues:(id)arg1 frameTimes:(id)arg2 withFrameInterval:(double)arg3 valueTransformer:(/*^block*/id)arg4 ;
-(void)setDuration:(double)arg1 ;
-(NSArray *)animationFrames;
-(id)initialValue;
-(void)setRepeatCount:(double)arg1 ;
-(void)setAutoreverses:(BOOL)arg1 ;
-(BOOL)autoreverses;
-(void)_enumerateAnimationFramesForKeyframes:(/*^block*/id)arg1 ;
-(id)description;
-(void)animateFrameAtIndex:(long long)arg1 animations:(/*^block*/id)arg2 ;
-(NSString *)key;
-(void)addAnimationFrameForValue:(id)arg1 ;
-(id)_animationFrames;
-(BOOL)isEmpty;
-(void)setInitialValue:(id)arg1 ;
-(double)duration;
-(void)setKey:(NSString *)arg1 ;
@end

