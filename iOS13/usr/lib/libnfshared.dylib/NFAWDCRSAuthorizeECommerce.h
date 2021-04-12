/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCSECRSAuthorizeECommerce, NSData, NSString;

@interface NFAWDCRSAuthorizeECommerce : NSObject <NFAWDEventProtocol> {

	unsigned _status;
	unsigned _method;
	unsigned _countryCode;
	unsigned _currencyCode;
	unsigned _merchantCapabilities;
	unsigned _transactionType;
	unsigned long long _transactionTotal;
	unsigned long long _otherAmount;
	AWDNFCSECRSAuthorizeECommerce* _metric;

}

@property (assign,nonatomic) unsigned status;                                     //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned method;                                     //@synthesize method=_method - In the implementation block
@property (nonatomic,retain) NSData * aid; 
@property (nonatomic,retain) NSData * merchantId; 
@property (assign,nonatomic) unsigned countryCode;                                //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) unsigned currencyCode;                               //@synthesize currencyCode=_currencyCode - In the implementation block
@property (assign,nonatomic) unsigned long long transactionTotal;                 //@synthesize transactionTotal=_transactionTotal - In the implementation block
@property (assign,nonatomic) unsigned long long otherAmount;                      //@synthesize otherAmount=_otherAmount - In the implementation block
@property (assign,nonatomic) unsigned merchantCapabilities;                       //@synthesize merchantCapabilities=_merchantCapabilities - In the implementation block
@property (nonatomic,retain) NSData * transactionId; 
@property (assign,nonatomic) unsigned transactionType;                            //@synthesize transactionType=_transactionType - In the implementation block
@property (nonatomic,retain) AWDNFCSECRSAuthorizeECommerce * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(unsigned)countryCode;
-(unsigned)currencyCode;
-(unsigned)method;
-(unsigned)status;
-(void)setCurrencyCode:(unsigned)arg1 ;
-(AWDNFCSECRSAuthorizeECommerce *)metric;
-(void)setMetric:(AWDNFCSECRSAuthorizeECommerce *)arg1 ;
-(void)setMethod:(unsigned)arg1 ;
-(void)setStatus:(unsigned)arg1 ;
-(void)setCountryCode:(unsigned)arg1 ;
-(void)setTransactionType:(unsigned)arg1 ;
-(unsigned)transactionType;
-(NSData *)merchantId;
-(void)setMerchantId:(NSData *)arg1 ;
-(NSData *)transactionId;
-(void)setTransactionId:(NSData *)arg1 ;
-(void)setMerchantCapabilities:(unsigned)arg1 ;
-(unsigned)merchantCapabilities;
-(void)setAid:(NSData *)arg1 ;
-(NSData *)aid;
-(void)setTransactionTotal:(unsigned long long)arg1 ;
-(void)setOtherAmount:(unsigned long long)arg1 ;
-(unsigned long long)transactionTotal;
-(unsigned long long)otherAmount;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1 ;
@end
