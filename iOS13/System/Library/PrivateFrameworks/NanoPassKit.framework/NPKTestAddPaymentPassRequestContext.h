/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@class NSString;

@interface NPKTestAddPaymentPassRequestContext : NSObject {

	NSString* _cardPNO;
	NSString* _cardFlow;
	NSString* _cardID;
	NSString* _cardType;
	NSString* _cardIssuer;
	NSString* _cardProduct;
	NSString* _cardEncryptionScheme;

}

@property (nonatomic,retain) NSString * cardPNO;                           //@synthesize cardPNO=_cardPNO - In the implementation block
@property (nonatomic,retain) NSString * cardFlow;                          //@synthesize cardFlow=_cardFlow - In the implementation block
@property (nonatomic,retain) NSString * cardID;                            //@synthesize cardID=_cardID - In the implementation block
@property (nonatomic,retain) NSString * cardType;                          //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,retain) NSString * cardIssuer;                        //@synthesize cardIssuer=_cardIssuer - In the implementation block
@property (nonatomic,retain) NSString * cardProduct;                       //@synthesize cardProduct=_cardProduct - In the implementation block
@property (nonatomic,retain) NSString * cardEncryptionScheme;              //@synthesize cardEncryptionScheme=_cardEncryptionScheme - In the implementation block
-(NSString *)cardType;
-(void)setCardType:(NSString *)arg1 ;
-(NSString *)cardPNO;
-(void)setCardPNO:(NSString *)arg1 ;
-(NSString *)cardFlow;
-(void)setCardFlow:(NSString *)arg1 ;
-(NSString *)cardID;
-(void)setCardID:(NSString *)arg1 ;
-(NSString *)cardIssuer;
-(void)setCardIssuer:(NSString *)arg1 ;
-(NSString *)cardProduct;
-(void)setCardProduct:(NSString *)arg1 ;
-(NSString *)cardEncryptionScheme;
-(void)setCardEncryptionScheme:(NSString *)arg1 ;
@end

