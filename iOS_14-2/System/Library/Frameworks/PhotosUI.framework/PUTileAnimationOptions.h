/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol OS_dispatch_group;
#import <PhotosUI/PhotosUI-Structs.h>
@class NSObject;

@interface PUTileAnimationOptions : NSObject {

	BOOL _shouldFadeOutSnapshotAfterCompletionGroup;
	BOOL _synchronizedWithTransition;
	long long _kind;
	double _delay;
	double _duration;
	double _springDampingRatio;
	double _springMass;
	double _springStiffness;
	long long _springNumberOfOscillations;
	/*^block*/id _customViewAnimatorBlock;
	NSObject*<OS_dispatch_group> _completionGroup;
	PUDisplayVelocity _initialVelocity;

}

@property (assign,getter=isSynchronizedWithTransition,nonatomic) BOOL synchronizedWithTransition;              //@synthesize synchronizedWithTransition=_synchronizedWithTransition - In the implementation block
@property (assign,nonatomic) long long kind;                                                                   //@synthesize kind=_kind - In the implementation block
@property (assign,nonatomic) double delay;                                                                     //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) double duration;                                                                  //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double springDampingRatio;                                                        //@synthesize springDampingRatio=_springDampingRatio - In the implementation block
@property (assign,nonatomic) double springMass;                                                                //@synthesize springMass=_springMass - In the implementation block
@property (assign,nonatomic) double springStiffness;                                                           //@synthesize springStiffness=_springStiffness - In the implementation block
@property (assign,nonatomic) long long springNumberOfOscillations;                                             //@synthesize springNumberOfOscillations=_springNumberOfOscillations - In the implementation block
@property (assign,nonatomic) PUDisplayVelocity initialVelocity;                                                //@synthesize initialVelocity=_initialVelocity - In the implementation block
@property (nonatomic,copy) id customViewAnimatorBlock;                                                         //@synthesize customViewAnimatorBlock=_customViewAnimatorBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> completionGroup;                                     //@synthesize completionGroup=_completionGroup - In the implementation block
@property (assign,nonatomic) BOOL shouldFadeOutSnapshotAfterCompletionGroup;                                   //@synthesize shouldFadeOutSnapshotAfterCompletionGroup=_shouldFadeOutSnapshotAfterCompletionGroup - In the implementation block
-(void)setDuration:(double)arg1 ;
-(PUDisplayVelocity)initialVelocity;
-(void)setInitialVelocity:(PUDisplayVelocity)arg1 ;
-(void)setDelay:(double)arg1 ;
-(NSObject*<OS_dispatch_group>)completionGroup;
-(void)setCompletionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setSpringNumberOfOscillations:(long long)arg1 ;
-(void)setSpringDampingRatio:(double)arg1 ;
-(void)setSpringStiffness:(double)arg1 ;
-(void)setSpringMass:(double)arg1 ;
-(void)setSynchronizedWithTransition:(BOOL)arg1 ;
-(void)setCustomViewAnimatorBlock:(id)arg1 ;
-(long long)kind;
-(double)springDampingRatio;
-(double)springStiffness;
-(long long)springNumberOfOscillations;
-(id)customViewAnimatorBlock;
-(BOOL)shouldFadeOutSnapshotAfterCompletionGroup;
-(BOOL)isSynchronizedWithTransition;
-(double)delay;
-(void)setShouldFadeOutSnapshotAfterCompletionGroup:(BOOL)arg1 ;
-(void)setKind:(long long)arg1 ;
-(double)duration;
-(double)springMass;
@end

