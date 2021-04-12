/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UITimingCurveProvider.h>

@class UISpringTimingParameters, _UIViewCubicTimingFunction;

@interface UICubicTimingParameters : NSObject <UITimingCurveProvider> {

	long long _timingCurveType;
	_UIViewCubicTimingFunction* _timingFunction;
	long long _animationCurve;
	UISpringTimingParameters* _springTimingParameters;

}

@property (nonatomic,readonly) _UIViewCubicTimingFunction * timingFunction;                  //@synthesize timingFunction=_timingFunction - In the implementation block
@property (nonatomic,retain) UISpringTimingParameters * springTimingParameters;              //@synthesize springTimingParameters=_springTimingParameters - In the implementation block
@property (nonatomic,readonly) long long animationCurve;                                     //@synthesize animationCurve=_animationCurve - In the implementation block
@property (nonatomic,readonly) CGPoint controlPoint1; 
@property (nonatomic,readonly) CGPoint controlPoint2; 
@property (nonatomic,readonly) long long timingCurveType;                                    //@synthesize timingCurveType=_timingCurveType - In the implementation block
@property (nonatomic,readonly) UICubicTimingParameters * cubicTimingParameters; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_UIViewCubicTimingFunction *)timingFunction;
-(id)initWithCustomCurve:(id)arg1 ;
-(id)initWithControlPoint1:(CGPoint)arg1 controlPoint2:(CGPoint)arg2 ;
-(CGPoint)controlPoint1;
-(CGPoint)controlPoint2;
-(id)_mediaTimingFunction;
-(id)effectiveTimingFunction;
-(long long)timingCurveType;
-(long long)animationCurve;
-(id)initWithAnimationCurve:(long long)arg1 ;
-(UICubicTimingParameters *)cubicTimingParameters;
-(UISpringTimingParameters *)springTimingParameters;
-(void)_setAnimationCurve:(long long)arg1 ;
-(void)setSpringTimingParameters:(UISpringTimingParameters *)arg1 ;
@end

