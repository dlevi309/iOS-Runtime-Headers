/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/CCUIGroupRendering.h>
#import <libobjc.A.dylib/CCUITouchContinuationProviding.h>
#import <libobjc.A.dylib/CCUIContentModuleTopLevelGestureProvider.h>

@class NSArray, CALayer, UIImageView, CCUICAPackageView, MTVisualStylingProvider, UIImage, CCUICAPackageDescription, NSString;

@interface CCUIBaseSliderView : UIControl <CCUIGroupRendering, CCUITouchContinuationProviding, CCUIContentModuleTopLevelGestureProvider> {

	UIImageView* _glyphImageView;
	CCUICAPackageView* _glyphPackageView;
	CCUICAPackageView* _compensatingGlyphPackageView;
	MTVisualStylingProvider* _visualStylingProvider;
	BOOL _didConfigureGlyphPackageView;
	BOOL _glyphVisible;
	BOOL _interactiveWhenUnexpanded;
	float _value;
	UIImage* _glyphImage;
	CCUICAPackageDescription* _glyphPackageDescription;
	NSString* _glyphState;
	double _glyphScale;

}

@property (nonatomic,readonly) CGPoint glyphCenter; 
@property (assign,nonatomic) double glyphScale;                                                              //@synthesize glyphScale=_glyphScale - In the implementation block
@property (assign,nonatomic) float value;                                                                    //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) UIImage * glyphImage;                                                           //@synthesize glyphImage=_glyphImage - In the implementation block
@property (nonatomic,retain) CCUICAPackageDescription * glyphPackageDescription;                             //@synthesize glyphPackageDescription=_glyphPackageDescription - In the implementation block
@property (nonatomic,retain) NSString * glyphState;                                                          //@synthesize glyphState=_glyphState - In the implementation block
@property (assign,getter=isGlyphVisible,nonatomic) BOOL glyphVisible;                                        //@synthesize glyphVisible=_glyphVisible - In the implementation block
@property (assign,getter=isInteractiveWhenUnexpanded,nonatomic) BOOL interactiveWhenUnexpanded;              //@synthesize interactiveWhenUnexpanded=_interactiveWhenUnexpanded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isGroupRenderingRequired,nonatomic,readonly) BOOL groupRenderingRequired; 
@property (nonatomic,readonly) NSArray * punchOutRootLayers; 
@property (nonatomic,readonly) CALayer * punchOutRootLayer; 
@property (nonatomic,readonly) NSArray * topLevelBlockingGestureRecognizers; 
-(float)value;
-(void)setValue:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(id)viewForTouchContinuation;
-(UIImage *)glyphImage;
-(void)setGlyphImage:(UIImage *)arg1 ;
-(void)setGlyphPackageDescription:(CCUICAPackageDescription *)arg1 ;
-(void)setGlyphState:(NSString *)arg1 ;
-(CCUICAPackageDescription *)glyphPackageDescription;
-(NSString *)glyphState;
-(double)sliderLengthForValue:(float)arg1 ;
-(BOOL)isInteractiveWhenUnexpanded;
-(CGPoint)glyphCenter;
-(NSArray *)topLevelBlockingGestureRecognizers;
-(NSArray *)punchOutRootLayers;
-(CALayer *)punchOutRootLayer;
-(BOOL)isGroupRenderingRequired;
-(void)setGlyphScale:(double)arg1 ;
-(double)glyphScale;
-(void)_setGlyphState:(id)arg1 ;
-(void)_updateGlyphImageViewVisualStyling;
-(id)_newGlyphPackageView;
-(void)_configureGlyphPackageView:(id)arg1 ;
-(void)_configureCompensatingGlyphPackageView:(id)arg1 ;
-(double)sliderHeightForValue:(float)arg1 ;
-(void)setGlyphVisible:(BOOL)arg1 ;
-(BOOL)isGlyphVisible;
-(void)setInteractiveWhenUnexpanded:(BOOL)arg1 ;
@end

