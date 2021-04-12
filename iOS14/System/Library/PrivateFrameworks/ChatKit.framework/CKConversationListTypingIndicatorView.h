/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UIView.h>

@class IMConversationListTypingIndicatorLayer;

@interface CKConversationListTypingIndicatorView : UIView {

	BOOL _highlightedState;
	BOOL _flipForRTLLayout;
	BOOL _isDarkAqua;
	IMConversationListTypingIndicatorLayer* _typingLayer;
	double _typingIndicatorScale;

}

@property (nonatomic,retain) IMConversationListTypingIndicatorLayer * typingLayer;              //@synthesize typingLayer=_typingLayer - In the implementation block
@property (assign,nonatomic) BOOL isDarkAqua;                                                   //@synthesize isDarkAqua=_isDarkAqua - In the implementation block
@property (assign,nonatomic) double typingIndicatorScale;                                       //@synthesize typingIndicatorScale=_typingIndicatorScale - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlightedState;                        //@synthesize highlightedState=_highlightedState - In the implementation block
@property (assign,nonatomic) BOOL flipForRTLLayout;                                             //@synthesize flipForRTLLayout=_flipForRTLLayout - In the implementation block
-(id)init;
-(void)setHighlightedState:(BOOL)arg1 ;
-(void)setTypingIndicatorScale:(double)arg1 ;
-(void)setFlipForRTLLayout:(BOOL)arg1 ;
-(BOOL)isDarkAqua;
-(IMConversationListTypingIndicatorLayer *)typingLayer;
-(void)startPulseAnimation;
-(void)setTypingLayer:(IMConversationListTypingIndicatorLayer *)arg1 ;
-(void)_updateTypingLayerTransform;
-(void)destroyTypingLayer;
-(void)startShrinkAnimationWithCompletionBlock:(/*^block*/id)arg1 ;
-(double)typingIndicatorScale;
-(void)resetTypingLayer;
-(void)startGrowAnimation;
-(BOOL)flipForRTLLayout;
-(void)setIsDarkAqua:(BOOL)arg1 ;
-(void)stopAnimation;
-(BOOL)isHighlighted;
@end

