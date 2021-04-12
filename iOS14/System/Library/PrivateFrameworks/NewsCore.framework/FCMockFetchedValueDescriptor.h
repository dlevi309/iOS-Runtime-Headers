/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <NewsCore/FCFetchedValueDescriptor.h>

@protocol NFCopying;
@class NSError, NSArray;

@interface FCMockFetchedValueDescriptor : FCFetchedValueDescriptor {

	/*^block*/id _willFetchBlock;
	id<NFCopying> _fetchValue;
	NSError* _fetchError;
	id<NFCopying> _fastCachedValue;
	/*^block*/id _valueEqualityTest;
	unsigned long long _willFetchCount;
	long long _lastFetchQualityOfService;
	unsigned long long _lastFetchCachePolicy;
	NSArray* _myInputManagers;

}

@property (assign,nonatomic) long long lastFetchQualityOfService;                  //@synthesize lastFetchQualityOfService=_lastFetchQualityOfService - In the implementation block
@property (assign,nonatomic) unsigned long long lastFetchCachePolicy;              //@synthesize lastFetchCachePolicy=_lastFetchCachePolicy - In the implementation block
@property (assign,nonatomic) unsigned long long willFetchCount;                    //@synthesize willFetchCount=_willFetchCount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * myInputManagers;                     //@synthesize myInputManagers=_myInputManagers - In the implementation block
@property (nonatomic,copy) id willFetchBlock;                                      //@synthesize willFetchBlock=_willFetchBlock - In the implementation block
@property (nonatomic,copy) id<NFCopying> fetchValue;                               //@synthesize fetchValue=_fetchValue - In the implementation block
@property (nonatomic,copy) NSError * fetchError;                                   //@synthesize fetchError=_fetchError - In the implementation block
@property (nonatomic,copy) id<NFCopying> fastCachedValue;                          //@synthesize fastCachedValue=_fastCachedValue - In the implementation block
@property (nonatomic,copy) id valueEqualityTest;                                   //@synthesize valueEqualityTest=_valueEqualityTest - In the implementation block
-(void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(NSError *)fetchError;
-(id<NFCopying>)fastCachedValue;
-(id)initWithInputManagers:(id)arg1 ;
-(id)willFetchBlock;
-(unsigned long long)willFetchCount;
-(void)setWillFetchCount:(unsigned long long)arg1 ;
-(void)setLastFetchCachePolicy:(unsigned long long)arg1 ;
-(id)valueEqualityTest;
-(BOOL)isValue:(id)arg1 equalToValue:(id)arg2 ;
-(void)setFetchError:(NSError *)arg1 ;
-(void)setLastFetchQualityOfService:(long long)arg1 ;
-(NSArray *)myInputManagers;
-(void)setWillFetchBlock:(id)arg1 ;
-(void)setFetchValue:(id<NFCopying>)arg1 ;
-(void)setFastCachedValue:(id<NFCopying>)arg1 ;
-(void)setValueEqualityTest:(id)arg1 ;
-(long long)lastFetchQualityOfService;
-(unsigned long long)lastFetchCachePolicy;
-(id)inputManagers;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NFCopying>)fetchValue;
@end

