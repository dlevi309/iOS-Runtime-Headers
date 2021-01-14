/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)curve;
-(id)init;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)initWithCustomCurve:(unsigned long long)arg1 ;
-(id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)setCurve:(unsigned long long)arg1 ;
@end

