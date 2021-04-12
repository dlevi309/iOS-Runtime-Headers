/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <UIKit/UIPDFSelectionWidget.h>

@class UIPDFPageView, CAShapeLayer, CALayer;

@interface UIPDFParagraphWidget : NSObject <UIPDFSelectionWidget> {

	CAShapeLayer* _trackingBorder;
	CGRect _initialRect;
	BOOL _tracking;
	CGRect _currentTrackingRect;
	CALayer* _leftGrabber;
	CALayer* _rightGrabber;
	CALayer* _topGrabber;
	CALayer* _bottomGrabber;
	CALayer* _selectedGrabber;
	CGRect _boundsInPDFSpace;
	CGColorRef _grabberColor;
	UIPDFPageView* _pageView;
	CGPoint _initialSelectionPointOnPage;

}

@property (assign,nonatomic) UIPDFPageView * pageView;                           //@synthesize pageView=_pageView - In the implementation block
@property (nonatomic,readonly) CGPoint initialSelectionPointOnPage;              //@synthesize initialSelectionPointOnPage=_initialSelectionPointOnPage - In the implementation block
@property (nonatomic,readonly) CGPoint currentSelectionPointOnPage; 
-(id)init;
-(void)dealloc;
-(void)remove;
-(void)layout;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)hide;
-(void)setSelection:(id)arg1 ;
-(UIPDFPageView *)pageView;
-(void)setSelectedGrabberPosition:(CGRect)arg1 ;
-(CGRect)adjustRect:(CGRect)arg1 toPoint:(CGPoint)arg2 ;
-(CGRect)selectionBoundsInEffectsSpace;
-(BOOL)hitTest:(CGPoint)arg1 fixedPoint:(CGPoint*)arg2 preceeds:(BOOL*)arg3 ;
-(CGPoint)selectedPointFor:(CGPoint)arg1 ;
-(CGPoint)viewOffset;
-(void)track:(CGPoint)arg1 ;
-(void)endTracking;
-(CGRect)selectionRectangle;
-(void)setSelectedGrabber:(unsigned long long)arg1 ;
-(CGPoint)initialSelectionPointOnPage;
-(CGPoint)currentSelectionPointOnPage;
-(void)setPageView:(UIPDFPageView *)arg1 ;
@end

