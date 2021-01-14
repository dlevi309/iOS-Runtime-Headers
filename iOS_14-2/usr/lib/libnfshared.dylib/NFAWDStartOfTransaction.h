/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCHCIStartOfTransactionEvent, NSString;

@interface NFAWDStartOfTransaction : NSObject <NFAWDEventProtocol> {

	unsigned _version;
	unsigned _status;
	AWDNFCHCIStartOfTransactionEvent* _metric;

}

@property (assign,nonatomic) unsigned version;                                       //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned status;                                        //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) AWDNFCHCIStartOfTransactionEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(AWDNFCHCIStartOfTransactionEvent *)metric;
-(id)getMetric;
-(void)setStatus:(unsigned)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)getMetricId;
-(void)setMetric:(AWDNFCHCIStartOfTransactionEvent *)arg1 ;
-(unsigned)version;
-(unsigned)status;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1 ;
@end

