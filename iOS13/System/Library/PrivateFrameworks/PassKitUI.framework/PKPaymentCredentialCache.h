/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class PKPaymentCredential, UIImage, PKPaymentPass, NSString;

@interface PKPaymentCredentialCache : NSObject {

	BOOL _isSelected;
	PKPaymentCredential* _credential;
	UIImage* _passSnapshot;
	PKPaymentPass* _paymentPass;
	NSString* _cellSubtitle;

}

@property (nonatomic,retain) PKPaymentCredential * credential;              //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) UIImage * passSnapshot;                        //@synthesize passSnapshot=_passSnapshot - In the implementation block
@property (assign,nonatomic) BOOL isSelected;                               //@synthesize isSelected=_isSelected - In the implementation block
@property (nonatomic,retain) PKPaymentPass * paymentPass;                   //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,copy) NSString * cellSubtitle;                         //@synthesize cellSubtitle=_cellSubtitle - In the implementation block
-(BOOL)isSelected;
-(void)setIsSelected:(BOOL)arg1 ;
-(PKPaymentCredential *)credential;
-(void)setCredential:(PKPaymentCredential *)arg1 ;
-(PKPaymentPass *)paymentPass;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(UIImage *)passSnapshot;
-(void)setPassSnapshot:(UIImage *)arg1 ;
-(NSString *)cellSubtitle;
-(void)setCellSubtitle:(NSString *)arg1 ;
@end

