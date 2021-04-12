/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBForYouTodaySectionSpecificConfig : PBCodable <NSCopying> {

	unsigned long long _cutoffTime;
	unsigned long long _headlinesPerFeedFetchCount;
	unsigned long long _subscriptionsFetchCount;
	int _fetchingBin;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) BOOL hasCutoffTime; 
@property (assign,nonatomic) unsigned long long cutoffTime;                              //@synthesize cutoffTime=_cutoffTime - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriptionsFetchCount; 
@property (assign,nonatomic) unsigned long long subscriptionsFetchCount;                 //@synthesize subscriptionsFetchCount=_subscriptionsFetchCount - In the implementation block
@property (assign,nonatomic) BOOL hasHeadlinesPerFeedFetchCount; 
@property (assign,nonatomic) unsigned long long headlinesPerFeedFetchCount;              //@synthesize headlinesPerFeedFetchCount=_headlinesPerFeedFetchCount - In the implementation block
@property (assign,nonatomic) BOOL hasFetchingBin; 
@property (assign,nonatomic) int fetchingBin;                                            //@synthesize fetchingBin=_fetchingBin - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setCutoffTime:(unsigned long long)arg1 ;
-(void)setFetchingBin:(int)arg1 ;
-(void)setSubscriptionsFetchCount:(unsigned long long)arg1 ;
-(void)setHeadlinesPerFeedFetchCount:(unsigned long long)arg1 ;
-(void)setHasCutoffTime:(BOOL)arg1 ;
-(BOOL)hasCutoffTime;
-(unsigned long long)cutoffTime;
-(void)setHasSubscriptionsFetchCount:(BOOL)arg1 ;
-(BOOL)hasSubscriptionsFetchCount;
-(void)setHasHeadlinesPerFeedFetchCount:(BOOL)arg1 ;
-(BOOL)hasHeadlinesPerFeedFetchCount;
-(int)fetchingBin;
-(void)setHasFetchingBin:(BOOL)arg1 ;
-(BOOL)hasFetchingBin;
-(unsigned long long)subscriptionsFetchCount;
-(unsigned long long)headlinesPerFeedFetchCount;
@end

