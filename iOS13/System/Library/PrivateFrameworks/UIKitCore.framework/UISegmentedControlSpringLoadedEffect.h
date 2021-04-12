/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UISpringLoadedInteractionEffect.h>

@protocol UISpringLoadedInteractionEffect;
@class NSString;

@interface UISegmentedControlSpringLoadedEffect : NSObject <UISpringLoadedInteractionEffect> {

	id<UISpringLoadedInteractionEffect> _blinkEffect;

}

@property (nonatomic,retain) id<UISpringLoadedInteractionEffect> blinkEffect;              //@synthesize blinkEffect=_blinkEffect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)interaction:(id)arg1 didChangeWithContext:(id)arg2 ;
-(void)setBlinkEffect:(id<UISpringLoadedInteractionEffect>)arg1 ;
-(id<UISpringLoadedInteractionEffect>)blinkEffect;
@end

