/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)remove;
-(id)init;
-(void)setSelection:(id)arg1 ;
-(UIPDFPageView *)pageView;
-(void)track:(CGPoint)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)hide;
-(void)dealloc;
-(void)layout;
-(void)setSelectedGrabberPosition:(CGRect)arg1 ;
-(CGRect)adjustRect:(CGRect)arg1 toPoint:(CGPoint)arg2 ;
-(CGRect)selectionBoundsInEffectsSpace;
-(BOOL)hitTest:(CGPoint)arg1 fixedPoint:(CGPoint*)arg2 preceeds:(BOOL*)arg3 ;
-(CGPoint)selectedPointFor:(CGPoint)arg1 ;
-(CGPoint)viewOffset;
-(void)endTracking;
-(CGRect)selectionRectangle;
-(void)setSelectedGrabber:(unsigned long long)arg1 ;
-(CGPoint)initialSelectionPointOnPage;
-(CGPoint)currentSelectionPointOnPage;
-(void)setPageView:(UIPDFPageView *)arg1 ;
@end

