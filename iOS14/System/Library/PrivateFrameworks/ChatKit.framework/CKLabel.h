/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UILabel.h>

@class UIImageView, NSSet;

@interface CKLabel : UILabel {

	BOOL _shouldHaveRotatedTitleIconImage;
	UIImageView* _titleIconImageView;
	long long _titleIconImageType;
	NSSet* _titleIconImageTypesSupportingRotation;

}

@property (nonatomic,retain) UIImageView * titleIconImageView;                           //@synthesize titleIconImageView=_titleIconImageView - In the implementation block
@property (assign,nonatomic) BOOL shouldHaveRotatedTitleIconImage;                       //@synthesize shouldHaveRotatedTitleIconImage=_shouldHaveRotatedTitleIconImage - In the implementation block
@property (assign,nonatomic) long long titleIconImageType;                               //@synthesize titleIconImageType=_titleIconImageType - In the implementation block
@property (nonatomic,retain) NSSet * titleIconImageTypesSupportingRotation;              //@synthesize titleIconImageTypesSupportingRotation=_titleIconImageTypesSupportingRotation - In the implementation block
-(BOOL)isLTR;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTitleIconImageType:(long long)arg1 ;
-(void)setShouldHaveRotatedTitleIconImage:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setTitleIconImageView:(UIImageView *)arg1 ;
-(CGSize)sizeOfTitleLabel;
-(BOOL)titleIconImageTypeSupportsRotation:(long long)arg1 ;
-(void)setShouldHaveRotatedTitleIconImage:(BOOL)arg1 ;
-(void)_rotateTitleIconImageView;
-(long long)titleIconImageType;
-(CGSize)sizeOfAccessoryImageView;
-(CGRect)rectToDrawTextInForRect:(CGRect)arg1 ;
-(NSSet *)titleIconImageTypesSupportingRotation;
-(BOOL)shouldHaveRotatedTitleIconImage;
-(void)setTitleIconImageTypesSupportingRotation:(NSSet *)arg1 ;
-(UIImageView *)titleIconImageView;
@end

