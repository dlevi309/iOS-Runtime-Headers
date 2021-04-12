/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCPeerPaymentEnrolled, NSString;

@interface NFAWDPeerPaymentEnrolled : NSObject <NFAWDEventProtocol> {

	AWDNFCPeerPaymentEnrolled* _metric;

}

@property (nonatomic,retain) AWDNFCPeerPaymentEnrolled * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDuration:(unsigned long long)arg1 ;
-(id)init;
-(AWDNFCPeerPaymentEnrolled *)metric;
-(id)getMetric;
-(void)setErrorCode:(unsigned)arg1 ;
-(unsigned)getMetricId;
-(void)setMetric:(AWDNFCPeerPaymentEnrolled *)arg1 ;
-(void)setErrorStep:(unsigned)arg1 ;
@end

