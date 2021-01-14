/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBlinkLayer:(CALayer *)arg1 ;
-(void)_prepareLayer:(id)arg1 forView:(id)arg2 ;
-(CALayer *)blinkLayer;
-(id)blinkAnimation;
@end

