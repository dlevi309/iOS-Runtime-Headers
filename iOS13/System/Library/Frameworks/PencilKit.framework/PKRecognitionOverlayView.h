/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGAffineTransform)drawingTransform;
-(CHVisualizationManager *)visualizationManager;
-(void)visualizationManager:(id)arg1 needsDisplayInRect:(CGRect)arg2 ;
-(void)visualizationManagerNeedsDisplay:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 visualizationManager:(id)arg2 ;
-(void)setDrawingTransform:(CGAffineTransform)arg1 ;
@end

