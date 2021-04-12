/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIView *)cancelButtonCircle;
-(id)initWithFrame:(CGRect)arg1 hasDarkVibrancy:(BOOL)arg2 isInDarkMode:(BOOL)arg3 color:(id)arg4 sendColor:(char)arg5 ;
-(CALayer *)cancelButtonGlyphLayer;
-(UIView *)sendButtonCircle;
-(CALayer *)sendButtonGlyphLayer;
-(id)_glyphLayerForButtonAnimationWithGlyphName:(id)arg1 ;
@end

