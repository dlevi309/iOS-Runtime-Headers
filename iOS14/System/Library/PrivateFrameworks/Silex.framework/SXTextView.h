/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SXTextTangierRepAccessibilityDataSource.h>
#import <libobjc.A.dylib/TSDRepDirectLayerHosting.h>
#import <libobjc.A.dylib/SXTextCanvasRenderSource.h>

@protocol SXTextViewDelegate, SXTextTangierRepAccessibilityElement;
@class SXTextLayouter, SXTextSource, SXTextTangierContainerInfo, SXTextTangierFlowRep, TSDLayoutController, CALayer, TSDCanvas, NSString;

@interface SXTextView : UIView <SXTextTangierRepAccessibilityDataSource, TSDRepDirectLayerHosting, SXTextCanvasRenderSource> {

	BOOL _isSelectable;
	BOOL _shouldHyphenate;
	BOOL _mightBeVisuallyMisplaced;
	SXTextLayouter* _textLayouter;
	id<SXTextViewDelegate> _delegate;
	SXTextSource* _textSource;
	SXTextTangierContainerInfo* _textInfo;
	SXTextTangierFlowRep*<SXTextTangierRepAccessibilityElement> _rep;
	TSDLayoutController* _layoutController;
	CALayer* _repContainerLayer;
	CALayer* _overlayContainerLayer;
	TSDCanvas* _canvas;
	CGRect _frameInCanvas;
	CGRect _parentFrame;

}

@property (nonatomic,readonly) TSDLayoutController * layoutController;                                            //@synthesize layoutController=_layoutController - In the implementation block
@property (nonatomic,retain) CALayer * repContainerLayer;                                                         //@synthesize repContainerLayer=_repContainerLayer - In the implementation block
@property (nonatomic,retain) CALayer * overlayContainerLayer;                                                     //@synthesize overlayContainerLayer=_overlayContainerLayer - In the implementation block
@property (assign,nonatomic,__weak) TSDCanvas * canvas;                                                           //@synthesize canvas=_canvas - In the implementation block
@property (assign,nonatomic,__weak) SXTextTangierFlowRep*<SXTextTangierRepAccessibilityElement> rep;              //@synthesize rep=_rep - In the implementation block
@property (nonatomic,retain) SXTextLayouter * textLayouter;                                                       //@synthesize textLayouter=_textLayouter - In the implementation block
@property (assign,nonatomic,__weak) id<SXTextViewDelegate> delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SXTextSource * textSource;                                                         //@synthesize textSource=_textSource - In the implementation block
@property (assign,nonatomic) CGRect parentFrame;                                                                  //@synthesize parentFrame=_parentFrame - In the implementation block
@property (assign,nonatomic) BOOL isSelectable;                                                                   //@synthesize isSelectable=_isSelectable - In the implementation block
@property (assign,nonatomic) BOOL shouldHyphenate;                                                                //@synthesize shouldHyphenate=_shouldHyphenate - In the implementation block
@property (nonatomic,readonly) SXTextTangierContainerInfo * textInfo;                                             //@synthesize textInfo=_textInfo - In the implementation block
@property (assign,nonatomic) BOOL mightBeVisuallyMisplaced;                                                       //@synthesize mightBeVisuallyMisplaced=_mightBeVisuallyMisplaced - In the implementation block
@property (assign,nonatomic) CGRect frameInCanvas;                                                                //@synthesize frameInCanvas=_frameInCanvas - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXTextTangierFlowRep*<SXTextTangierRepAccessibilityElement>)rep;
-(id)accessibilityLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isAccessibilityElement;
-(id<SXTextViewDelegate>)delegate;
-(void)setCanvas:(TSDCanvas *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)accessibilityElements;
-(BOOL)isSelectable;
-(void)setDelegate:(id<SXTextViewDelegate>)arg1 ;
-(NSString *)description;
-(void)setFrame:(CGRect)arg1 ;
-(void)provideInfosLayoutTo:(id)arg1 ;
-(SXTextTangierContainerInfo *)textInfo;
-(void)setRep:(SXTextTangierFlowRep*<SXTextTangierRepAccessibilityElement>)arg1 ;
-(CGRect)parentFrame;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(long long)accessibilityContainerType;
-(void)setIsSelectable:(BOOL)arg1 ;
-(void)setNeedsLayout;
-(TSDCanvas *)canvas;
-(TSDLayoutController *)layoutController;
-(SXTextSource *)textSource;
-(void)setShouldHyphenate:(BOOL)arg1 ;
-(BOOL)shouldHyphenate;
-(void)setTextLayouter:(SXTextLayouter *)arg1 ;
-(SXTextLayouter *)textLayouter;
-(void)setFrameInCanvas:(CGRect)arg1 ;
-(void)setParentFrame:(CGRect)arg1 ;
-(void)setMightBeVisuallyMisplaced:(BOOL)arg1 ;
-(CGRect)frameInCanvas;
-(id)accessibilityCustomRotorMembershipForRep:(id)arg1 ;
-(BOOL)accessibilityRepIsSelectable:(id)arg1 ;
-(BOOL)mightBeVisuallyMisplaced;
-(id)infoGeometry;
-(void)directLayerHostUpdateWithContainerLayer:(id)arg1 forRep:(id)arg2 ;
-(void)_updateOverlayTransform;
-(void)directLayerHostRemoveIfMatchingContainerLayer:(id)arg1 forRep:(id)arg2 ;
-(void)directLayerhostUpdateTopLevelTilingLayers:(id)arg1 forRep:(id)arg2 ;
-(void)directLayerHostUpdateOverlayLayers:(id)arg1 forRep:(id)arg2 ;
-(CALayer *)repContainerLayer;
-(void)setRepContainerLayer:(CALayer *)arg1 ;
-(CALayer *)overlayContainerLayer;
-(void)setOverlayContainerLayer:(CALayer *)arg1 ;
@end

