/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIWebRotationDelegate
@optional
-(double)scaleForProposedNewScale:(double)arg1 andOldScale:(double)arg2;
-(CGSize*)contentSizeForScrollView:(id)arg1;

@required
-(id)contentView;
-(double)zoomedDocumentScale;
-(id)enclosingScrollView;
-(double)currentDocumentScale;
-(SCD_Struct_UI48*)scalesForContainerSize:(CGSize)arg1;
-(void)updateBoundariesOfScrollView:(id)arg1 withScales:(SCD_Struct_UI48)arg2;
-(double)minimumScaleForSize:(CGSize)arg1;
-(CGRect*)rectOfInterestForRotation;
-(double)minimumVerticalContentOffset;
-(double)heightToKeepVisible;
-(CGRect*)activeRectForRectOfInterest:(CGRect)arg1;
-(BOOL)considerHeightOfRectOfInterestForRotation;

@end

