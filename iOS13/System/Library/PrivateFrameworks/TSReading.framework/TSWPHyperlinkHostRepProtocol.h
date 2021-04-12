/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSWPHyperlinkHostRepProtocol <NSObject>
@optional
-(id)hyperlinkFieldForEditingHyperlinkField:(id)arg1;
-(void)didDismissEditHyperlinkUIForHyperlinkField:(id)arg1;
-(BOOL)shouldUseHyperlinkHighlight;
-(BOOL)shouldDismissHyperlinkUIOnApplicationEnterBackground;

@required
-(id)smartFieldAtPoint:(CGPoint)arg1;
-(void)setHighlightedHyperlinkField:(id)arg1;
-(CGRect*)naturalBoundsRectForHyperlinkField:(id)arg1;
-(void)willDisplayEditHyperlinkUIForHyperlinkField:(id)arg1 beginEditing:(BOOL)arg2;
-(id)hyperlinkContainerRep;

@end

