/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCHCIEndOfTransactionV2Event, NSData, NSString;

@interface NFAWDEndOfTransactionV2 : NSObject <NFAWDEventProtocol> {

	BOOL _isBlacklisted;
	BOOL _hasExpiryDate;
	unsigned _version;
	unsigned _command;
	unsigned _commandParam1;
	unsigned _commandResult;
	unsigned _transactionStatus;
	unsigned _transactionType;
	unsigned _informative;
	unsigned _spid;
	unsigned _transactionCategory;
	unsigned _transactionExtension;
	unsigned _transactionInProgress;
	unsigned _currencyCode;
	unsigned _expressType;
	unsigned _totalRSSISamples;
	unsigned _avgRSSIValue;
	unsigned _maxRSSIValue;
	unsigned _minRSSIValue;
	AWDNFCHCIEndOfTransactionV2Event* _metric;

}

@property (assign,nonatomic) unsigned version;                                       //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSData * aid; 
@property (assign,nonatomic) unsigned command;                                       //@synthesize command=_command - In the implementation block
@property (assign,nonatomic) unsigned commandParam1;                                 //@synthesize commandParam1=_commandParam1 - In the implementation block
@property (assign,nonatomic) unsigned commandResult;                                 //@synthesize commandResult=_commandResult - In the implementation block
@property (nonatomic,retain) NSData * transactionId; 
@property (assign,nonatomic) unsigned transactionStatus;                             //@synthesize transactionStatus=_transactionStatus - In the implementation block
@property (assign,nonatomic) unsigned transactionType;                               //@synthesize transactionType=_transactionType - In the implementation block
@property (assign,nonatomic) unsigned informative;                                   //@synthesize informative=_informative - In the implementation block
@property (assign,nonatomic) unsigned spid;                                          //@synthesize spid=_spid - In the implementation block
@property (nonatomic,retain) NSData * stationId; 
@property (assign,nonatomic) unsigned transactionCategory;                           //@synthesize transactionCategory=_transactionCategory - In the implementation block
@property (assign,nonatomic) unsigned transactionExtension;                          //@synthesize transactionExtension=_transactionExtension - In the implementation block
@property (assign,nonatomic) unsigned transactionInProgress;                         //@synthesize transactionInProgress=_transactionInProgress - In the implementation block
@property (assign,nonatomic) unsigned currencyCode;                                  //@synthesize currencyCode=_currencyCode - In the implementation block
@property (assign,nonatomic) unsigned expressType;                                   //@synthesize expressType=_expressType - In the implementation block
@property (assign,nonatomic) BOOL isBlacklisted;                                     //@synthesize isBlacklisted=_isBlacklisted - In the implementation block
@property (assign,nonatomic) BOOL hasExpiryDate;                                     //@synthesize hasExpiryDate=_hasExpiryDate - In the implementation block
@property (nonatomic,retain) NSData * terminalIdentifier; 
@property (assign,nonatomic) unsigned totalRSSISamples;                              //@synthesize totalRSSISamples=_totalRSSISamples - In the implementation block
@property (assign,nonatomic) unsigned avgRSSIValue;                                  //@synthesize avgRSSIValue=_avgRSSIValue - In the implementation block
@property (assign,nonatomic) unsigned maxRSSIValue;                                  //@synthesize maxRSSIValue=_maxRSSIValue - In the implementation block
@property (assign,nonatomic) unsigned minRSSIValue;                                  //@synthesize minRSSIValue=_minRSSIValue - In the implementation block
@property (nonatomic,retain) AWDNFCHCIEndOfTransactionV2Event * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(unsigned)currencyCode;
-(unsigned)version;
-(void)setVersion:(unsigned)arg1 ;
-(void)setCurrencyCode:(unsigned)arg1 ;
-(AWDNFCHCIEndOfTransactionV2Event *)metric;
-(void)setMetric:(AWDNFCHCIEndOfTransactionV2Event *)arg1 ;
-(void)setCommand:(unsigned)arg1 ;
-(void)setTransactionType:(unsigned)arg1 ;
-(unsigned)transactionType;
-(unsigned)command;
-(NSData *)transactionId;
-(void)setTransactionId:(NSData *)arg1 ;
-(unsigned)transactionStatus;
-(void)setTransactionStatus:(unsigned)arg1 ;
-(unsigned)informative;
-(BOOL)isBlacklisted;
-(void)setAid:(NSData *)arg1 ;
-(void)setTerminalIdentifier:(NSData *)arg1 ;
-(void)setCommandParam1:(unsigned)arg1 ;
-(void)setCommandResult:(unsigned)arg1 ;
-(void)setExpressType:(unsigned)arg1 ;
-(void)setHasExpiryDate:(BOOL)arg1 ;
-(void)setInformative:(unsigned)arg1 ;
-(void)setIsBlacklisted:(BOOL)arg1 ;
-(void)setSpid:(unsigned)arg1 ;
-(void)setTransactionCategory:(unsigned)arg1 ;
-(void)setTransactionExtension:(unsigned)arg1 ;
-(void)setTransactionInProgress:(unsigned)arg1 ;
-(void)setTotalRSSISamples:(unsigned)arg1 ;
-(void)setAvgRSSIValue:(unsigned)arg1 ;
-(void)setMaxRSSIValue:(unsigned)arg1 ;
-(void)setMinRSSIValue:(unsigned)arg1 ;
-(NSData *)aid;
-(unsigned)commandParam1;
-(unsigned)commandResult;
-(unsigned)expressType;
-(BOOL)hasExpiryDate;
-(unsigned)spid;
-(unsigned)transactionCategory;
-(unsigned)transactionExtension;
-(unsigned)transactionInProgress;
-(NSData *)terminalIdentifier;
-(unsigned)totalRSSISamples;
-(unsigned)avgRSSIValue;
-(unsigned)maxRSSIValue;
-(unsigned)minRSSIValue;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1 ;
-(void)setStationId:(NSData *)arg1 ;
-(NSData *)stationId;
@end

