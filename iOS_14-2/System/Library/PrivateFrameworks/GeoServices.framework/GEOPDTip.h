/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString, GEOPDTipUser;

@interface GEOPDTip : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _snippets;
	NSString* _tipId;
	double _tipTime;
	GEOPDTipUser* _tipster;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_tipTime : 1;
		unsigned read_unknownFields : 1;
		unsigned read_snippets : 1;
		unsigned read_tipId : 1;
		unsigned read_tipster : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * snippets; 
@property (assign,nonatomic) BOOL hasTipTime; 
@property (assign,nonatomic) double tipTime; 
@property (nonatomic,readonly) BOOL hasTipster; 
@property (nonatomic,retain) GEOPDTipUser * tipster; 
@property (nonatomic,readonly) BOOL hasTipId; 
@property (nonatomic,retain) NSString * tipId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)snippetType;
+(BOOL)isValid:(id)arg1 ;
+(id)tipsForPlaceData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(NSString *)tipId;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasTipTime;
-(double)tipTime;
-(GEOPDTipUser *)tipster;
-(NSMutableArray *)snippets;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasTipId;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addSnippet:(id)arg1 ;
-(unsigned long long)snippetsCount;
-(void)clearSnippets;
-(id)snippetAtIndex:(unsigned long long)arg1 ;
-(void)setSnippets:(NSMutableArray *)arg1 ;
-(id)description;
-(void)setTipId:(NSString *)arg1 ;
-(void)setTipTime:(double)arg1 ;
-(void)setTipster:(GEOPDTipUser *)arg1 ;
-(void)setHasTipTime:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTipster;
@end

