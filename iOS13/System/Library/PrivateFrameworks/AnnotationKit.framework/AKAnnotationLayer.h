/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class AKAnnotation, AKPageController, CALayer;

@interface AKAnnotationLayer : CALayer {

	BOOL _isObservingAnnotation;
	BOOL _wasLastDrawingClipped;
	BOOL _lastRedrawWasForDrawingBounds;
	BOOL _shouldRecalculateLoupeImage;
	AKAnnotation* _annotation;
	AKPageController* _pageController;
	CALayer* _fastPathLayer;

}

@property (retain) AKAnnotation * annotation;                       //@synthesize annotation=_annotation - In the implementation block
@property (__weak) AKPageController * pageController;               //@synthesize pageController=_pageController - In the implementation block
@property (nonatomic,retain) CALayer * fastPathLayer;               //@synthesize fastPathLayer=_fastPathLayer - In the implementation block
@property (assign) BOOL isObservingAnnotation;                      //@synthesize isObservingAnnotation=_isObservingAnnotation - In the implementation block
@property (assign) BOOL wasLastDrawingClipped;                      //@synthesize wasLastDrawingClipped=_wasLastDrawingClipped - In the implementation block
@property (assign) BOOL lastRedrawWasForDrawingBounds;              //@synthesize lastRedrawWasForDrawingBounds=_lastRedrawWasForDrawingBounds - In the implementation block
@property (assign) BOOL shouldRecalculateLoupeImage;                //@synthesize shouldRecalculateLoupeImage=_shouldRecalculateLoupeImage - In the implementation block
+(id)newAnnotationLayerForAnnotation:(id)arg1 withPageController:(id)arg2 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(AKPageController *)pageController;
-(void)setPageController:(AKPageController *)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(AKAnnotation *)annotation;
-(id)actionForKey:(id)arg1 ;
-(void)setAnnotation:(AKAnnotation *)arg1 ;
-(void)_stopObservingAnnotation;
-(void)_startObservingAnnotation;
-(void)updateContents;
-(id)_initWithAnnotation:(id)arg1 andPageController:(id)arg2 ;
-(void)setShouldRecalculateLoupeImage:(BOOL)arg1 ;
-(void)_updateAnnotationLayerWithLoupeFastPath:(BOOL)arg1 ;
-(void)_addDebugVisuals;
-(void)_removeDebugVisuals;
-(BOOL)lastRedrawWasForDrawingBounds;
-(void)setLastRedrawWasForDrawingBounds:(BOOL)arg1 ;
-(BOOL)wasLastDrawingClipped;
-(void)setWasLastDrawingClipped:(BOOL)arg1 ;
-(CALayer *)fastPathLayer;
-(void)setFastPathLayer:(CALayer *)arg1 ;
-(BOOL)shouldRecalculateLoupeImage;
-(BOOL)isObservingAnnotation;
-(void)setIsObservingAnnotation:(BOOL)arg1 ;
-(void)updatePixelAlignment;
@end

