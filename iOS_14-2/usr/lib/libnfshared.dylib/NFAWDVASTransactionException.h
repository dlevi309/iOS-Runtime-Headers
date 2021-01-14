/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCVASTransactionExceptionEvent, NSString;

@interface NFAWDVASTransactionException : NSObject <NFAWDEventProtocol> {

	unsigned _type;
	unsigned _swStatus;
	AWDNFCVASTransactionExceptionEvent* _metric;

}

@property (assign,nonatomic) unsigned type;                                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned swStatus;                                        //@synthesize swStatus=_swStatus - In the implementation block
@property (nonatomic,retain) AWDNFCVASTransactionExceptionEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(AWDNFCVASTransactionExceptionEvent *)metric;
-(void)setType:(unsigned)arg1 ;
-(id)getMetric;
-(unsigned)type;
-(unsigned)getMetricId;
-(void)setMetric:(AWDNFCVASTransactionExceptionEvent *)arg1 ;
-(void)setSwStatus:(unsigned)arg1 ;
-(unsigned)swStatus;
-(void)updateExceptionUUID:(id)arg1 ;
@end

