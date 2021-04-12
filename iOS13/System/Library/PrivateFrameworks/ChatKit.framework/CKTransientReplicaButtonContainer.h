/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, CALayer;

@interface CKTransientReplicaButtonContainer : UIView {

	UIView* _sendButtonCircle;
	UIView* _cancelButtonCircle;
	CALayer* _sendButtonGlyphLayer;
	CALayer* _cancelButtonGlyphLayer;

}

@property (nonatomic,readonly) UIView * sendButtonCircle;                     //@synthesize sendButtonCircle=_sendButtonCircle - In the implementation block
@property (nonatomic,readonly) UIView * cancelButtonCircle;                   //@synthesize cancelButtonCircle=_cancelButtonCircle - In the implementation block
@property (nonatomic,readonly) CALayer * sendButtonGlyphLayer;                //@synthesize sendButtonGlyphLayer=_sendButtonGlyphLayer - In the implementation block
@property (nonatomic,readonly) CALayer * cancelButtonGlyphLayer;              //@synthesize cancelButtonGlyphLayer=_cancelButtonGlyphLayer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 hasDarkVibrancy:(BOOL)arg2 color:(char)arg3 ;
-(UIView *)cancelButtonCircle;
-(CALayer *)cancelButtonGlyphLayer;
-(UIView *)sendButtonCircle;
-(CALayer *)sendButtonGlyphLayer;
-(id)_glyphLayerForButtonAnimationWithGlyphName:(id)arg1 ;
@end

