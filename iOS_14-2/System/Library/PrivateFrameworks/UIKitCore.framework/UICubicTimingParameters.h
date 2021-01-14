/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSpringTimingParameters:(UISpringTimingParameters *)arg1 ;
-(id)init;
-(id)effectiveTimingFunction;
-(CGPoint)controlPoint2;
-(void)encodeWithCoder:(id)arg1 ;
-(_UIViewCubicTimingFunction *)timingFunction;
-(id)initWithCustomCurve:(id)arg1 ;
-(long long)timingCurveType;
-(id)description;
-(void)_setAnimationCurve:(long long)arg1 ;
-(long long)animationCurve;
-(UICubicTimingParameters *)cubicTimingParameters;
-(id)initWithCoder:(id)arg1 ;
-(UISpringTimingParameters *)springTimingParameters;
-(id)_mediaTimingFunction;
-(CGPoint)controlPoint1;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAnimationCurve:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithControlPoint1:(CGPoint)arg1 controlPoint2:(CGPoint)arg2 ;
@end

