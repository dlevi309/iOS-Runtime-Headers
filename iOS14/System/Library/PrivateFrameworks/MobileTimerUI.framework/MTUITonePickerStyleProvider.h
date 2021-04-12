/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
*/

#import <MobileTimerUI/MobileTimerUI-Structs.h>
#import <libobjc.A.dylib/TKTonePickerStyleProvider.h>
#import <libobjc.A.dylib/TKVibrationPickerStyleProvider.h>

@class UIFont, UIColor, NSString;

@interface MTUITonePickerStyleProvider : NSObject <TKTonePickerStyleProvider, TKVibrationPickerStyleProvider>

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(UIFont *)tonePickerCellTextFont;
-(UIColor *)tonePickerCellTextColor;
-(id)newBackgroundViewForSelectedTonePickerCell:(BOOL)arg1 ;
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
-(UIColor *)vibrationPickerCustomBackgroundColor;
-(BOOL)vibrationPickerUsesOpaqueBackground;
-(id)newBackgroundViewForSelectedVibrationPickerCell:(BOOL)arg1 ;
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

