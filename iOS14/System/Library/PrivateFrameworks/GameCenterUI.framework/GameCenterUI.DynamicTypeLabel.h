/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UILabel.h>

@class UIFont, NSAttributedString;

@interface GameCenterUI.DynamicTypeLabel : UILabel {

	 fontUseCaseContentSizeCategory;
	 systemDesign;
	 wantsFastBaselineMeasurement;
	 directionalTextAlignment;

}

@property (retain,nonatomic) UIFont * font; 
@property (assign,nonatomic) long long textAlignment; 
@property (retain,nonatomic) NSAttributedString * attributedText; 
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(long long)textAlignment;
-(id)initWithCoder:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIFont *)font;
@end

