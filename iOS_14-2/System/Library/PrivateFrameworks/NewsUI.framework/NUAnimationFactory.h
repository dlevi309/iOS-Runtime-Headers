/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>

@class CAMediaTimingFunction, NSString;

@interface NUAnimationFactory : NSObject <_UIBasicAnimationFactory> {

	CAMediaTimingFunction* _mediaTimingFunction;

}

@property (nonatomic,readonly) CAMediaTimingFunction * mediaTimingFunction;              //@synthesize mediaTimingFunction=_mediaTimingFunction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(id)initWithMediaTimingFunction:(id)arg1 ;
-(CAMediaTimingFunction *)mediaTimingFunction;
@end

