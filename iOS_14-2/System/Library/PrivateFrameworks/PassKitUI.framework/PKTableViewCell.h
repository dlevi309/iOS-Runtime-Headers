/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIColor;

@interface PKTableViewCell : UITableViewCell {

	BOOL _showsActionSpinner;
	UIColor* _highlightColor;
	UIColor* _checkmarkAccessoryColor;
	UIColor* _customAccessoryColor;
	double _minimumHeight;

}

@property (nonatomic,copy) UIColor * highlightColor;                       //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,copy) UIColor * checkmarkAccessoryColor;              //@synthesize checkmarkAccessoryColor=_checkmarkAccessoryColor - In the implementation block
@property (nonatomic,copy) UIColor * customAccessoryColor;                 //@synthesize customAccessoryColor=_customAccessoryColor - In the implementation block
@property (assign,nonatomic) BOOL showsActionSpinner;                      //@synthesize showsActionSpinner=_showsActionSpinner - In the implementation block
@property (assign,nonatomic) double minimumHeight;                         //@synthesize minimumHeight=_minimumHeight - In the implementation block
-(UIColor *)customAccessoryColor;
-(double)minimumHeight;
-(id)_checkmarkImage:(BOOL)arg1 ;
-(void)setMinimumHeight:(double)arg1 ;
-(id)_disclosureChevronImage:(BOOL)arg1 ;
-(void)setShowsActionSpinner:(BOOL)arg1 ;
-(BOOL)showsActionSpinner;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)checkmarkAccessoryColor;
-(void)pk_applyAppearance:(id)arg1 ;
-(void)setCheckmarkAccessoryColor:(UIColor *)arg1 ;
-(void)setCustomAccessoryColor:(UIColor *)arg1 ;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(UIColor *)highlightColor;
@end

