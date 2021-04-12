/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextLinkInteraction.h>

@protocol TSDCanvasLayerHosting, UITextLinkInteraction;
@class TSDInteractiveCanvasController, TSKScrollView, TSDCanvasLayer;

@interface TSDCanvasView : UIView <UITextLinkInteraction> {

	TSDInteractiveCanvasController* mController;
	id<TSDCanvasLayerHosting> mLayerHost;
	id<UITextLinkInteraction> mHyperLinkDelegate;

}

@property (assign,nonatomic) TSDInteractiveCanvasController * controller; 
@property (assign,nonatomic) id<TSDCanvasLayerHosting> layerHost; 
@property (assign,nonatomic) id<UITextLinkInteraction> hyperLinkDelegate; 
@property (readonly) TSKScrollView * enclosingScrollView; 
@property (nonatomic,readonly) TSDCanvasLayer * canvasLayer; 
@property (nonatomic,readonly) TSDCanvasView * rootCanvasView; 
+(Class)layerClass;
-(BOOL)accessibilityElementsHidden;
-(id)sxaxNextSpeakThisElementFromElement:(id)arg1 ;
-(id)_speakThisElements;
-(BOOL)_isInPreviewPlatter;
-(void)teardown;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setController:(TSDInteractiveCanvasController *)arg1 ;
-(TSDInteractiveCanvasController *)controller;
-(void)cancelInteractionWithLink;
-(BOOL)mightHaveLinks;
-(void)tapLinkAtPoint:(CGPoint)arg1 ;
-(BOOL)isInteractingWithLink;
-(void)startInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)updateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)validateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)startLongInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(BOOL)willInteractWithLinkAtPoint:(CGPoint)arg1 ;
-(void)_requestTextItemConstrainedToLineAtPoint:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id<TSDCanvasLayerHosting>)layerHost;
-(TSKScrollView *)enclosingScrollView;
-(TSDCanvasLayer *)canvasLayer;
-(void)setLayerHost:(id<TSDCanvasLayerHosting>)arg1 ;
-(TSDCanvasView *)rootCanvasView;
-(id<UITextLinkInteraction>)hyperLinkDelegate;
-(void)setHyperLinkDelegate:(id<UITextLinkInteraction>)arg1 ;
@end

