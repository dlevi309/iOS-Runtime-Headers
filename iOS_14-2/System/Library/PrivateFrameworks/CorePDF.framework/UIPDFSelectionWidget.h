/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

@class UIPDFPageView;


@protocol UIPDFSelectionWidget
@property (nonatomic,readonly) CGPoint initialSelectionPointOnPage; 
@property (nonatomic,readonly) CGPoint currentSelectionPointOnPage; 
@property (assign,nonatomic) UIPDFPageView * pageView; 
@required
-(void)remove;
-(void)setSelection:(id)arg1;
-(UIPDFPageView *)pageView;
-(void)track:(CGPoint)arg1;
-(void)hide;
-(void)layout;
-(BOOL)hitTest:(CGPoint)arg1 fixedPoint:(CGPoint*)arg2 preceeds:(BOOL*)arg3;
-(CGPoint*)selectedPointFor:(CGPoint)arg1;
-(CGPoint*)viewOffset;
-(void)endTracking;
-(CGRect*)selectionRectangle;
-(void)setSelectedGrabber:(unsigned long long)arg1;
-(CGPoint)initialSelectionPointOnPage;
-(CGPoint)currentSelectionPointOnPage;
-(void)setPageView:(id)arg1;

@end

