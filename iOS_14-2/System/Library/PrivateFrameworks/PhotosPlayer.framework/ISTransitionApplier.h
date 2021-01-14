/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface ISTransitionApplier : NSObject <CAAnimationDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultApplier;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ofLayer:(id)arg3 withTransitionOptions:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)applyOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 toPhotoLayer:(id)arg3 videoLayer:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_applyScale:(double)arg1 toLayer:(id)arg2 withTransitionOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_applyAlpha:(double)arg1 blurRadius:(double)arg2 toLayer:(id)arg3 withTransitionOptions:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)applyScale:(double)arg1 withTransitionOptions:(id)arg2 toPhotoLayer:(id)arg3 videoLayer:(id)arg4 completion:(/*^block*/id)arg5 ;
@end

