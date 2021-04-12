/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPDExternalActionDetail : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _actionLabel;
	NSString* _actionUrlComponent;
	NSString* _actionUrlVerb;
	NSString* _logoId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_actionLabel : 1;
		unsigned read_actionUrlComponent : 1;
		unsigned read_actionUrlVerb : 1;
		unsigned read_logoId : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_actionLabel : 1;
		unsigned wrote_actionUrlComponent : 1;
		unsigned wrote_actionUrlVerb : 1;
		unsigned wrote_logoId : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasActionLabel; 
@property (nonatomic,retain) NSString * actionLabel; 
@property (nonatomic,readonly) BOOL hasLogoId; 
@property (nonatomic,retain) NSString * logoId; 
@property (nonatomic,readonly) BOOL hasActionUrlComponent; 
@property (nonatomic,retain) NSString * actionUrlComponent; 
@property (nonatomic,readonly) BOOL hasActionUrlVerb; 
@property (nonatomic,retain) NSString * actionUrlVerb; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
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
-(void)_readActionUrlComponent;
-(NSString *)actionUrlComponent;
-(void)setActionUrlComponent:(NSString *)arg1 ;
-(BOOL)hasActionUrlComponent;
-(void)_readActionLabel;
-(void)_readLogoId;
-(void)_readActionUrlVerb;
-(NSString *)actionLabel;
-(NSString *)logoId;
-(NSString *)actionUrlVerb;
-(void)setActionLabel:(NSString *)arg1 ;
-(void)setLogoId:(NSString *)arg1 ;
-(void)setActionUrlVerb:(NSString *)arg1 ;
-(BOOL)hasActionLabel;
-(BOOL)hasLogoId;
-(BOOL)hasActionUrlVerb;
@end

