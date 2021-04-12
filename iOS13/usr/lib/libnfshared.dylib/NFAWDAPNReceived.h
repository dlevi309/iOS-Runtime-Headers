/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCTSMAPNReceivedEvent, NSString;

@interface NFAWDAPNReceived : NSObject <NFAWDEventProtocol> {

	AWDNFCTSMAPNReceivedEvent* _metric;

}

@property (nonatomic,retain) AWDNFCTSMAPNReceivedEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(AWDNFCTSMAPNReceivedEvent *)metric;
-(void)setMetric:(AWDNFCTSMAPNReceivedEvent *)arg1 ;
-(unsigned)getMetricId;
-(id)getMetric;
@end

