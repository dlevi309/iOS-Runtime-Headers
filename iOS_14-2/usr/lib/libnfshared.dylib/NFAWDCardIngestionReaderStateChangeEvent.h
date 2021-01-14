/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCCardIngestionReaderStateChangeEvent, NSString;

@interface NFAWDCardIngestionReaderStateChangeEvent : NSObject <NFAWDEventProtocol> {

	AWDNFCCardIngestionReaderStateChangeEvent* _metric;

}

@property (assign,nonatomic) unsigned errorCode; 
@property (assign,nonatomic) unsigned type; 
@property (nonatomic,retain) AWDNFCCardIngestionReaderStateChangeEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(AWDNFCCardIngestionReaderStateChangeEvent *)metric;
-(unsigned)errorCode;
-(void)setType:(unsigned)arg1 ;
-(id)getMetric;
-(unsigned)type;
-(void)setErrorCode:(unsigned)arg1 ;
-(unsigned)getMetricId;
-(void)setMetric:(AWDNFCCardIngestionReaderStateChangeEvent *)arg1 ;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
@end

