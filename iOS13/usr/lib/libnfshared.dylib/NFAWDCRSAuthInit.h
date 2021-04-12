/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCSECRSAuthInit, NSString;

@interface NFAWDCRSAuthInit : NSObject <NFAWDEventProtocol> {

	unsigned _status;
	AWDNFCSECRSAuthInit* _metric;

}

@property (assign,nonatomic) unsigned status;                           //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) AWDNFCSECRSAuthInit * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(unsigned)status;
-(AWDNFCSECRSAuthInit *)metric;
-(void)setMetric:(AWDNFCSECRSAuthInit *)arg1 ;
-(void)setStatus:(unsigned)arg1 ;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1 ;
@end

