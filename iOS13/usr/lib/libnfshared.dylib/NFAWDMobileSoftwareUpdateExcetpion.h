/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(AWDNFCMobileSoftwareUpdateExceptionEvent *)metric;
-(void)setMetric:(AWDNFCMobileSoftwareUpdateExceptionEvent *)arg1 ;
-(unsigned)getMetricId;
-(id)getMetric;
@end

