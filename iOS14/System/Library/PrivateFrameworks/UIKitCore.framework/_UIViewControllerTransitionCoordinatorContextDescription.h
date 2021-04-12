/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTransitionDuration:(double)arg1 ;
-(BOOL)isAnimated;
-(void)setCancelled:(BOOL)arg1 ;
-(double)completionVelocity;
-(CGAffineTransform)targetTransform;
-(void)setAnimated:(BOOL)arg1 ;
-(double)transitionDuration;
-(void)setTargetTransform:(CGAffineTransform)arg1 ;
-(long long)fromOrientation;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)toOrientation;
-(long long)completionCurve;
-(BOOL)isInteractive;
-(void)setCompletionVelocity:(double)arg1 ;
-(void)setFromOrientation:(long long)arg1 ;
-(void)setInteractive:(BOOL)arg1 ;
-(void)setToOrientation:(long long)arg1 ;
-(void)setPercentComplete:(double)arg1 ;
-(void)setCompletionCurve:(long long)arg1 ;
-(double)percentComplete;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isCancelled;
@end

