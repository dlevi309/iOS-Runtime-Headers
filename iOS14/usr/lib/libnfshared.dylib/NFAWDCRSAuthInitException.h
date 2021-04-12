/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCCRSAuthInitExceptionEvent, NSString;

@interface NFAWDCRSAuthInitException : NSObject <NFAWDEventProtocol> {

	AWDNFCCRSAuthInitExceptionEvent* _metric;

}

@property (nonatomic,retain) AWDNFCCRSAuthInitExceptionEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(AWDNFCCRSAuthInitExceptionEvent *)metric;
-(id)getMetric;
-(unsigned)getMetricId;
-(void)setMetric:(AWDNFCCRSAuthInitExceptionEvent *)arg1 ;
-(void)updateExceptionUUID:(id)arg1 ;
@end

