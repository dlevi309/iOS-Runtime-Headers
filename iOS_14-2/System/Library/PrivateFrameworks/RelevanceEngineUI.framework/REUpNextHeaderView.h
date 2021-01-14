/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
*/

#import <RelevanceEngineUI/RelevanceEngineUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, NSAttributedString, UIColor;

@interface REUpNextHeaderView : UICollectionReusableView {

	UILabel* _label;
	NSAttributedString* _attributedText;

}

@property (nonatomic,copy) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,retain) UIColor * textColor; 
+(void)initialize;
-(NSAttributedString *)attributedText;
-(UIColor *)textColor;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)textAlignment;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
@end

