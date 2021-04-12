/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol PKPalettePencilInteractionFeedbackHostViewDelegate <NSObject>
@required
-(id)paletteView;
-(CGSize*)regularPaletteSize;
-(CGSize*)minimizedPaletteSize;
-(double)paletteEdgeSpacing;
-(double)paletteEdgeSpacingForMinimized;
-(double)minimizedPaletteScaleFactor;
-(id)paletteShadowColor;
-(CGSize*)paletteShadowOffset;
-(double)paletteShadowOpacity;
-(double)paletteShadowRadius;
-(id)paletteBorderColor;
-(double)paletteBorderWidth;
-(double)paletteSpringAnimationDampingRatio;
-(double)paletteSpringAnimationResponse;

@end

