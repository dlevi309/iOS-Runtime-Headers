/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSDContentAnimationTiming.h>

@class NSString;

@interface TSDContentAnimation : NSObject <TSDContentAnimationTiming>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animation;
-(void)i_applyToLayer:(id)arg1 withTransformBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)i_canProduceAnimation;
-(id)i_endLocation;
-(id)i_animationWithTransformBlock:(/*^block*/id)arg1 ;
@end

