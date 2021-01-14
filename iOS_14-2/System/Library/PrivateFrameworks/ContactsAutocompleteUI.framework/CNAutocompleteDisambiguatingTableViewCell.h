/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)createCheckmarkView;
+(id)identifier;
-(void)setRecipient:(id)arg1 ;
-(UIView *)checkmarkView;
-(BOOL)canCollapseRecipient;
-(void)setCheckmarkVisible:(BOOL)arg1 ;
-(void)setCheckmarkImageView:(UIImageView *)arg1 ;
-(UIImageView *)checkmarkImageView;
-(BOOL)isCheckmarkVisible;
-(id)titleTextStyle;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

