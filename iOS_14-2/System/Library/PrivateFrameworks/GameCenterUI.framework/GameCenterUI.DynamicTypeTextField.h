/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UITextField.h>

@class UIFont;

@interface GameCenterUI.DynamicTypeTextField : UITextField {

	 fontUseCaseContentSizeCategory;
	 directionalTextAlignment;

}

@property (readonly,nonatomic) BOOL jet_isTextExtraTall; 
@property (readonly,nonatomic) UIEdgeInsets jet_languageAwareOutsets; 
@property (readonly,nonatomic) long long jet_textLength; 
@property (retain,nonatomic) UIFont * font; 
@property (assign,nonatomic) long long textAlignment; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(JUMeasurements)measurementsWithFitting:(CGSize)arg1 in:(id)arg2 ;
-(BOOL)jet_isTextExtraTall;
-(UIEdgeInsets)jet_languageAwareOutsets;
-(long long)jet_textLength;
-(long long)textAlignment;
-(id)initWithCoder:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIFont *)font;
@end

