/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEOTransitPlaceCard;

@interface GEOPlaceActionDetails : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _actionUrl;
	unsigned long long _animationID;
	unsigned long long _businessID;
	NSString* _destinationApp;
	NSString* _photoId;
	long long _placeID;
	NSString* _richProviderId;
	double _searchResponseRelativeTimestamp;
	unsigned long long _targetID;
	GEOTransitPlaceCard* _transitPlaceCard;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _localSearchProviderID;
	int _resultIndex;
	struct {
		unsigned has_animationID : 1;
		unsigned has_businessID : 1;
		unsigned has_placeID : 1;
		unsigned has_searchResponseRelativeTimestamp : 1;
		unsigned has_targetID : 1;
		unsigned has_localSearchProviderID : 1;
		unsigned has_resultIndex : 1;
		unsigned read_actionUrl : 1;
		unsigned read_destinationApp : 1;
		unsigned read_photoId : 1;
		unsigned read_richProviderId : 1;
		unsigned read_transitPlaceCard : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasBusinessID; 
@property (assign,nonatomic) unsigned long long businessID; 
@property (assign,nonatomic) BOOL hasPlaceID; 
@property (assign,nonatomic) long long placeID; 
@property (assign,nonatomic) BOOL hasLocalSearchProviderID; 
@property (assign,nonatomic) int localSearchProviderID; 
@property (assign,nonatomic) BOOL hasSearchResponseRelativeTimestamp; 
@property (assign,nonatomic) double searchResponseRelativeTimestamp; 
@property (assign,nonatomic) BOOL hasResultIndex; 
@property (assign,nonatomic) int resultIndex; 
@property (assign,nonatomic) BOOL hasAnimationID; 
@property (assign,nonatomic) unsigned long long animationID; 
@property (assign,nonatomic) BOOL hasTargetID; 
@property (assign,nonatomic) unsigned long long targetID; 
@property (nonatomic,readonly) BOOL hasPhotoId; 
@property (nonatomic,retain) NSString * photoId; 
@property (nonatomic,readonly) BOOL hasActionUrl; 
@property (nonatomic,retain) NSString * actionUrl; 
@property (nonatomic,readonly) BOOL hasTransitPlaceCard; 
@property (nonatomic,retain) GEOTransitPlaceCard * transitPlaceCard; 
@property (nonatomic,readonly) BOOL hasRichProviderId; 
@property (nonatomic,retain) NSString * richProviderId; 
@property (nonatomic,readonly) BOOL hasDestinationApp; 
@property (nonatomic,retain) NSString * destinationApp; 
+(id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4 transitCardCategory:(int)arg5 transitSystem:(id)arg6 transitDepartureSequence:(id)arg7 transitIncident:(id)arg8 ;
+(id)actionDetailsWithMapItem:(id)arg1 childPlace:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6 transitSystem:(id)arg7 transitDepartureSequence:(id)arg8 transitIncident:(id)arg9 ;
+(BOOL)isValid:(id)arg1 ;
+(id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4 ;
+(id)actionDetailsWithTargetID:(unsigned long long)arg1 ;
+(id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 ;
+(id)actionDetailsWithChildPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 ;
+(id)actionDetailsWithDetails:(id)arg1 timestamp:(double)arg2 ;
-(id)dictionaryRepresentation;
-(id)initWithMapItem:(id)arg1 childPlace:(id)arg2 relativeTimestamp:(double)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6 transitSystem:(id)arg7 transitDepartureSequence:(id)arg8 transitIncident:(id)arg9 ;
-(int)resultIndex;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(long long)placeID;
-(NSString *)photoId;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setPhotoId:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasResultIndex:(BOOL)arg1 ;
-(id)description;
-(unsigned long long)targetID;
-(BOOL)hasTargetID;
-(void)setBusinessID:(unsigned long long)arg1 ;
-(unsigned long long)animationID;
-(BOOL)hasPhotoId;
-(BOOL)hasActionUrl;
-(BOOL)hasAnimationID;
-(NSString *)richProviderId;
-(GEOTransitPlaceCard *)transitPlaceCard;
-(BOOL)hasRichProviderId;
-(NSString *)destinationApp;
-(BOOL)hasDestinationApp;
-(BOOL)hasSearchResponseRelativeTimestamp;
-(double)searchResponseRelativeTimestamp;
-(BOOL)hasTransitPlaceCard;
-(unsigned long long)businessID;
-(void)setAnimationID:(unsigned long long)arg1 ;
-(void)setActionUrl:(NSString *)arg1 ;
-(void)setDestinationApp:(NSString *)arg1 ;
-(void)setHasAnimationID:(BOOL)arg1 ;
-(void)setHasTargetID:(BOOL)arg1 ;
-(void)setPlaceID:(long long)arg1 ;
-(void)setLocalSearchProviderID:(int)arg1 ;
-(void)setHasBusinessID:(BOOL)arg1 ;
-(BOOL)hasBusinessID;
-(void)setHasPlaceID:(BOOL)arg1 ;
-(int)localSearchProviderID;
-(void)setHasLocalSearchProviderID:(BOOL)arg1 ;
-(BOOL)hasLocalSearchProviderID;
-(unsigned long long)hash;
-(NSString *)actionUrl;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setResultIndex:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasResultIndex;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasPlaceID;
-(void)setSearchResponseRelativeTimestamp:(double)arg1 ;
-(id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4 ;
-(void)setRichProviderId:(NSString *)arg1 ;
-(void)setTargetID:(unsigned long long)arg1 ;
-(void)setTransitPlaceCard:(GEOTransitPlaceCard *)arg1 ;
-(void)setHasSearchResponseRelativeTimestamp:(BOOL)arg1 ;
-(id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

