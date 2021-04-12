/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class SiriUIPlatterSectionHeaderView, NSString;

@interface SiriUIPlatterSectionHeaderTableViewCell : UITableViewCell {

	SiriUIPlatterSectionHeaderView* _headerView;

}

@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long textAlignment; 
+(id)_font;
+(CGSize)sizeThatFits:(CGSize)arg1 text:(id)arg2 ;
-(id)initWithText:(id)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)setText:(NSString *)arg1 ;
-(void)prepareForReuse;
-(long long)textAlignment;
-(void)layoutSubviews;
-(NSString *)text;
-(void)setTextAlignment:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

