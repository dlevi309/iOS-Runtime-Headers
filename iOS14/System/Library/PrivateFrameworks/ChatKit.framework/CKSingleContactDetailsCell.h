/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKDetailsCell.h>
#import <libobjc.A.dylib/CKDetailsCell.h>

@class UILabel, UIImageView, NSString;

@interface CKSingleContactDetailsCell : CKDetailsCell <CKDetailsCell> {

	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	UIImageView* _chervonImageView;

}

@property (nonatomic,retain) UILabel * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subTitleLabel;                     //@synthesize subTitleLabel=_subTitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * chervonImageView;              //@synthesize chervonImageView=_chervonImageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldHighlight;
+(id)reuseIdentifier;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)subTitleLabel;
-(void)initConstraints;
-(void)setSubTitleLabel:(UILabel *)arg1 ;
-(void)setChervonImageView:(UIImageView *)arg1 ;
-(UIImageView *)chervonImageView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

