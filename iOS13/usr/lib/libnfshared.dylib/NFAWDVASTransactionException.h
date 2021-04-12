/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(unsigned)type;
-(void)setType:(unsigned)arg1 ;
-(AWDNFCVASTransactionExceptionEvent *)metric;
-(void)setMetric:(AWDNFCVASTransactionExceptionEvent *)arg1 ;
-(void)setSwStatus:(unsigned)arg1 ;
-(unsigned)swStatus;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateExceptionUUID:(id)arg1 ;
@end

