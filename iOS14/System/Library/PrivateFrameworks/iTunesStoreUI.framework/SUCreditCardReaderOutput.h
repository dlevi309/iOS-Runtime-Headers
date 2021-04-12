/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSError;

@interface SUCreditCardReaderOutput : SUScriptObject <SSXPCCoding, NSSecureCoding> {

	BOOL _cancelled;
	BOOL _manualEntrySelected;
	NSString* _cardCardholderName;
	NSNumber* _cardExpirationDay;
	NSNumber* _cardExpirationMonth;
	NSNumber* _cardExpirationYear;
	NSString* _cardExpirationStringValue;
	NSString* _cardNumber;
	NSError* _error;

}

@property (assign,nonatomic) BOOL cancelled;                                  //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,copy) NSString * cardCardholderName;                     //@synthesize cardCardholderName=_cardCardholderName - In the implementation block
@property (nonatomic,copy) NSNumber * cardExpirationDay;                      //@synthesize cardExpirationDay=_cardExpirationDay - In the implementation block
@property (nonatomic,copy) NSNumber * cardExpirationMonth;                    //@synthesize cardExpirationMonth=_cardExpirationMonth - In the implementation block
@property (nonatomic,copy) NSNumber * cardExpirationYear;                     //@synthesize cardExpirationYear=_cardExpirationYear - In the implementation block
@property (nonatomic,copy) NSString * cardExpirationStringValue;              //@synthesize cardExpirationStringValue=_cardExpirationStringValue - In the implementation block
@property (nonatomic,copy) NSString * cardNumber;                             //@synthesize cardNumber=_cardNumber - In the implementation block
@property (assign,nonatomic) BOOL manualEntrySelected;                        //@synthesize manualEntrySelected=_manualEntrySelected - In the implementation block
@property (nonatomic,copy) NSError * error;                                   //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)cancelled;
-(void)setCardNumber:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)attributeKeys;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)cardNumber;
-(id)scriptAttributeKeys;
-(BOOL)manualEntrySelected;
-(void)setCardCardholderName:(NSString *)arg1 ;
-(void)setCardExpirationDay:(NSNumber *)arg1 ;
-(void)setCardExpirationMonth:(NSNumber *)arg1 ;
-(void)setCardExpirationYear:(NSNumber *)arg1 ;
-(void)setCardExpirationStringValue:(NSString *)arg1 ;
-(NSString *)cardCardholderName;
-(NSNumber *)cardExpirationDay;
-(NSNumber *)cardExpirationMonth;
-(NSNumber *)cardExpirationYear;
-(NSString *)cardExpirationStringValue;
-(void)setManualEntrySelected:(BOOL)arg1 ;
@end

