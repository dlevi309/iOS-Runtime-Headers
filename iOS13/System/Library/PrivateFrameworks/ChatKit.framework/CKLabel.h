/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UILabel.h>

@class UIImageView;

@interface CKLabel : UILabel {

	UIImageView* _titleIconImageView;
	long long _titleIconImageType;

}

@property (nonatomic,retain) UIImageView * titleIconImageView;              //@synthesize titleIconImageView=_titleIconImageView - In the implementation block
@property (assign,nonatomic) long long titleIconImageType;                  //@synthesize titleIconImageType=_titleIconImageType - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)setTitleIconImageType:(long long)arg1 ;
-(UIImageView *)titleIconImageView;
-(BOOL)isLTR;
-(void)setTitleIconImageView:(UIImageView *)arg1 ;
-(long long)titleIconImageType;
-(CGSize)sizeOfTitleLabel;
-(CGSize)sizeOfAccessoryImageView;
-(CGRect)rectToDrawTextInForRect:(CGRect)arg1 ;
@end

