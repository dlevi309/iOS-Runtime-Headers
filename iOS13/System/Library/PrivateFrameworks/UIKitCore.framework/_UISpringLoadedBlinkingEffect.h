/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UISpringLoadedInteractionEffect.h>

@class CALayer, NSString;

@interface _UISpringLoadedBlinkingEffect : NSObject <UISpringLoadedInteractionEffect> {

	CALayer* _blinkLayer;

}

@property (nonatomic,retain) CALayer * blinkLayer;                  //@synthesize blinkLayer=_blinkLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)interaction:(id)arg1 didChangeWithContext:(id)arg2 ;
-(CALayer *)blinkLayer;
-(void)_prepareLayer:(id)arg1 forView:(id)arg2 ;
-(id)blinkAnimation;
-(void)setBlinkLayer:(CALayer *)arg1 ;
@end

