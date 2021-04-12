/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)prepareForReuse;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)layoutSubviews;
-(long long)textAlignment;
@end

