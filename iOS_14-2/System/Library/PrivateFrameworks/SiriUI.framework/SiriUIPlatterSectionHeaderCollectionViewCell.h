/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class SiriUIPlatterSectionHeaderView, NSString;

@interface SiriUIPlatterSectionHeaderCollectionViewCell : SiriUIContentCollectionViewCell {

	SiriUIPlatterSectionHeaderView* _headerView;

}

@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long textAlignment; 
+(CGSize)sizeThatFits:(CGSize)arg1 text:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)prepareForReuse;
-(long long)textAlignment;
-(void)layoutSubviews;
-(NSString *)text;
-(void)setTextAlignment:(long long)arg1 ;
@end

