/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCFelicaStateChangeEvent, NSString;

@interface NFAWDFelicaStateChange : NSObject <NFAWDEventProtocol> {

	AWDNFCFelicaStateChangeEvent* _metric;

}

@property (nonatomic,retain) AWDNFCFelicaStateChangeEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(AWDNFCFelicaStateChangeEvent *)metric;
-(void)setMetric:(AWDNFCFelicaStateChangeEvent *)arg1 ;
-(unsigned)getMetricId;
-(id)getMetric;
@end

