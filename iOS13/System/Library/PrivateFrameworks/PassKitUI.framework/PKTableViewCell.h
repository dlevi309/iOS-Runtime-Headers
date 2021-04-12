/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)minimumHeight;
-(void)setMinimumHeight:(double)arg1 ;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(id)_checkmarkImage:(BOOL)arg1 ;
-(id)_disclosureChevronImage:(BOOL)arg1 ;
-(void)pk_applyAppearance:(id)arg1 ;
-(UIColor *)customAccessoryColor;
-(void)setShowsActionSpinner:(BOOL)arg1 ;
-(BOOL)showsActionSpinner;
-(void)setCheckmarkAccessoryColor:(UIColor *)arg1 ;
-(void)setCustomAccessoryColor:(UIColor *)arg1 ;
-(UIColor *)checkmarkAccessoryColor;
@end

