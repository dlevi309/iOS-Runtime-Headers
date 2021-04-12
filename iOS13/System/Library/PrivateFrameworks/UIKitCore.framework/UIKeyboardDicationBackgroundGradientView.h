/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIBasicAnimationFactory.h>

@class UIKBRenderConfig, UIDictationView, NSString;

@interface UIKeyboardDicationBackgroundGradientView : UIView <_UIBasicAnimationFactory> {

	UIKBRenderConfig* _renderConfig;
	UIDictationView* _dictationView;

}

@property (nonatomic,retain) UIKBRenderConfig * renderConfig;              //@synthesize renderConfig=_renderConfig - In the implementation block
@property (assign,nonatomic) UIDictationView * dictationView;              //@synthesize dictationView=_dictationView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(UIKBRenderConfig *)renderConfig;
-(UIDictationView *)dictationView;
-(void)setDictationView:(UIDictationView *)arg1 ;
-(id)backgroundColorForCurrentRenderConfig;
-(void)startColorTransitionIn;
-(void)startColorTransitionOut;
-(CGRect)_backgroundFillFrame;
@end

