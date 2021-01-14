/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCSECRSAuthorize, NSString;

@interface NFAWDCRSDeAuthorize : NSObject <NFAWDEventProtocol> {

	unsigned _status;
	AWDNFCSECRSAuthorize* _metric;

}

@property (assign,nonatomic) unsigned status;                            //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) AWDNFCSECRSAuthorize * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(AWDNFCSECRSAuthorize *)metric;
-(id)getMetric;
-(void)setStatus:(unsigned)arg1 ;
-(unsigned)getMetricId;
-(void)setMetric:(AWDNFCSECRSAuthorize *)arg1 ;
-(unsigned)status;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1 ;
@end

