/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
*/

#import <ClipUIServices/ClipUIServices-Structs.h>
#import <UIKitCore/UIVisualEffectView.h>
#import <UIKit/UIContentSizeCategoryAdjusting.h>

@class UILabel, NSString;

@interface CPSVibrantLabel : UIVisualEffectView <UIContentSizeCategoryAdjusting> {

	UILabel* _label;

}

@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(long long)lineBreakMode;
-(BOOL)adjustsFontForContentSizeCategory;
-(id)viewForLastBaselineLayout;
-(void)setLineBreakMode:(long long)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)setNumberOfLines:(long long)arg1 ;
-(BOOL)isUserInteractionEnabled;
-(BOOL)adjustsFontSizeToFitWidth;
-(void)setText:(NSString *)arg1 ;
-(long long)textAlignment;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(long long)numberOfLines;
-(id)initWithTextStyle:(id)arg1 textVariant:(long long)arg2 vibrancyEffectStyle:(long long)arg3 ;
@end

