/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCPTOperation, NSString;

@interface NFAWDPTOperation : NSObject <NFAWDEventProtocol> {

	AWDNFCPTOperation* _metric;

}

@property (nonatomic,retain) AWDNFCPTOperation * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(AWDNFCPTOperation *)metric;
-(id)getMetric;
-(void)setOperationType:(unsigned)arg1 ;
-(void)setErrorCode:(unsigned)arg1 ;
-(unsigned)getMetricId;
-(void)setMetric:(AWDNFCPTOperation *)arg1 ;
-(void)setErrorStep:(unsigned)arg1 ;
-(void)setAwdErrorCode:(unsigned)arg1 ;
@end

