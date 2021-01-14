/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOLPRVehicleType : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _key;
	NSMutableArray* _subtitles;
	NSMutableArray* _titles;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_key : 1;
		unsigned read_subtitles : 1;
		unsigned read_titles : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key; 
@property (nonatomic,retain) NSMutableArray * titles; 
@property (nonatomic,retain) NSMutableArray * subtitles; 
+(Class)titleType;
+(BOOL)isValid:(id)arg1 ;
+(Class)subtitleType;
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(id)titleAtIndex:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setTitles:(NSMutableArray *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)addTitle:(id)arg1 ;
-(NSMutableArray *)subtitles;
-(unsigned long long)titlesCount;
-(NSString *)key;
-(void)clearTitles;
-(unsigned long long)hash;
-(NSMutableArray *)titles;
-(BOOL)readFrom:(id)arg1 ;
-(void)addSubtitle:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)subtitlesCount;
-(void)clearSubtitles;
-(id)subtitleAtIndex:(unsigned long long)arg1 ;
-(void)setSubtitles:(NSMutableArray *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

