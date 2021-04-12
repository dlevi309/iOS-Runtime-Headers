/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCMobileSoftwareUpdateExceptionEvent, NSString;

@interface NFAWDMobileSoftwareUpdateExcetpion : NSObject <NFAWDEventProtocol> {

	AWDNFCMobileSoftwareUpdateExceptionEvent* _metric;

}

@property (nonatomic,retain) AWDNFCMobileSoftwareUpdateExceptionEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(AWDNFCMobileSoftwareUpdateExceptionEvent *)metric;
-(id)getMetric;
-(unsigned)getMetricId;
-(void)setMetric:(AWDNFCMobileSoftwareUpdateExceptionEvent *)arg1 ;
@end

