/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSNumber, PKLocation, PKCurrencyAmount, NSPersonNameComponents, NSArray;

@interface PKPassSemantic : NSObject <NSSecureCoding> {

	NSString* _semanticKey;
	NSString* _fieldKey;
	NSString* _stringValue;
	NSDate* _dateValue;
	NSNumber* _numberValue;
	PKLocation* _locationValue;
	PKCurrencyAmount* _currencyAmountValue;
	NSPersonNameComponents* _personNameComponentsValue;
	NSArray* _stringsValue;
	NSArray* _dictionariesValue;

}

@property (nonatomic,copy) NSString * semanticKey;                                            //@synthesize semanticKey=_semanticKey - In the implementation block
@property (nonatomic,copy) NSString * fieldKey;                                               //@synthesize fieldKey=_fieldKey - In the implementation block
@property (nonatomic,copy) NSString * stringValue;                                            //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,retain) NSDate * dateValue;                                              //@synthesize dateValue=_dateValue - In the implementation block
@property (nonatomic,retain) NSNumber * numberValue;                                          //@synthesize numberValue=_numberValue - In the implementation block
@property (nonatomic,retain) PKLocation * locationValue;                                      //@synthesize locationValue=_locationValue - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * currencyAmountValue;                          //@synthesize currencyAmountValue=_currencyAmountValue - In the implementation block
@property (nonatomic,retain) NSPersonNameComponents * personNameComponentsValue;              //@synthesize personNameComponentsValue=_personNameComponentsValue - In the implementation block
@property (nonatomic,retain) NSArray * stringsValue;                                          //@synthesize stringsValue=_stringsValue - In the implementation block
@property (nonatomic,retain) NSArray * dictionariesValue;                                     //@synthesize dictionariesValue=_dictionariesValue - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
+(BOOL)supportsSecureCoding;
+(id)_supportedDictionaryValueTypes;
+(BOOL)isSupportedDictionaryKeyType:(id)arg1 ;
+(BOOL)isSupportedDictionaryValueType:(id)arg1 ;
-(NSDate *)dateValue;
-(NSNumber *)numberValue;
-(BOOL)hasValue;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(NSString *)fieldKey;
-(NSString *)semanticKey;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setSemanticKey:(NSString *)arg1 ;
-(id)description;
-(void)setFieldKey:(NSString *)arg1 ;
-(void)setNumberValue:(NSNumber *)arg1 ;
-(void)setCurrencyAmountValue:(PKCurrencyAmount *)arg1 ;
-(void)setPersonNameComponentsValue:(NSPersonNameComponents *)arg1 ;
-(void)setStringsValue:(NSArray *)arg1 ;
-(NSArray *)stringsValue;
-(void)setDictionariesValue:(NSArray *)arg1 ;
-(PKCurrencyAmount *)currencyAmountValue;
-(NSPersonNameComponents *)personNameComponentsValue;
-(NSArray *)dictionariesValue;
-(void)setDateValue:(NSDate *)arg1 ;
-(unsigned long long)hash;
-(PKLocation *)locationValue;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocationValue:(PKLocation *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

