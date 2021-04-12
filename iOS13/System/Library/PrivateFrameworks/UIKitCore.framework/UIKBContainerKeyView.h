/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBKeyView.h>

@class UIKBKeyView;

@interface UIKBContainerKeyView : UIKBKeyView {

	UIKBKeyView* _keyView;

}
-(void)dealloc;
-(id)key;
-(id)factory;
-(void)displayLayer:(id)arg1 ;
-(void)setNeedsDisplay;
-(void)setRenderConfig:(id)arg1 ;
-(void)prepareForDisplay;
-(id)contentsKeyView;
-(void)setDrawFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(id)renderConfig;
-(void)dimKeys:(id)arg1 ;
-(id)keyplane;
-(BOOL)hasRendered;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(id)layerForRenderFlags:(long long)arg1 ;
-(CGRect)drawFrame;
-(BOOL)requiresSublayers;
-(long long)imageOrientationForLayer:(id)arg1 ;
-(void)changeBackgroundToEnabled;
-(void)changeBackgroundToActiveIfNecessary;
-(void)setFactory:(id)arg1 ;
@end

