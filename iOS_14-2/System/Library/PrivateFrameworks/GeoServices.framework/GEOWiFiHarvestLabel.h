/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOWiFiHarvestLabel : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _comment;
	NSString* _internalIdentifier;
	NSString* _venueCategory;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _networkType;
	int _originator;
	struct {
		unsigned has_networkType : 1;
		unsigned has_originator : 1;
		unsigned read_comment : 1;
		unsigned read_internalIdentifier : 1;
		unsigned read_venueCategory : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasOriginator; 
@property (assign,nonatomic) int originator; 
@property (nonatomic,readonly) BOOL hasVenueCategory; 
@property (nonatomic,retain) NSString * venueCategory; 
@property (nonatomic,readonly) BOOL hasComment; 
@property (nonatomic,retain) NSString * comment; 
@property (assign,nonatomic) BOOL hasNetworkType; 
@property (assign,nonatomic) int networkType; 
@property (nonatomic,readonly) BOOL hasInternalIdentifier; 
@property (nonatomic,retain) NSString * internalIdentifier; 
+(BOOL)isValid:(id)arg1 ;
-(int)networkType;
-(void)setNetworkType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)comment;
-(void)setComment:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasNetworkType;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasNetworkType:(BOOL)arg1 ;
-(id)description;
-(id)networkTypeAsString:(int)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)internalIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(int)originator;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasComment;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)venueCategory;
-(void)setOriginator:(int)arg1 ;
-(void)setVenueCategory:(NSString *)arg1 ;
-(void)setInternalIdentifier:(NSString *)arg1 ;
-(void)setHasOriginator:(BOOL)arg1 ;
-(BOOL)hasOriginator;
-(id)originatorAsString:(int)arg1 ;
-(BOOL)hasVenueCategory;
-(int)StringAsOriginator:(id)arg1 ;
-(BOOL)hasInternalIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

