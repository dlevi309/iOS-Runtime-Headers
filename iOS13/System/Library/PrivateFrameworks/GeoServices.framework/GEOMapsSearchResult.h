/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOAddress, GEOPlaceActionDetails;

@interface GEOMapsSearchResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOAddress* _address;
	unsigned long long _muid;
	GEOPlaceActionDetails* _placeActionDetails;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_muid : 1;
		unsigned read_address : 1;
		unsigned read_placeActionDetails : 1;
		unsigned wrote_address : 1;
		unsigned wrote_muid : 1;
		unsigned wrote_placeActionDetails : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) GEOAddress * address; 
@property (nonatomic,readonly) BOOL hasPlaceActionDetails; 
@property (nonatomic,retain) GEOPlaceActionDetails * placeActionDetails; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOAddress *)address;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAddress:(GEOAddress *)arg1 ;
-(BOOL)hasAddress;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(void)_readAddress;
-(void)_readPlaceActionDetails;
-(GEOPlaceActionDetails *)placeActionDetails;
-(void)setPlaceActionDetails:(GEOPlaceActionDetails *)arg1 ;
-(BOOL)hasPlaceActionDetails;
@end

