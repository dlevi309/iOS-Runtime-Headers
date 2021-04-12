/*
* Generated on Monday, March 1, 2021 at 2:32:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(Class)aggregatesType;
+(Class)historiesType;
-(NSDictionary *)aggregatesByFeatureKey;
-(NSDictionary *)historiesByInstanceIdentifier;
-(id)historyForInstanceIdentifier:(id)arg1 ;
-(unsigned long long)lastChangeNumberForInstanceIdentifier:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)aggregates;
-(void)setAggregates:(NSMutableArray *)arg1 ;
-(void)setHistories:(NSMutableArray *)arg1 ;
-(NSMutableArray *)histories;
-(void)addAggregates:(id)arg1 ;
-(void)addHistories:(id)arg1 ;
-(void)clearAggregates;
-(unsigned long long)aggregatesCount;
-(id)aggregatesAtIndex:(unsigned long long)arg1 ;
-(void)clearHistories;
-(unsigned long long)historiesCount;
-(id)historiesAtIndex:(unsigned long long)arg1 ;
@end

