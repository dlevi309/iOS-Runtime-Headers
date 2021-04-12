/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <UIKitCore/UITableViewCell.h>

@class AKSignature, UIImageView;

@interface AKSignatureTableViewCell : UITableViewCell {

	AKSignature* _signature;
	UIImageView* _signatureImageView;

}

@property (nonatomic,retain) AKSignature * signature;                       //@synthesize signature=_signature - In the implementation block
@property (nonatomic,retain) UIImageView * signatureImageView;              //@synthesize signatureImageView=_signatureImageView - In the implementation block
-(AKSignature *)signature;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)setSignature:(AKSignature *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIImageView *)signatureImageView;
-(void)setSignatureImageView:(UIImageView *)arg1 ;
-(void)_setImageFromSignature;
@end

