/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthUI.framework/SleepHealthUI
*/

@class UIFont, UIColor;


@protocol TKTonePickerStyleProvider <NSObject>
@property (nonatomic,readonly) BOOL tonePickerUsesOpaqueBackground; 
@property (nonatomic,readonly) long long tonePickerTableViewSeparatorStyle; 
@property (nonatomic,readonly) UIFont * tonePickerCellTextFont; 
@property (nonatomic,readonly) UIColor * tonePickerCellTextColor; 
@property (nonatomic,readonly) UIColor * tonePickerCellHighlightedTextColor; 
@property (nonatomic,readonly) UIColor * tonePickerCellBackgroundColor; 
@property (nonatomic,readonly) BOOL wantsCustomTonePickerHeaderView; 
@property (nonatomic,readonly) UIFont * tonePickerHeaderTextFont; 
@property (nonatomic,readonly) UIColor * tonePickerHeaderTextColor; 
@property (nonatomic,readonly) UIColor * tonePickerHeaderTextShadowColor; 
@property (nonatomic,readonly) UIOffset tonePickerHeaderTextShadowOffset; 
@property (nonatomic,readonly) UIEdgeInsets tonePickerHeaderTextPaddingInsets; 
@property (nonatomic,readonly) UIColor * tonePickerCustomTableSeparatorColor; 
@property (nonatomic,readonly) long long tonePickerCustomTableSeparatorBackdropOverlayBlendMode; 
@property (nonatomic,readonly) BOOL tonePickerHeaderTextShouldBeUppercase; 
@optional
-(UIColor *)tonePickerCustomTableSeparatorColor;
-(long long)tonePickerCustomTableSeparatorBackdropOverlayBlendMode;
-(BOOL)tonePickerHeaderTextShouldBeUppercase;

@required
-(UIFont *)tonePickerCellTextFont;
-(UIColor *)tonePickerCellTextColor;
-(id)newBackgroundViewForSelectedTonePickerCell:(BOOL)arg1;
-(id)newAccessoryDisclosureIndicatorViewForTonePickerCell;
-(BOOL)tonePickerUsesOpaqueBackground;
-(long long)tonePickerTableViewSeparatorStyle;
-(UIColor *)tonePickerCellHighlightedTextColor;
-(UIColor *)tonePickerCellBackgroundColor;
-(BOOL)wantsCustomTonePickerHeaderView;
-(UIFont *)tonePickerHeaderTextFont;
-(UIColor *)tonePickerHeaderTextColor;
-(UIColor *)tonePickerHeaderTextShadowColor;
-(UIOffset)tonePickerHeaderTextShadowOffset;
-(UIEdgeInsets)tonePickerHeaderTextPaddingInsets;

@end

