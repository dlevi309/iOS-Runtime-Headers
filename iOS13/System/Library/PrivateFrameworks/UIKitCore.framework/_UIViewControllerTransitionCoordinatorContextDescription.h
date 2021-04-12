/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UIViewControllerTransitionCoordinatorContextDescription : NSObject <NSSecureCoding> {

	BOOL _animated;
	BOOL _interactive;
	BOOL _cancelled;
	double _transitionDuration;
	double _percentComplete;
	double _completionVelocity;
	long long _completionCurve;
	long long _toOrientation;
	long long _fromOrientation;
	CGAffineTransform _targetTransform;

}

@property (assign,getter=isAnimated,nonatomic) BOOL animated;                    //@synthesize animated=_animated - In the implementation block
@property (assign,getter=isInteractive,nonatomic) BOOL interactive;              //@synthesize interactive=_interactive - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                  //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) double transitionDuration;                          //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (assign,nonatomic) double percentComplete;                             //@synthesize percentComplete=_percentComplete - In the implementation block
@property (assign,nonatomic) double completionVelocity;                          //@synthesize completionVelocity=_completionVelocity - In the implementation block
@property (assign,nonatomic) long long completionCurve;                          //@synthesize completionCurve=_completionCurve - In the implementation block
@property (assign,nonatomic) CGAffineTransform targetTransform;                  //@synthesize targetTransform=_targetTransform - In the implementation block
@property (assign,nonatomic) long long toOrientation;                            //@synthesize toOrientation=_toOrientation - In the implementation block
@property (assign,nonatomic) long long fromOrientation;                          //@synthesize fromOrientation=_fromOrientation - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)descriptionForTransitionCoordinatorContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isCancelled;
-(BOOL)isInteractive;
-(double)percentComplete;
-(long long)completionCurve;
-(BOOL)isAnimated;
-(double)transitionDuration;
-(long long)fromOrientation;
-(long long)toOrientation;
-(CGAffineTransform)targetTransform;
-(void)setCompletionCurve:(long long)arg1 ;
-(double)completionVelocity;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setInteractive:(BOOL)arg1 ;
-(void)setPercentComplete:(double)arg1 ;
-(void)setToOrientation:(long long)arg1 ;
-(void)setFromOrientation:(long long)arg1 ;
-(void)setTransitionDuration:(double)arg1 ;
-(void)setCompletionVelocity:(double)arg1 ;
-(void)setTargetTransform:(CGAffineTransform)arg1 ;
@end

