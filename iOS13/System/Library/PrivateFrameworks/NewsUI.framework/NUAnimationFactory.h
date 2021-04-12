/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CAMediaTimingFunction *)mediaTimingFunction;
-(id)initWithMediaTimingFunction:(id)arg1 ;
@end

