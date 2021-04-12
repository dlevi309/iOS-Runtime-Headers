/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CHVisualizationManagerDelegate.h>

@class CHVisualizationManager, NSString;

@interface PKRecognitionOverlayView : UIView <CHVisualizationManagerDelegate> {

	CHVisualizationManager* _visualizationManager;
	CGAffineTransform _drawingTransform;

}

@property (assign,nonatomic) CGAffineTransform drawingTransform;                           //@synthesize drawingTransform=_drawingTransform - In the implementation block
@property (nonatomic,readonly) CHVisualizationManager * visualizationManager;              //@synthesize visualizationManager=_visualizationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(CHVisualizationManager *)visualizationManager;
-(CGAffineTransform)drawingTransform;
-(void)visualizationManager:(id)arg1 needsDisplayInRect:(CGRect)arg2 ;
-(void)visualizationManagerNeedsDisplay:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 visualizationManager:(id)arg2 ;
-(void)setDrawingTransform:(CGAffineTransform)arg1 ;
@end

