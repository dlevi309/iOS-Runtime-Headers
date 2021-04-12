/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UISpringLoadedInteractionEffect.h>

@protocol UISpringLoadedInteractionEffect;
@class NSTimer, NSString;

@interface _UITableViewSpringLoadedEffect : NSObject <UISpringLoadedInteractionEffect> {

	id<UISpringLoadedInteractionEffect> _blinkEffect;
	NSTimer* _stateBlinkTimer;

}

@property (nonatomic,retain) id<UISpringLoadedInteractionEffect> blinkEffect;              //@synthesize blinkEffect=_blinkEffect - In the implementation block
@property (nonatomic,retain) NSTimer * stateBlinkTimer;                                    //@synthesize stateBlinkTimer=_stateBlinkTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setBlinkEffect:(id<UISpringLoadedInteractionEffect>)arg1 ;
-(NSTimer *)stateBlinkTimer;
-(void)interaction:(id)arg1 didChangeWithContext:(id)arg2 ;
-(void)setStateBlinkTimer:(NSTimer *)arg1 ;
-(id<UISpringLoadedInteractionEffect>)blinkEffect;
@end

