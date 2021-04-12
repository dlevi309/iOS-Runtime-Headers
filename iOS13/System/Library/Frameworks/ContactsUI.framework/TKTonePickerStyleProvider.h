/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
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
-(id)newBackgroundViewForSelectedTonePickerCell:(BOOL)arg1;
-(id)newAccessoryDisclosureIndicatorViewForTonePickerCell;
-(BOOL)tonePickerUsesOpaqueBackground;
-(long long)tonePickerTableViewSeparatorStyle;
-(UIFont *)tonePickerCellTextFont;
-(UIColor *)tonePickerCellTextColor;
-(UIColor *)tonePickerCellHighlightedTextColor;
-(UIColor *)tonePickerCellBackgroundColor;
-(BOOL)wantsCustomTonePickerHeaderView;
-(UIFont *)tonePickerHeaderTextFont;
-(UIColor *)tonePickerHeaderTextColor;
-(UIColor *)tonePickerHeaderTextShadowColor;
-(UIOffset)tonePickerHeaderTextShadowOffset;
-(UIEdgeInsets)tonePickerHeaderTextPaddingInsets;

@end

