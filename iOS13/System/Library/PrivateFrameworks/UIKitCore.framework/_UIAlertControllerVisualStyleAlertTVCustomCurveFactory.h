/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIBasicAnimationFactory.h>

@class NSString;

@interface _UIAlertControllerVisualStyleAlertTVCustomCurveFactory : NSObject <_UIBasicAnimationFactory> {

	unsigned long long _curve;

}

@property (assign,nonatomic) unsigned long long curve;              //@synthesize curve=_curve - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithCustomCurve:(unsigned long long)arg1 ;
-(unsigned long long)curve;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)setCurve:(unsigned long long)arg1 ;
@end

