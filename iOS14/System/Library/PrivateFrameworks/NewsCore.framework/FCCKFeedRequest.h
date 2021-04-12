/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, NSData;

@interface FCCKFeedRequest : NSObject {

	NSString* _feedID;
	NSData* _startCursor;
	unsigned long long _startOrder;
	unsigned long long _orderLimit;
	unsigned long long _softResultsLimit;
	unsigned long long _hardResultsLimit;

}

@property (nonatomic,copy) NSString * feedID;                                  //@synthesize feedID=_feedID - In the implementation block
@property (nonatomic,copy) NSData * startCursor;                               //@synthesize startCursor=_startCursor - In the implementation block
@property (assign,nonatomic) unsigned long long startOrder;                    //@synthesize startOrder=_startOrder - In the implementation block
@property (assign,nonatomic) unsigned long long orderLimit;                    //@synthesize orderLimit=_orderLimit - In the implementation block
@property (assign,nonatomic) unsigned long long softResultsLimit;              //@synthesize softResultsLimit=_softResultsLimit - In the implementation block
@property (assign,nonatomic) unsigned long long hardResultsLimit;              //@synthesize hardResultsLimit=_hardResultsLimit - In the implementation block
-(void)setFeedID:(NSString *)arg1 ;
-(id)init;
-(unsigned long long)startOrder;
-(NSData *)startCursor;
-(unsigned long long)orderLimit;
-(unsigned long long)softResultsLimit;
-(unsigned long long)hardResultsLimit;
-(void)setStartOrder:(unsigned long long)arg1 ;
-(void)setStartCursor:(NSData *)arg1 ;
-(void)setOrderLimit:(unsigned long long)arg1 ;
-(void)setSoftResultsLimit:(unsigned long long)arg1 ;
-(void)setHardResultsLimit:(unsigned long long)arg1 ;
-(id)description;
-(NSString *)feedID;
@end

