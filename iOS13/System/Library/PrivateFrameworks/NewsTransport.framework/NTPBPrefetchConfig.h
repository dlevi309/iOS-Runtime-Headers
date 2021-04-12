/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBPrefetchConfig : PBCodable <NSCopying> {

	double _backgroundFetchMinimumInterval;
	long long _feedPrefetchFavoritesLimit;
	long long _prefetchedForYouExpiration;
	BOOL _backgroundFetchEnabled;
	BOOL _backgroundFetchEnabled2;
	BOOL _feedPrefetchForYou;
	SCD_Struct_NT8 _has;

}

@property (assign,nonatomic) BOOL hasBackgroundFetchEnabled; 
@property (assign,nonatomic) BOOL backgroundFetchEnabled;                         //@synthesize backgroundFetchEnabled=_backgroundFetchEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasBackgroundFetchMinimumInterval; 
@property (assign,nonatomic) double backgroundFetchMinimumInterval;               //@synthesize backgroundFetchMinimumInterval=_backgroundFetchMinimumInterval - In the implementation block
@property (assign,nonatomic) BOOL hasFeedPrefetchForYou; 
@property (assign,nonatomic) BOOL feedPrefetchForYou;                             //@synthesize feedPrefetchForYou=_feedPrefetchForYou - In the implementation block
@property (assign,nonatomic) BOOL hasFeedPrefetchFavoritesLimit; 
@property (assign,nonatomic) long long feedPrefetchFavoritesLimit;                //@synthesize feedPrefetchFavoritesLimit=_feedPrefetchFavoritesLimit - In the implementation block
@property (assign,nonatomic) BOOL hasBackgroundFetchEnabled2; 
@property (assign,nonatomic) BOOL backgroundFetchEnabled2;                        //@synthesize backgroundFetchEnabled2=_backgroundFetchEnabled2 - In the implementation block
@property (assign,nonatomic) BOOL hasPrefetchedForYouExpiration; 
@property (assign,nonatomic) long long prefetchedForYouExpiration;                //@synthesize prefetchedForYouExpiration=_prefetchedForYouExpiration - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)backgroundFetchEnabled2;
-(double)backgroundFetchMinimumInterval;
-(BOOL)feedPrefetchForYou;
-(long long)feedPrefetchFavoritesLimit;
-(BOOL)hasPrefetchedForYouExpiration;
-(long long)prefetchedForYouExpiration;
-(void)setBackgroundFetchEnabled:(BOOL)arg1 ;
-(void)setHasBackgroundFetchEnabled:(BOOL)arg1 ;
-(BOOL)hasBackgroundFetchEnabled;
-(void)setBackgroundFetchMinimumInterval:(double)arg1 ;
-(void)setHasBackgroundFetchMinimumInterval:(BOOL)arg1 ;
-(BOOL)hasBackgroundFetchMinimumInterval;
-(void)setFeedPrefetchForYou:(BOOL)arg1 ;
-(void)setHasFeedPrefetchForYou:(BOOL)arg1 ;
-(BOOL)hasFeedPrefetchForYou;
-(void)setFeedPrefetchFavoritesLimit:(long long)arg1 ;
-(void)setHasFeedPrefetchFavoritesLimit:(BOOL)arg1 ;
-(BOOL)hasFeedPrefetchFavoritesLimit;
-(void)setBackgroundFetchEnabled2:(BOOL)arg1 ;
-(void)setHasBackgroundFetchEnabled2:(BOOL)arg1 ;
-(BOOL)hasBackgroundFetchEnabled2;
-(void)setPrefetchedForYouExpiration:(long long)arg1 ;
-(void)setHasPrefetchedForYouExpiration:(BOOL)arg1 ;
-(BOOL)backgroundFetchEnabled;
@end

