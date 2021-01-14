/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBForYouTodaySectionSpecificConfig : PBCodable <NSCopying> {

	unsigned long long _cutoffTime;
	unsigned long long _headlinesPerFeedFetchCount;
	unsigned long long _minimumUpdateInterval;
	unsigned long long _subscriptionsFetchCount;
	int _fetchingBin;
	SCD_Struct_NT11 _has;

}

@property (assign,nonatomic) BOOL hasCutoffTime; 
@property (assign,nonatomic) unsigned long long cutoffTime;                              //@synthesize cutoffTime=_cutoffTime - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriptionsFetchCount; 
@property (assign,nonatomic) unsigned long long subscriptionsFetchCount;                 //@synthesize subscriptionsFetchCount=_subscriptionsFetchCount - In the implementation block
@property (assign,nonatomic) BOOL hasHeadlinesPerFeedFetchCount; 
@property (assign,nonatomic) unsigned long long headlinesPerFeedFetchCount;              //@synthesize headlinesPerFeedFetchCount=_headlinesPerFeedFetchCount - In the implementation block
@property (assign,nonatomic) BOOL hasFetchingBin; 
@property (assign,nonatomic) int fetchingBin;                                            //@synthesize fetchingBin=_fetchingBin - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumUpdateInterval; 
@property (assign,nonatomic) unsigned long long minimumUpdateInterval;                   //@synthesize minimumUpdateInterval=_minimumUpdateInterval - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(int)fetchingBin;
-(void)setHasCutoffTime:(BOOL)arg1 ;
-(BOOL)hasCutoffTime;
-(void)setHasHeadlinesPerFeedFetchCount:(BOOL)arg1 ;
-(void)setHasFetchingBin:(BOOL)arg1 ;
-(BOOL)hasHeadlinesPerFeedFetchCount;
-(BOOL)hasFetchingBin;
-(void)setHasMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasMinimumUpdateInterval;
-(unsigned long long)cutoffTime;
-(unsigned long long)headlinesPerFeedFetchCount;
-(unsigned long long)minimumUpdateInterval;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasSubscriptionsFetchCount:(BOOL)arg1 ;
-(BOOL)hasSubscriptionsFetchCount;
-(unsigned long long)subscriptionsFetchCount;
-(void)setCutoffTime:(unsigned long long)arg1 ;
-(void)setMinimumUpdateInterval:(unsigned long long)arg1 ;
-(void)setFetchingBin:(int)arg1 ;
-(void)setSubscriptionsFetchCount:(unsigned long long)arg1 ;
-(void)setHeadlinesPerFeedFetchCount:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

