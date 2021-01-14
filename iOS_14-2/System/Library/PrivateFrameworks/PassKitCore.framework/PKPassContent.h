/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKContent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, PKPassPersonalization, NSDictionary, PKPassBarcodeSettings;

@interface PKPassContent : PKContent <NSSecureCoding> {

	long long _transitType;
	NSString* _logoText;
	NSArray* _frontFieldBuckets;
	NSArray* _backFieldBuckets;
	NSArray* _balanceFields;
	PKPassPersonalization* _personalization;
	NSDictionary* _semantics;
	NSDictionary* _allSemantics;
	NSString* _businessChatIdentifier;
	PKPassBarcodeSettings* _barcodeSettings;
	NSString* _cardholderInfoSectionTitle;

}

@property (assign,nonatomic) long long transitType;                                //@synthesize transitType=_transitType - In the implementation block
@property (nonatomic,copy) NSString * logoText;                                    //@synthesize logoText=_logoText - In the implementation block
@property (nonatomic,copy) NSArray * frontFieldBuckets;                            //@synthesize frontFieldBuckets=_frontFieldBuckets - In the implementation block
@property (nonatomic,copy) NSArray * backFieldBuckets;                             //@synthesize backFieldBuckets=_backFieldBuckets - In the implementation block
@property (nonatomic,copy) NSArray * balanceFields;                                //@synthesize balanceFields=_balanceFields - In the implementation block
@property (nonatomic,copy) PKPassPersonalization * personalization;                //@synthesize personalization=_personalization - In the implementation block
@property (nonatomic,copy) NSDictionary * semantics;                               //@synthesize semantics=_semantics - In the implementation block
@property (nonatomic,copy) NSDictionary * allSemantics;                            //@synthesize allSemantics=_allSemantics - In the implementation block
@property (nonatomic,copy) NSString * businessChatIdentifier;                      //@synthesize businessChatIdentifier=_businessChatIdentifier - In the implementation block
@property (nonatomic,retain) PKPassBarcodeSettings * barcodeSettings;              //@synthesize barcodeSettings=_barcodeSettings - In the implementation block
@property (nonatomic,copy) NSString * cardholderInfoSectionTitle;                  //@synthesize cardholderInfoSectionTitle=_cardholderInfoSectionTitle - In the implementation block
@property (nonatomic,readonly) NSArray * primaryFields; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSemantics:(NSDictionary *)arg1 ;
-(NSString *)logoText;
-(void)flushFormattedFieldValues;
-(NSArray *)balanceFields;
-(void)setBalanceFields:(NSArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 privateBundle:(id)arg3 ;
-(void)setLogoText:(NSString *)arg1 ;
-(void)setFrontFieldBuckets:(NSArray *)arg1 ;
-(void)setBackFieldBuckets:(NSArray *)arg1 ;
-(void)setPersonalization:(PKPassPersonalization *)arg1 ;
-(void)setAllSemantics:(NSDictionary *)arg1 ;
-(void)setBarcodeSettings:(PKPassBarcodeSettings *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)semantics;
-(NSArray *)frontFieldBuckets;
-(NSArray *)backFieldBuckets;
-(NSArray *)primaryFields;
-(PKPassPersonalization *)personalization;
-(NSDictionary *)allSemantics;
-(PKPassBarcodeSettings *)barcodeSettings;
-(NSString *)cardholderInfoSectionTitle;
-(void)setCardholderInfoSectionTitle:(NSString *)arg1 ;
-(void)setTransitType:(long long)arg1 ;
-(void)setBusinessChatIdentifier:(NSString *)arg1 ;
-(long long)transitType;
-(NSString *)businessChatIdentifier;
@end

