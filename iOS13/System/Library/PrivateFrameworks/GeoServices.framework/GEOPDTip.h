/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString, GEOPDUser;

@interface GEOPDTip : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _snippets;
	NSString* _tipId;
	double _tipTime;
	GEOPDUser* _tipster;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_tipTime : 1;
		unsigned read_unknownFields : 1;
		unsigned read_snippets : 1;
		unsigned read_tipId : 1;
		unsigned read_tipster : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_snippets : 1;
		unsigned wrote_tipId : 1;
		unsigned wrote_tipTime : 1;
		unsigned wrote_tipster : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * snippets; 
@property (assign,nonatomic) BOOL hasTipTime; 
@property (assign,nonatomic) double tipTime; 
@property (nonatomic,readonly) BOOL hasTipster; 
@property (nonatomic,retain) GEOPDUser * tipster; 
@property (nonatomic,readonly) BOOL hasTipId; 
@property (nonatomic,retain) NSString * tipId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)tipsForPlaceData:(id)arg1 ;
+(Class)snippetType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSMutableArray *)snippets;
-(BOOL)hasTipTime;
-(double)tipTime;
-(GEOPDUser *)tipster;
-(BOOL)hasTipId;
-(NSString *)tipId;
-(void)_readSnippets;
-(void)_addNoFlagsSnippet:(id)arg1 ;
-(unsigned long long)snippetsCount;
-(void)clearSnippets;
-(id)snippetAtIndex:(unsigned long long)arg1 ;
-(void)addSnippet:(id)arg1 ;
-(void)setSnippets:(NSMutableArray *)arg1 ;
-(void)_readTipster;
-(void)_readTipId;
-(void)setTipster:(GEOPDUser *)arg1 ;
-(void)setTipId:(NSString *)arg1 ;
-(void)setTipTime:(double)arg1 ;
-(void)setHasTipTime:(BOOL)arg1 ;
-(BOOL)hasTipster;
@end

