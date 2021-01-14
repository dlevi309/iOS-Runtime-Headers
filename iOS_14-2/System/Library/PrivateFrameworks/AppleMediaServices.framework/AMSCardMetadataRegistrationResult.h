/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)serialNumber;
-(id)initWithCardArtwork:(id)arg1 cardType:(long long)arg2 descriptionLong:(id)arg3 descriptionShort:(id)arg4 paymentNetwork:(long long)arg5 serialNumber:(id)arg6 suffix:(id)arg7 ;
-(id)init;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSString *)suffix;
-(long long)cardType;
-(NSDictionary *)dictionary;
-(NSString *)descriptionLong;
-(NSString *)descriptionShort;
-(void)setPaymentNetwork:(long long)arg1 ;
-(long long)paymentNetwork;
-(void)setCardArtwork:(NSString *)arg1 ;
-(void)setDescriptionShort:(NSString *)arg1 ;
-(void)setCardType:(long long)arg1 ;
-(void)setDescriptionLong:(NSString *)arg1 ;
-(void)setSuffix:(NSString *)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(NSString *)cardArtwork;
@end

