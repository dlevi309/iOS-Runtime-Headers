/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIWebRotationDelegate
@optional
-(CGSize*)contentSizeForScrollView:(id)arg1;
-(double)scaleForProposedNewScale:(double)arg1 andOldScale:(double)arg2;

@required
-(double)zoomedDocumentScale;
-(id)enclosingScrollView;
-(double)currentDocumentScale;
-(SCD_Struct_UI54*)scalesForContainerSize:(CGSize)arg1;
-(double)minimumScaleForSize:(CGSize)arg1;
-(void)updateBoundariesOfScrollView:(id)arg1 withScales:(SCD_Struct_UI54)arg2;
-(CGRect*)rectOfInterestForRotation;
-(double)minimumVerticalContentOffset;
-(double)heightToKeepVisible;
-(CGRect*)activeRectForRectOfInterest:(CGRect)arg1;
-(BOOL)considerHeightOfRectOfInterestForRotation;
-(id)contentView;

@end

