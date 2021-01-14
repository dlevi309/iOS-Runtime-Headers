/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


@class AKPageModelController, UIColor, PKInk, UIFont, NSDictionary, AKController;

@interface AKAttributeController : NSObject {

	BOOL _strokeIsDashed;
	BOOL _hasShadow;
	AKPageModelController* modelControllerToObserveForSelections;
	UIColor* _strokeColor;
	UIColor* _fillColor;
	PKInk* _ink;
	double _strokeWidth;
	long long _brushStyle;
	unsigned long long _arrowHeadStyle;
	UIFont* _font;
	NSDictionary* _textAttributes;
	long long _highlightStyle;
	AKController* _controller;

}

@property (__weak) AKController * controller;                                                            //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) UIColor * strokeColor;                                                      //@synthesize strokeColor=_strokeColor - In the implementation block
@property (retain) UIColor * fillColor;                                                                  //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) PKInk * ink;                                                                //@synthesize ink=_ink - In the implementation block
@property (assign) double strokeWidth;                                                                   //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (assign) BOOL strokeIsDashed;                                                                  //@synthesize strokeIsDashed=_strokeIsDashed - In the implementation block
@property (assign) BOOL hasShadow;                                                                       //@synthesize hasShadow=_hasShadow - In the implementation block
@property (assign) long long brushStyle;                                                                 //@synthesize brushStyle=_brushStyle - In the implementation block
@property (assign) unsigned long long arrowHeadStyle;                                                    //@synthesize arrowHeadStyle=_arrowHeadStyle - In the implementation block
@property (retain) UIFont * font;                                                                        //@synthesize font=_font - In the implementation block
@property (retain) NSDictionary * textAttributes;                                                        //@synthesize textAttributes=_textAttributes - In the implementation block
@property (nonatomic,retain) AKPageModelController * modelControllerToObserveForSelections; 
@property (assign,nonatomic) long long highlightStyle;                                                   //@synthesize highlightStyle=_highlightStyle - In the implementation block
+(void)initialize;
+(id)defaultTextAttributes;
+(id)defaultFont;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(PKInk *)ink;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIColor *)fillColor;
-(void)setController:(AKController *)arg1 ;
-(NSDictionary *)textAttributes;
-(void)setHasShadow:(BOOL)arg1 ;
-(void)setTextAttributes:(NSDictionary *)arg1 ;
-(void)setInk:(PKInk *)arg1 ;
-(double)strokeWidth;
-(id)initWithController:(id)arg1 ;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(BOOL)hasShadow;
-(long long)highlightStyle;
-(AKController *)controller;
-(void)setHighlightStyle:(long long)arg1 ;
-(void)setStrokeWidth:(double)arg1 ;
-(UIFont *)font;
-(void)toggleRuler;
-(void)setArrowHeadStyle:(unsigned long long)arg1 ;
-(long long)brushStyle;
-(void)annotationEditingDidEndWithCompletion:(/*^block*/id)arg1 ;
-(void)forceHideRuler;
-(void)setDefaultInk;
-(unsigned long long)arrowHeadStyle;
-(void)_restorePersistedAttributes;
-(void)_syncAttributesFromSelectedAnnotationsToUI;
-(void)_updateInk;
-(void)_persistCurrentAttributes;
-(void)_syncAttributesFromSenderToSelfAndSelectedAnnotations:(id)arg1 segment:(long long)arg2 ;
-(AKPageModelController *)modelControllerToObserveForSelections;
-(BOOL)_isEnabledForSender:(id)arg1 segment:(long long)arg2 withSelectedAnnotations:(id)arg3 ;
-(void)_updateStateOnSender:(id)arg1 segment:(long long)arg2 ;
-(BOOL)strokeIsDashed;
-(void)setStrokeIsDashed:(BOOL)arg1 ;
-(void)setBrushStyle:(long long)arg1 ;
-(void)updateInkIfNeeded:(id)arg1 ;
-(void)syncFillColorOnSelectionToUI;
-(void)syncStrokeColorOnSelectionToUI;
-(BOOL)_updateStateOnSender:(id)arg1 segment:(long long)arg2 fromSelectedAnnotations:(id)arg3 ;
-(void)_updateStateOnSenderFromSelf:(id)arg1 segment:(long long)arg2 ;
-(void)_allAnnotations:(id)arg1 all:(BOOL*)arg2 atLeastOneShare:(BOOL*)arg3 attributeFromTag:(long long)arg4 ;
-(void)performAttributeActionForSender:(id)arg1 segment:(long long)arg2 ;
-(BOOL)isAttributeSenderEnabled:(id)arg1 segment:(long long)arg2 ;
-(void)updateAttributeSenderState:(id)arg1 segment:(long long)arg2 enabled:(BOOL)arg3 ;
-(BOOL)strokeColorIsEqualTo:(id)arg1 ;
-(void)restoreStrokeColorToSystemDefault;
-(void)setModelControllerToObserveForSelections:(AKPageModelController *)arg1 ;
-(void)resetToLastDrawingInk;
@end

