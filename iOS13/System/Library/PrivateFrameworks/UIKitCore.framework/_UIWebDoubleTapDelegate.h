/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIWebDoubleTapDelegate
@optional
-(void)willZoomToMinimumScale;
-(BOOL)shouldSelectionAssistantReceiveDoubleTapAtPoint:(CGPoint)arg1 forScale:(double)arg2;
-(void)willZoomToLocation:(CGPoint)arg1 atScale:(double)arg2 forDuration:(double)arg3;

@required
-(id)contentView;
-(double)zoomedDocumentScale;
-(BOOL)considerHeightForDoubleTap;
-(id)enclosingScrollView;
-(double)currentDocumentScale;
-(double)minimumScaleForSize:(CGSize)arg1;
-(CGRect*)visibleContentRect;
-(CGRect*)rectOfInterestForPoint:(CGPoint)arg1;
-(SCD_Struct_UI48*)doubleTapScalesForSize:(CGSize)arg1;

@end

