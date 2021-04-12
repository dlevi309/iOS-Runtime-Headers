/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface BKUIPearlEnrollManager : NSObject <CAAnimationDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)gaussianBlurWithRadius:(double)arg1 ;
-(void)runBasicAnimationOnLayer:(id)arg1 withDuration:(double)arg2 keyPath:(id)arg3 fromValue:(id)arg4 toValue:(id)arg5 removedOnCompletion:(BOOL)arg6 timingFunction:(id)arg7 completion:(/*^block*/id)arg8 ;
-(id)gaussianBlurWithRadius:(double)arg1 normalizeEdges:(BOOL)arg2 hardEdges:(BOOL)arg3 quality:(id)arg4 intermediateBitDepth:(id)arg5 ;
@end

