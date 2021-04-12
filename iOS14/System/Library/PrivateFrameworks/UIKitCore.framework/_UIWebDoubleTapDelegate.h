/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIWebDoubleTapDelegate
@optional
-(void)willZoomToMinimumScale;
-(BOOL)shouldSelectionAssistantReceiveDoubleTapAtPoint:(CGPoint)arg1 forScale:(double)arg2;
-(void)willZoomToLocation:(CGPoint)arg1 atScale:(double)arg2 forDuration:(double)arg3;

@required
-(double)zoomedDocumentScale;
-(BOOL)considerHeightForDoubleTap;
-(id)enclosingScrollView;
-(double)currentDocumentScale;
-(double)minimumScaleForSize:(CGSize)arg1;
-(CGRect*)visibleContentRect;
-(CGRect*)rectOfInterestForPoint:(CGPoint)arg1;
-(SCD_Struct_UI54*)doubleTapScalesForSize:(CGSize)arg1;
-(id)contentView;

@end

