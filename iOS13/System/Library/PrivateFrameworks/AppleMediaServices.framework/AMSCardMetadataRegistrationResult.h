/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSString, NSDictionary;

@interface AMSCardMetadataRegistrationResult : NSObject {

	NSString* _cardArtwork;
	long long _cardType;
	NSString* _descriptionLong;
	NSString* _descriptionShort;
	long long _paymentNetwork;
	NSString* _serialNumber;
	NSString* _suffix;
	NSDictionary* _dictionary;

}

@property (nonatomic,retain) NSString * cardArtwork;                   //@synthesize cardArtwork=_cardArtwork - In the implementation block
@property (assign,nonatomic) long long cardType;                       //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,retain) NSString * descriptionLong;               //@synthesize descriptionLong=_descriptionLong - In the implementation block
@property (nonatomic,retain) NSString * descriptionShort;              //@synthesize descriptionShort=_descriptionShort - In the implementation block
@property (assign,nonatomic) long long paymentNetwork;                 //@synthesize paymentNetwork=_paymentNetwork - In the implementation block
@property (nonatomic,retain) NSString * serialNumber;                  //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,retain) NSString * suffix;                        //@synthesize suffix=_suffix - In the implementation block
@property (nonatomic,retain) NSDictionary * dictionary;                //@synthesize dictionary=_dictionary - In the implementation block
-(id)init;
-(NSDictionary *)dictionary;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSString *)serialNumber;
-(long long)paymentNetwork;
-(void)setPaymentNetwork:(long long)arg1 ;
-(NSString *)suffix;
-(void)setSerialNumber:(NSString *)arg1 ;
-(NSString *)cardArtwork;
-(long long)cardType;
-(NSString *)descriptionLong;
-(NSString *)descriptionShort;
-(id)initWithCardArtwork:(id)arg1 cardType:(long long)arg2 descriptionLong:(id)arg3 descriptionShort:(id)arg4 paymentNetwork:(long long)arg5 serialNumber:(id)arg6 suffix:(id)arg7 ;
-(void)setCardArtwork:(NSString *)arg1 ;
-(void)setCardType:(long long)arg1 ;
-(void)setDescriptionLong:(NSString *)arg1 ;
-(void)setDescriptionShort:(NSString *)arg1 ;
-(void)setSuffix:(NSString *)arg1 ;
@end

