/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCHCIEndOfTransactionEvent, NSData, NSString;

@interface NFAWDEndOfTransaction : NSObject <NFAWDEventProtocol> {

	unsigned _version;
	unsigned _status;
	unsigned _command;
	unsigned _transactionStatus;
	unsigned _informative;
	unsigned _currencyCode;
	unsigned _mobileCVMResult;
	unsigned _msc;
	unsigned _expressType;
	unsigned _totalRSSISamples;
	unsigned _avgRSSIValue;
	unsigned _maxRSSIValue;
	unsigned _minRSSIValue;
	unsigned long long _amount;
	unsigned long long _iad;
	AWDNFCHCIEndOfTransactionEvent* _metric;

}

@property (assign,nonatomic) unsigned version;                                     //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned status;                                      //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned command;                                     //@synthesize command=_command - In the implementation block
@property (nonatomic,retain) NSData * transactionId; 
@property (assign,nonatomic) unsigned transactionStatus;                           //@synthesize transactionStatus=_transactionStatus - In the implementation block
@property (assign,nonatomic) unsigned transactionType; 
@property (assign,nonatomic) unsigned informative;                                 //@synthesize informative=_informative - In the implementation block
@property (nonatomic,retain) NSData * aid; 
@property (assign,nonatomic) unsigned long long amount;                            //@synthesize amount=_amount - In the implementation block
@property (assign,nonatomic) unsigned currencyCode;                                //@synthesize currencyCode=_currencyCode - In the implementation block
@property (assign,nonatomic) unsigned long long iad;                               //@synthesize iad=_iad - In the implementation block
@property (assign,nonatomic) unsigned mobileCVMResult;                             //@synthesize mobileCVMResult=_mobileCVMResult - In the implementation block
@property (nonatomic,retain) NSData * cdi; 
@property (nonatomic,retain) NSData * maid; 
@property (assign,nonatomic) unsigned msc;                                         //@synthesize msc=_msc - In the implementation block
@property (nonatomic,retain) NSData * mcii; 
@property (assign,nonatomic) unsigned expressType;                                 //@synthesize expressType=_expressType - In the implementation block
@property (assign,nonatomic) unsigned totalRSSISamples;                            //@synthesize totalRSSISamples=_totalRSSISamples - In the implementation block
@property (assign,nonatomic) unsigned avgRSSIValue;                                //@synthesize avgRSSIValue=_avgRSSIValue - In the implementation block
@property (assign,nonatomic) unsigned maxRSSIValue;                                //@synthesize maxRSSIValue=_maxRSSIValue - In the implementation block
@property (assign,nonatomic) unsigned minRSSIValue;                                //@synthesize minRSSIValue=_minRSSIValue - In the implementation block
@property (nonatomic,retain) AWDNFCHCIEndOfTransactionEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)currencyCode;
-(NSData *)aid;
-(NSData *)cdi;
-(unsigned long long)iad;
-(unsigned)msc;
-(id)init;
-(NSData *)maid;
-(NSData *)mcii;
-(void)setTransactionType:(unsigned)arg1 ;
-(AWDNFCHCIEndOfTransactionEvent *)metric;
-(id)getMetric;
-(void)setCurrencyCode:(unsigned)arg1 ;
-(void)setAmount:(unsigned long long)arg1 ;
-(unsigned long long)amount;
-(NSData *)transactionId;
-(void)setAid:(NSData *)arg1 ;
-(void)setTransactionStatus:(unsigned)arg1 ;
-(void)setTransactionId:(NSData *)arg1 ;
-(void)setCdi:(NSData *)arg1 ;
-(void)setMsc:(unsigned)arg1 ;
-(void)setIad:(unsigned long long)arg1 ;
-(unsigned)transactionStatus;
-(void)setStatus:(unsigned)arg1 ;
-(unsigned)informative;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)getMetricId;
-(unsigned)command;
-(void)setMetric:(AWDNFCHCIEndOfTransactionEvent *)arg1 ;
-(unsigned)version;
-(void)setCommand:(unsigned)arg1 ;
-(unsigned)transactionType;
-(unsigned)status;
-(void)setExpressType:(unsigned)arg1 ;
-(void)setInformative:(unsigned)arg1 ;
-(void)setTotalRSSISamples:(unsigned)arg1 ;
-(void)setAvgRSSIValue:(unsigned)arg1 ;
-(void)setMaxRSSIValue:(unsigned)arg1 ;
-(void)setMinRSSIValue:(unsigned)arg1 ;
-(unsigned)expressType;
-(unsigned)totalRSSISamples;
-(unsigned)avgRSSIValue;
-(unsigned)maxRSSIValue;
-(unsigned)minRSSIValue;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1 ;
-(void)setMaid:(NSData *)arg1 ;
-(void)setMcii:(NSData *)arg1 ;
-(void)setMobileCVMResult:(unsigned)arg1 ;
-(unsigned)mobileCVMResult;
@end

