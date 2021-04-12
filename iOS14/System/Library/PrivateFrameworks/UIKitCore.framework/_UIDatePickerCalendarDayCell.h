/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@class UIPointerInteraction, NSString;

@interface _UIDatePickerCalendarDayCell : UICollectionViewCell <UIPointerInteractionDelegate> {

	UIPointerInteraction* _pointerInteraction;
	SCD_Struct_UI62 _flags;
	NSString* _text;
	NSString* _fontDesign;
	CGSize _lastKnownSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fontForTraitCollection:(id)arg1 fontDesign:(id)arg2 ;
+(id)emphasizedFontForTraitCollection:(id)arg1 fontDesign:(id)arg2 ;
+(id)reuseIdentifier;
-(void)tintColorDidChange;
-(void)configureWithDay:(id)arg1 formatter:(id)arg2 fontDesign:(id)arg3 outOfRange:(BOOL)arg4 renderOverhangDays:(BOOL)arg5 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)_wantsRoundedSquare;
-(id)configurationState;
-(void)updateConfigurationUsingState:(id)arg1 ;
@end

