/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthUI.framework/SleepHealthUI
*/

#import <SleepHealthUI/SleepHealthUI-Structs.h>
#import <libobjc.A.dylib/TKTonePickerStyleProvider.h>
#import <libobjc.A.dylib/TKVibrationPickerStyleProvider.h>

@class UIFont, UIColor;

@interface HKSHTonePickerStyleProvider : NSObject <TKTonePickerStyleProvider, TKVibrationPickerStyleProvider>

@property (readonly,nonatomic) BOOL tonePickerUsesOpaqueBackground; 
@property (readonly,nonatomic) long long tonePickerTableViewSeparatorStyle; 
@property (readonly,nonatomic) UIFont * tonePickerCellTextFont; 
@property (readonly,nonatomic) UIColor * tonePickerCellTextColor; 
@property (readonly,nonatomic) UIColor * tonePickerCellHighlightedTextColor; 
@property (readonly,nonatomic) UIColor * tonePickerCellBackgroundColor; 
@property (readonly,nonatomic) BOOL wantsCustomTonePickerHeaderView; 
@property (readonly,nonatomic) UIFont * tonePickerHeaderTextFont; 
@property (readonly,nonatomic) UIColor * tonePickerHeaderTextColor; 
@property (readonly,nonatomic) UIColor * tonePickerHeaderTextShadowColor; 
@property (readonly,nonatomic) UIOffset tonePickerHeaderTextShadowOffset; 
@property (readonly,nonatomic) UIEdgeInsets tonePickerHeaderTextPaddingInsets; 
@property (readonly,nonatomic) BOOL vibrationPickerUsesOpaqueBackground; 
@property (readonly,nonatomic) long long vibrationPickerTableViewSeparatorStyle; 
@property (readonly,nonatomic) UIFont * vibrationPickerCellTextFont; 
@property (readonly,nonatomic) UIColor * vibrationPickerCellTextColor; 
@property (readonly,nonatomic) UIColor * vibrationPickerCellHighlightedTextColor; 
@property (readonly,nonatomic) UIColor * vibrationPickerCellBackgroundColor; 
@property (readonly,nonatomic) BOOL wantsCustomVibrationPickerHeaderView; 
@property (readonly,nonatomic) UIFont * vibrationPickerHeaderTextFont; 
@property (readonly,nonatomic) UIColor * vibrationPickerHeaderTextColor; 
@property (readonly,nonatomic) UIColor * vibrationPickerHeaderTextShadowColor; 
@property (readonly,nonatomic) UIOffset vibrationPickerHeaderTextShadowOffset; 
@property (readonly,nonatomic) UIEdgeInsets vibrationPickerHeaderTextPaddingInsets; 
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
-(id)init;
@end

