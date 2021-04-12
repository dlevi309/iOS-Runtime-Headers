/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCHCIStartOfTransactionV2Event, NSString;

@interface NFAWDStartOfTransactionV2 : NSObject <NFAWDEventProtocol> {

	BOOL _isLongTransaction;
	unsigned _version;
	unsigned _command;
	unsigned _commandParam1;
	unsigned _commandResult;
	unsigned _expressType;
	AWDNFCHCIStartOfTransactionV2Event* _metric;

}

@property (assign,nonatomic) unsigned version;                                         //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned command;                                         //@synthesize command=_command - In the implementation block
@property (assign,nonatomic) unsigned commandParam1;                                   //@synthesize commandParam1=_commandParam1 - In the implementation block
@property (assign,nonatomic) unsigned commandResult;                                   //@synthesize commandResult=_commandResult - In the implementation block
@property (assign,nonatomic) unsigned expressType;                                     //@synthesize expressType=_expressType - In the implementation block
@property (assign,nonatomic) BOOL isLongTransaction;                                   //@synthesize isLongTransaction=_isLongTransaction - In the implementation block
@property (nonatomic,retain) AWDNFCHCIStartOfTransactionV2Event * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(unsigned)version;
-(void)setVersion:(unsigned)arg1 ;
-(AWDNFCHCIStartOfTransactionV2Event *)metric;
-(void)setMetric:(AWDNFCHCIStartOfTransactionV2Event *)arg1 ;
-(void)setCommand:(unsigned)arg1 ;
-(unsigned)command;
-(void)setCommandParam1:(unsigned)arg1 ;
-(void)setCommandResult:(unsigned)arg1 ;
-(void)setExpressType:(unsigned)arg1 ;
-(unsigned)commandParam1;
-(unsigned)commandResult;
-(unsigned)expressType;
-(void)setIsLongTransaction:(BOOL)arg1 ;
-(BOOL)isLongTransaction;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1 ;
@end

