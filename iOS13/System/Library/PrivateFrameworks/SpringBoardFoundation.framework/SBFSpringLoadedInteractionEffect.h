/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <UIKit/UISpringLoadedInteractionEffect.h>

@protocol UISpringLoadedInteractionEffect, SBFSpringLoadedInteractionEffectDelegate;
@class NSString;

@interface SBFSpringLoadedInteractionEffect : NSObject <UISpringLoadedInteractionEffect> {

	id<UISpringLoadedInteractionEffect> _blinkEffect;
	BOOL _useFastBlinkAnimation;
	id<SBFSpringLoadedInteractionEffectDelegate> _delegate;

}

@property (assign,nonatomic) BOOL useFastBlinkAnimation;                                                //@synthesize useFastBlinkAnimation=_useFastBlinkAnimation - In the implementation block
@property (assign,nonatomic,__weak) id<SBFSpringLoadedInteractionEffectDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SBFSpringLoadedInteractionEffectDelegate>)delegate;
-(void)setDelegate:(id<SBFSpringLoadedInteractionEffectDelegate>)arg1 ;
-(void)interaction:(id)arg1 didChangeWithContext:(id)arg2 ;
-(BOOL)useFastBlinkAnimation;
-(id)fastBlinkAnimation;
-(void)setUseFastBlinkAnimation:(BOOL)arg1 ;
@end

