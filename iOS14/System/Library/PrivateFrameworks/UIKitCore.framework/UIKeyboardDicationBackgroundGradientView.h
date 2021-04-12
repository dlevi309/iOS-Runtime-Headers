/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(void)setDictationView:(UIDictationView *)arg1 ;
-(UIKBRenderConfig *)renderConfig;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)backgroundColorForCurrentRenderConfig;
-(void)startColorTransitionIn;
-(void)startColorTransitionOut;
-(CGRect)_backgroundFillFrame;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(void)dealloc;
-(UIDictationView *)dictationView;
@end

