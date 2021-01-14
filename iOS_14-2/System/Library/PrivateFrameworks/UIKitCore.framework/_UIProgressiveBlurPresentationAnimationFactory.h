/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIBasicAnimationFactory.h>

@class NSString;

@interface _UIProgressiveBlurPresentationAnimationFactory : NSObject <_UIBasicAnimationFactory> {

	unsigned long long _curve;

}

@property (nonatomic,readonly) unsigned long long curve;              //@synthesize curve=_curve - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)curve;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)initWithCurve:(unsigned long long)arg1 ;
-(id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2 ;
@end

