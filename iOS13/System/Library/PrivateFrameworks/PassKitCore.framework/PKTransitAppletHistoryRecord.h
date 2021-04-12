/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDate, NSDecimalNumber, NSData, NSArray, NSString;

@interface PKTransitAppletHistoryRecord : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _transitModifiers;
	BOOL _appletStateDirty;
	NSNumber* _historySequenceNumber;
	unsigned long long _type;
	unsigned long long _subtype;
	unsigned long long _detail;
	NSDate* _time;
	NSDecimalNumber* _balance;
	NSNumber* _loyaltyBalance;
	NSDecimalNumber* _amount;
	NSNumber* _loyaltyAmount;
	NSNumber* _cityCode;
	NSData* _startStation;
	NSData* _endStation;
	NSArray* _amounts;
	NSString* _transitDetail;
	long long _recordType;

}

@property (nonatomic,readonly) long long paymentTransactionType; 
@property (nonatomic,readonly) long long transitTransactionSubtype; 
@property (nonatomic,readonly) unsigned long long transitTransactionModifier; 
@property (nonatomic,copy) NSNumber * historySequenceNumber;                               //@synthesize historySequenceNumber=_historySequenceNumber - In the implementation block
@property (nonatomic,copy) NSString * transitDetail;                                       //@synthesize transitDetail=_transitDetail - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long subtype;                                   //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) unsigned long long detail;                                    //@synthesize detail=_detail - In the implementation block
@property (nonatomic,copy) NSDate * time;                                                  //@synthesize time=_time - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * balance;                                      //@synthesize balance=_balance - In the implementation block
@property (nonatomic,copy) NSNumber * loyaltyBalance;                                      //@synthesize loyaltyBalance=_loyaltyBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount;                                       //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSNumber * loyaltyAmount;                                       //@synthesize loyaltyAmount=_loyaltyAmount - In the implementation block
@property (nonatomic,copy) NSData * startStation;                                          //@synthesize startStation=_startStation - In the implementation block
@property (nonatomic,copy) NSData * endStation;                                            //@synthesize endStation=_endStation - In the implementation block
@property (nonatomic,copy) NSNumber * cityCode;                                            //@synthesize cityCode=_cityCode - In the implementation block
@property (assign,nonatomic) long long recordType;                                         //@synthesize recordType=_recordType - In the implementation block
@property (assign,nonatomic) BOOL appletStateDirty;                                        //@synthesize appletStateDirty=_appletStateDirty - In the implementation block
@property (nonatomic,copy) NSArray * amounts;                                              //@synthesize amounts=_amounts - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)time;
-(void)setTime:(NSDate *)arg1 ;
-(NSDecimalNumber *)amount;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(unsigned long long)subtype;
-(long long)recordType;
-(void)setDetail:(unsigned long long)arg1 ;
-(unsigned long long)detail;
-(void)setSubtype:(unsigned long long)arg1 ;
-(void)setRecordType:(long long)arg1 ;
-(NSDecimalNumber *)balance;
-(void)setBalance:(NSDecimalNumber *)arg1 ;
-(id)felicaHistoryRecord;
-(NSNumber *)historySequenceNumber;
-(void)setHistorySequenceNumber:(NSNumber *)arg1 ;
-(NSData *)endStation;
-(NSData *)startStation;
-(NSNumber *)loyaltyBalance;
-(void)setLoyaltyBalance:(NSNumber *)arg1 ;
-(BOOL)appletStateDirty;
-(void)setAppletStateDirty:(BOOL)arg1 ;
-(id)concreteTransactionWithCurrency:(id)arg1 ;
-(void)_setTransactionHistoryDetailsFromString:(id)arg1 ;
-(BOOL)isEqualToTransitAppletHistoryRecord:(id)arg1 ;
-(long long)paymentTransactionType;
-(long long)transitTransactionSubtype;
-(unsigned long long)transitTransactionModifier;
-(id)transactionAmounts;
-(NSNumber *)loyaltyAmount;
-(void)setLoyaltyAmount:(NSNumber *)arg1 ;
-(NSNumber *)cityCode;
-(void)setCityCode:(NSNumber *)arg1 ;
-(void)setStartStation:(NSData *)arg1 ;
-(void)setEndStation:(NSData *)arg1 ;
-(NSArray *)amounts;
-(void)setAmounts:(NSArray *)arg1 ;
-(NSString *)transitDetail;
-(void)setTransitDetail:(NSString *)arg1 ;
@end

