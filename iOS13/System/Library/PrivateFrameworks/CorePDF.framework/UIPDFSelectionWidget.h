/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

@class UIPDFPageView;


@protocol UIPDFSelectionWidget
@property (nonatomic,readonly) CGPoint initialSelectionPointOnPage; 
@property (nonatomic,readonly) CGPoint currentSelectionPointOnPage; 
@property (assign,nonatomic) UIPDFPageView * pageView; 
@required
-(void)remove;
-(void)layout;
-(void)hide;
-(void)setSelection:(id)arg1;
-(UIPDFPageView *)pageView;
-(BOOL)hitTest:(CGPoint)arg1 fixedPoint:(CGPoint*)arg2 preceeds:(BOOL*)arg3;
-(CGPoint*)selectedPointFor:(CGPoint)arg1;
-(CGPoint*)viewOffset;
-(void)track:(CGPoint)arg1;
-(void)endTracking;
-(CGRect*)selectionRectangle;
-(void)setSelectedGrabber:(unsigned long long)arg1;
-(CGPoint)initialSelectionPointOnPage;
-(CGPoint)currentSelectionPointOnPage;
-(void)setPageView:(id)arg1;

@end

