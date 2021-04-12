/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <ContactsAutocompleteUI/CNComposeTableViewCell.h>

@class UIImageView, UIView;

@interface CNAutocompleteDisambiguatingTableViewCell : CNComposeTableViewCell {

	BOOL _checkmarkVisible;
	UIImageView* _checkmarkImageView;

}

@property (retain) UIImageView * checkmarkImageView;                                       //@synthesize checkmarkImageView=_checkmarkImageView - In the implementation block
@property (assign,getter=isCheckmarkVisible,nonatomic) BOOL checkmarkVisible;              //@synthesize checkmarkVisible=_checkmarkVisible - In the implementation block
@property (readonly) UIView * checkmarkView; 
+(id)identifier;
+(id)createCheckmarkView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setRecipient:(id)arg1 ;
-(void)setCheckmarkImageView:(UIImageView *)arg1 ;
-(UIImageView *)checkmarkImageView;
-(UIView *)checkmarkView;
-(void)setCheckmarkVisible:(BOOL)arg1 ;
-(id)titleTextStyle;
-(BOOL)isCheckmarkVisible;
@end

