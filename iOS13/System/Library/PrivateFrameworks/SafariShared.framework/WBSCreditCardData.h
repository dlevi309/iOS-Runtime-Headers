/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSString, NSDate, PKVirtualCard, UIImage;

@interface WBSCreditCardData : NSObject {

	NSString* _cardName;
	NSString* _cardholderName;
	NSString* _cardNumber;
	NSDate* _expirationDate;
	NSDate* _lastUsedDate;
	NSString* _cardSecurityCode;
	PKVirtualCard* _virtualCard;

}

@property (nonatomic,readonly) UIImage * virtualCardIcon; 
@property (nonatomic,copy) NSString * cardName;                               //@synthesize cardName=_cardName - In the implementation block
@property (nonatomic,copy) NSString * cardholderName;                         //@synthesize cardholderName=_cardholderName - In the implementation block
@property (nonatomic,copy) NSString * cardNumber;                             //@synthesize cardNumber=_cardNumber - In the implementation block
@property (nonatomic,retain) NSDate * lastUsedDate;                           //@synthesize lastUsedDate=_lastUsedDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                  //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * cardSecurityCode;              //@synthesize cardSecurityCode=_cardSecurityCode - In the implementation block
@property (nonatomic,readonly) PKVirtualCard * virtualCard;                   //@synthesize virtualCard=_virtualCard - In the implementation block
-(UIImage *)virtualCardIcon;
-(id)description;
-(NSDate *)expirationDate;
-(NSDate *)lastUsedDate;
-(void)setLastUsedDate:(NSDate *)arg1 ;
-(id)initWithCameraReaderOutput:(id)arg1 ;
-(NSString *)cardNumber;
-(NSString *)cardName;
-(NSString *)cardSecurityCode;
-(NSString *)cardholderName;
-(PKVirtualCard *)virtualCard;
-(void)setCardholderName:(NSString *)arg1 ;
-(void)setCardNumber:(NSString *)arg1 ;
-(id)initWithCardName:(id)arg1 number:(id)arg2 cardholderName:(id)arg3 expirationDate:(id)arg4 securityCode:(id)arg5 ;
-(id)_expirationDateFromPKVirtualCard:(id)arg1 ;
-(id)initWithCardName:(id)arg1 number:(id)arg2 cardholderName:(id)arg3 expirationDate:(id)arg4 ;
-(id)creditCardDataByUpdatingLastUsedDate:(id)arg1 ;
-(id)initWithVirtualCard:(id)arg1 ;
-(id)initWithVirtualCardCredentials:(id)arg1 virtualCard:(id)arg2 ;
-(id)initWithKeychainRepresentation:(id)arg1 ;
-(id)keychainRepresentation;
-(id)creditCardDataByMergingCardholderNameAndExpirationDateFromCard:(id)arg1 ;
-(BOOL)hasSameCreditCardInformationAs:(id)arg1 ;
-(void)setCardName:(NSString *)arg1 ;
@end

