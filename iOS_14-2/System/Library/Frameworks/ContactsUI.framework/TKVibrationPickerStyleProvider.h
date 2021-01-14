/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

@class UIFont, UIColor;


@protocol TKVibrationPickerStyleProvider <NSObject>
@property (nonatomic,readonly) BOOL vibrationPickerUsesOpaqueBackground; 
@property (nonatomic,readonly) long long vibrationPickerTableViewSeparatorStyle; 
@property (nonatomic,readonly) UIFont * vibrationPickerCellTextFont; 
@property (nonatomic,readonly) UIColor * vibrationPickerCellTextColor; 
@property (nonatomic,readonly) UIColor * vibrationPickerCellHighlightedTextColor; 
@property (nonatomic,readonly) UIColor * vibrationPickerCellBackgroundColor; 
@property (nonatomic,readonly) BOOL wantsCustomVibrationPickerHeaderView; 
@property (nonatomic,readonly) UIFont * vibrationPickerHeaderTextFont; 
@property (nonatomic,readonly) UIColor * vibrationPickerHeaderTextColor; 
@property (nonatomic,readonly) UIColor * vibrationPickerHeaderTextShadowColor; 
@property (nonatomic,readonly) UIOffset vibrationPickerHeaderTextShadowOffset; 
@property (nonatomic,readonly) UIEdgeInsets vibrationPickerHeaderTextPaddingInsets; 
@property (nonatomic,readonly) UIColor * vibrationPickerCustomBackgroundColor; 
@property (nonatomic,readonly) UIColor * vibrationPickerCustomTableSeparatorColor; 
@property (nonatomic,readonly) long long vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode; 
@property (nonatomic,readonly) BOOL vibrationPickerHeaderTextShouldBeUppercase; 
@optional
-(UIColor *)vibrationPickerCustomBackgroundColor;
-(UIColor *)vibrationPickerCustomTableSeparatorColor;
-(long long)vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode;
-(BOOL)vibrationPickerHeaderTextShouldBeUppercase;

@required
-(BOOL)vibrationPickerUsesOpaqueBackground;
-(id)newBackgroundViewForSelectedVibrationPickerCell:(BOOL)arg1;
-(UIFont *)vibrationPickerCellTextFont;
-(id)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
-(long long)vibrationPickerTableViewSeparatorStyle;
-(UIColor *)vibrationPickerCellTextColor;
-(UIColor *)vibrationPickerCellHighlightedTextColor;
-(UIColor *)vibrationPickerCellBackgroundColor;
-(BOOL)wantsCustomVibrationPickerHeaderView;
-(UIFont *)vibrationPickerHeaderTextFont;
-(UIColor *)vibrationPickerHeaderTextColor;
-(UIColor *)vibrationPickerHeaderTextShadowColor;
-(UIOffset)vibrationPickerHeaderTextShadowOffset;
-(UIEdgeInsets)vibrationPickerHeaderTextPaddingInsets;

@end

