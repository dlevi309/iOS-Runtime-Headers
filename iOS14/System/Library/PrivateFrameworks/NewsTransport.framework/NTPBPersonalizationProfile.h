/*
* Generated on Thursday, January 14, 2021 at 2:23:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSDictionary;

@interface NTPBPersonalizationProfile : PBCodable <NSCopying> {

	NSMutableArray* _aggregates;
	NSMutableArray* _histories;

}

@property (nonatomic,readonly) NSDictionary * aggregatesByFeatureKey; 
@property (nonatomic,readonly) NSDictionary * historiesByInstanceIdentifier; 
@property (nonatomic,retain) NSMutableArray * aggregates;                                 //@synthesize aggregates=_aggregates - In the implementation block
@property (nonatomic,retain) NSMutableArray * histories;                                  //@synthesize histories=_histories - In the implementation block
+(Class)historiesType;
+(Class)aggregatesType;
-(id)historyForInstanceIdentifier:(id)arg1 ;
-(unsigned long long)lastChangeNumberForInstanceIdentifier:(id)arg1 ;
-(NSDictionary *)historiesByInstanceIdentifier;
-(NSDictionary *)aggregatesByFeatureKey;
-(id)dictionaryRepresentation;
-(NSMutableArray *)aggregates;
-(void)mergeFrom:(id)arg1 ;
-(void)addAggregates:(id)arg1 ;
-(void)addHistories:(id)arg1 ;
-(void)clearAggregates;
-(unsigned long long)aggregatesCount;
-(id)aggregatesAtIndex:(unsigned long long)arg1 ;
-(void)clearHistories;
-(unsigned long long)historiesCount;
-(id)historiesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)histories;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHistories:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAggregates:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

