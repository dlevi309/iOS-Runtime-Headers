/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInterfaceActionVisualStyle.h>

@class UIInterfaceActionSeparatorAttributes, UIInterfaceActionHighlightAttributes;

@interface UIInterfaceActionOverrideVisualStyle : UIInterfaceActionVisualStyle {

	BOOL _alignActionSeparatorLeadingEdgeWithContent;
	double _customSelectionHighlightContinuousCornerRadius;
	UIInterfaceActionSeparatorAttributes* _customSeparatorAttributes;
	UIInterfaceActionHighlightAttributes* _customActionHighlightAttributes;
	/*^block*/id _customTitleLabelFontProviderForViewState;

}

@property (assign) double customSelectionHighlightContinuousCornerRadius;                                         //@synthesize customSelectionHighlightContinuousCornerRadius=_customSelectionHighlightContinuousCornerRadius - In the implementation block
@property (assign,nonatomic) BOOL alignActionSeparatorLeadingEdgeWithContent;                                     //@synthesize alignActionSeparatorLeadingEdgeWithContent=_alignActionSeparatorLeadingEdgeWithContent - In the implementation block
@property (nonatomic,retain) UIInterfaceActionSeparatorAttributes * customSeparatorAttributes;                    //@synthesize customSeparatorAttributes=_customSeparatorAttributes - In the implementation block
@property (nonatomic,retain) UIInterfaceActionHighlightAttributes * customActionHighlightAttributes;              //@synthesize customActionHighlightAttributes=_customActionHighlightAttributes - In the implementation block
@property (nonatomic,copy) id customTitleLabelFontProviderForViewState;                                           //@synthesize customTitleLabelFontProviderForViewState=_customTitleLabelFontProviderForViewState - In the implementation block
+(id)styleOverride;
-(void)setCustomTitleLabelFontProviderForViewState:(id)arg1 ;
-(UIInterfaceActionSeparatorAttributes *)customSeparatorAttributes;
-(id)newActionSeparatorViewForGroupViewState:(id)arg1 ;
-(UIInterfaceActionHighlightAttributes *)customActionHighlightAttributes;
-(void)setAlignActionSeparatorLeadingEdgeWithContent:(BOOL)arg1 ;
-(id)newActionBackgroundViewForViewState:(id)arg1 ;
-(BOOL)alignActionSeparatorLeadingEdgeWithContent;
-(void)setCustomSeparatorAttributes:(UIInterfaceActionSeparatorAttributes *)arg1 ;
-(void)setCustomActionHighlightAttributes:(UIInterfaceActionHighlightAttributes *)arg1 ;
-(id)actionTitleLabelFontForViewState:(id)arg1 ;
-(void)setCustomSelectionHighlightContinuousCornerRadius:(double)arg1 ;
-(double)customSelectionHighlightContinuousCornerRadius;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)customTitleLabelFontProviderForViewState;
-(BOOL)isEqual:(id)arg1 ;
@end

