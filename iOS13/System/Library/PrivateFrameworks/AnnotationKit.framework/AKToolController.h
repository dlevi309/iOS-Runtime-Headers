/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@class AKController;

@interface AKToolController : NSObject {

	BOOL _allInkEnabled;
	BOOL _pencilInkEnabled;
	unsigned long long _toolMode;
	AKController* _controller;

}

@property (__weak) AKController * controller;                     //@synthesize controller=_controller - In the implementation block
@property (assign) BOOL allInkEnabled;                            //@synthesize allInkEnabled=_allInkEnabled - In the implementation block
@property (assign) BOOL pencilInkEnabled;                         //@synthesize pencilInkEnabled=_pencilInkEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isInDefaultMode; 
@property (assign) unsigned long long toolMode;                   //@synthesize toolMode=_toolMode - In the implementation block
+(void)cascadeAnnotations:(id)arg1 onPageController:(id)arg2 forPaste:(BOOL)arg3 ;
-(void)dealloc;
-(void)setController:(AKController *)arg1 ;
-(AKController *)controller;
-(id)initWithController:(id)arg1 ;
-(unsigned long long)toolMode;
-(void)resetToDefaultMode;
-(void)addNewAnnotation:(id)arg1 onPageController:(id)arg2 shouldSelect:(BOOL)arg3 shouldCascade:(BOOL)arg4 ;
-(id)createAnnotationOfType:(long long)arg1 centeredAtPoint:(CGPoint)arg2 ;
-(void)_peripheralAvailabilityDidUpdate:(id)arg1 ;
-(BOOL)allInkEnabled;
-(BOOL)pencilInkEnabled;
-(void)setToolMode:(unsigned long long)arg1 ;
-(void)performToolActionForSender:(id)arg1 ;
-(BOOL)isToolSenderEnabled:(id)arg1 ;
-(void)updateToolSenderState:(id)arg1 enabled:(BOOL)arg2 ;
-(CGPoint)_defaultCenterForNewAnnotation;
-(double)_modelBaseScaleFactorForNewAnnotation;
-(id)_defaultFillColorForAnnotationOfClass:(Class)arg1 ;
-(double)_strokeWidthForNewAnnotation;
-(id)_strokeColorForNewAnnotation;
-(CGRect)_defaultRectangleForNewAnnotation:(id)arg1 centeredAtPoint:(CGPoint)arg2 ;
-(id)_defaultTypingAttributes;
-(unsigned long long)_arrowStyleForToolTag:(long long)arg1 ;
-(id)_defaultTextBoxTypingAttributes;
-(id)_defaultHeartTypingAttributesWithFillColor:(id)arg1 ;
-(void)_setRectangleToFitTextOnTextAnnotation:(id)arg1 ;
-(void)setAllInkEnabled:(BOOL)arg1 ;
-(void)setPencilInkEnabled:(BOOL)arg1 ;
-(unsigned long long)defaultToolMode;
-(BOOL)isInDefaultMode;
-(CGRect)_validatedRect:(CGRect)arg1 fitsInVisibleRegionOfOverlayView:(id)arg2 ownedByPageController:(id)arg3 centeredAtPoint:(CGPoint)arg4 ;
-(CGRect)_centerBounds:(CGRect)arg1 atPoint:(CGPoint)arg2 ;
@end

