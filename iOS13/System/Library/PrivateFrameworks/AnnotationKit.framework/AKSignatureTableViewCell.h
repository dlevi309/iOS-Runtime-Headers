/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(AKSignature *)signature;
-(void)_commonInit;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSignature:(AKSignature *)arg1 ;
-(UIImageView *)signatureImageView;
-(void)setSignatureImageView:(UIImageView *)arg1 ;
-(void)_setImageFromSignature;
@end

