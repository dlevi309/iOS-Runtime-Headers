/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCReaderModeIngestionSessionStarted, NSString;

@interface NFAWDReaderModeIngestionSessionStarted : NSObject <NFAWDEventProtocol> {

	AWDNFCReaderModeIngestionSessionStarted* _metric;

}

@property (nonatomic,retain) AWDNFCReaderModeIngestionSessionStarted * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(AWDNFCReaderModeIngestionSessionStarted *)metric;
-(id)getMetric;
-(unsigned)getMetricId;
-(void)setMetric:(AWDNFCReaderModeIngestionSessionStarted *)arg1 ;
@end

