/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDCanvasDelegate;
#import <TSReading/TSReading-Structs.h>
@class TSDInteractiveCanvasController, NSArray, NSSet, TSDLayoutController, TSKDocumentRoot, TSPObjectContext, TSKChangeNotifier, TSKAccessController;

@interface TSDCanvas : NSObject {

	id<TSDCanvasDelegate> mDelegate;
	TSDInteractiveCanvasController* mCanvasController;
	NSArray* mInfos;
	NSArray* mTopLevelReps;
	NSSet* mAllReps;
	CFDictionaryRef mRepsByLayout;
	TSDLayoutController* mLayoutController;
	BOOL mIsTemporaryForLayout;
	CGSize mUnscaledSize;
	double mViewScale;
	double mContentsScale;
	BOOL mWideGamut;
	struct {
		unsigned layout : 1;
		unsigned reps : 1;
		unsigned visibleBounds : 1;
		unsigned layers : 1;
	}  mInvalidFlags;
	BOOL mInLayout;
	NSArray* mPreviouslyVisibleLayouts;
	CGColorRef mBackgroundColor;
	UIEdgeInsets mContentInset;
	BOOL mClipToCanvas;
	BOOL mAllowsFontSubpixelQuantization;
	BOOL pInTearDown;

}

@property (assign,nonatomic) BOOL pInTearDown; 
@property (assign,nonatomic) id<TSDCanvasDelegate> delegate; 
@property (nonatomic,readonly) TSKDocumentRoot * documentRoot; 
@property (nonatomic,readonly) TSPObjectContext * objectContext; 
@property (nonatomic,readonly) TSKChangeNotifier * changeNotifier; 
@property (nonatomic,readonly) TSKAccessController * accessController; 
@property (nonatomic,readonly) TSDInteractiveCanvasController * canvasController; 
@property (nonatomic,readonly) BOOL supportsAdaptiveLayout; 
@property (assign,nonatomic) BOOL allowsFontSubpixelQuantization; 
@property (nonatomic,readonly) double contentsScale; 
@property (nonatomic,readonly) BOOL canvasIsWideGamut; 
@property (assign,nonatomic) CGColorRef backgroundColor; 
@property (assign,nonatomic) UIEdgeInsets contentInset; 
@property (nonatomic,copy) NSArray * infosToDisplay; 
@property (nonatomic,readonly) TSDLayoutController * layoutController; 
@property (nonatomic,readonly) BOOL isTemporaryForLayout; 
@property (nonatomic,readonly) BOOL isCanvasInteractive; 
@property (assign,nonatomic) CGSize unscaledSize; 
@property (assign,nonatomic) double viewScale; 
-(id)init;
-(void)dealloc;
-(id<TSDCanvasDelegate>)delegate;
-(void)setDelegate:(id<TSDCanvasDelegate>)arg1 ;
-(void)teardown;
-(CGColorRef)backgroundColor;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(void)setViewScale:(double)arg1 ;
-(void)layoutIfNeeded;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(CGSize)unscaledSize;
-(double)contentsScale;
-(BOOL)allowsFontSubpixelQuantization;
-(void)setAllowsFontSubpixelQuantization:(BOOL)arg1 ;
-(void)setUnscaledSize:(CGSize)arg1 ;
-(id)allReps;
-(TSKDocumentRoot *)documentRoot;
-(void)invalidateLayers;
-(TSDLayoutController *)layoutController;
-(void)setInfosToDisplay:(NSArray *)arg1 ;
-(CGRect)convertUnscaledToBoundsRect:(CGRect)arg1 ;
-(CGRect)convertBoundsToUnscaledRect:(CGRect)arg1 ;
-(id)topLevelReps;
-(BOOL)isCanvasInteractive;
-(BOOL)spellCheckingSupported;
-(BOOL)spellCheckingSuppressed;
-(BOOL)shouldShowTextOverflowGlyphs;
-(BOOL)shouldShowInstructionalText;
-(NSArray *)infosToDisplay;
-(CGPoint)convertBoundsToUnscaledPoint:(CGPoint)arg1 ;
-(id)hitRep:(CGPoint)arg1 inTopLevelReps:(id)arg2 smallRepOutset:(double)arg3 withGesture:(id)arg4 passingTest:(/*^block*/id)arg5 ;
-(void)invalidateReps;
-(void)invalidateVisibleBounds;
-(TSDInteractiveCanvasController *)canvasController;
-(TSKAccessController *)accessController;
-(TSKChangeNotifier *)changeNotifier;
-(double)viewScale;
-(void)i_setCanvasController:(id)arg1 ;
-(BOOL)isPrinting;
-(void)p_layoutWithReadLock;
-(void)layoutInvalidated;
-(CGPoint)convertUnscaledToBoundsPoint:(CGPoint)arg1 ;
-(void)i_setInfosToDisplay:(id)arg1 updatingLayoutController:(BOOL)arg2 ;
-(void)i_updateInfosInLayoutController;
-(id)repForLayout:(id)arg1 ;
-(void)recreateAllLayoutsAndReps;
-(void)i_unregisterRep:(id)arg1 ;
-(BOOL)i_needsLayout;
-(CGRect)i_unscaledRectOfLayouts;
-(BOOL)shouldSuppressBackgrounds;
-(BOOL)supportsAdaptiveLayout;
-(TSPObjectContext *)objectContext;
-(CGSize)convertUnscaledToBoundsSize:(CGSize)arg1 ;
-(CGSize)convertBoundsToUnscaledSize:(CGSize)arg1 ;
-(void)i_registerRep:(id)arg1 ;
-(void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(CGImageRef)i_imageInScaledRect:(CGRect)arg1 withTargetIntegralSize:(CGSize)arg2 distortedToMatch:(BOOL)arg3 ;
-(void)i_clipsImagesToBounds:(BOOL)arg1 ;
-(CGImageRef)i_imageInScaledRect:(CGRect)arg1 ;
-(void)i_drawBackgroundInContext:(CGContextRef)arg1 ;
-(void)i_drawRepsInContext:(CGContextRef)arg1 ;
-(CGContextRef)i_createContextToDrawImageInScaledRect:(CGRect)arg1 withTargetIntegralSize:(CGSize)arg2 returningBounds:(CGRect*)arg3 integralBounds:(CGRect*)arg4 ;
-(CGImageRef)i_newImageInContext:(CGContextRef)arg1 bounds:(CGRect)arg2 integralBounds:(CGRect)arg3 distortedToMatch:(BOOL)arg4 ;
-(id)layoutGeometryProviderForLayout:(id)arg1 ;
-(id)initForTemporaryLayout;
-(BOOL)isDrawingIntoPDF;
-(CGRect)i_approximateScaledFrameOfEditingMenuAtPoint:(CGPoint)arg1 ;
-(BOOL)canvasIsWideGamut;
-(void)setPInTearDown:(BOOL)arg1 ;
-(void)p_removeAllReps;
-(BOOL)p_updateRepsFromLayouts;
-(BOOL)isTemporaryForLayout;
-(CGRect)p_bounds;
-(BOOL)p_expandHitRegionOfPoint:(CGPoint)arg1 forRep:(id)arg2 smallRepOutset:(double)arg3 forShortestDistance:(double*)arg4 ;
-(BOOL)p_shouldRep:(id)arg1 countAsClosestSmallRepForSizeLimit:(double)arg2 ;
-(void)i_drawBackgroundInContext:(CGContextRef)arg1 bounds:(CGRect)arg2 ;
-(void)i_drawRepsInContext:(CGContextRef)arg1 distort:(CGAffineTransform)arg2 ;
-(CGRect)i_clipRectForCreatingRepsFromLayouts;
-(void)i_setContentsScale:(double)arg1 ;
-(void)i_setCanvasIsWideGamut:(BOOL)arg1 ;
-(CGRect)visibleUnscaledRectForClippingReps;
-(CGImageRef)i_image;
-(BOOL)pInTearDown;
-(id)textRendererForLayer:(id)arg1 context:(CGContextRef)arg2 ;
@end

