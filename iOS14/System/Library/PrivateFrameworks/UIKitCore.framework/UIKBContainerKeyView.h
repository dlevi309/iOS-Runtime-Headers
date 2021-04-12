/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBKeyView.h>

@class UIKBKeyView;

@interface UIKBContainerKeyView : UIKBKeyView {

	UIKBKeyView* _keyView;

}
-(void)dimKeys:(id)arg1 ;
-(void)prepareForDisplay;
-(void)setNeedsDisplay;
-(id)contentsKeyView;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(id)keyplane;
-(id)layerForRenderFlags:(long long)arg1 ;
-(BOOL)requiresSublayers;
-(id)renderConfig;
-(long long)imageOrientationForLayer:(id)arg1 ;
-(void)changeBackgroundToEnabled;
-(void)changeBackgroundToActiveIfNecessary;
-(id)factory;
-(CGRect)drawFrame;
-(id)key;
-(void)displayLayer:(id)arg1 ;
-(void)setDrawFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)setFactory:(id)arg1 ;
-(BOOL)hasRendered;
-(void)setRenderConfig:(id)arg1 ;
-(void)dealloc;
@end

