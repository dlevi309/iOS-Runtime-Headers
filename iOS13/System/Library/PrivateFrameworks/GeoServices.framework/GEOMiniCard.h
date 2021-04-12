/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOFormattedString;

@interface GEOMiniCard : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _buttonText;
	GEOFormattedString* _detail;
	GEOFormattedString* _title;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _shouldEmphasize;
	struct {
		unsigned has_shouldEmphasize : 1;
		unsigned read_unknownFields : 1;
		unsigned read_buttonText : 1;
		unsigned read_detail : 1;
		unsigned read_title : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_buttonText : 1;
		unsigned wrote_detail : 1;
		unsigned wrote_title : 1;
		unsigned wrote_shouldEmphasize : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) GEOFormattedString * title; 
@property (nonatomic,readonly) BOOL hasDetail; 
@property (nonatomic,retain) GEOFormattedString * detail; 
@property (nonatomic,readonly) BOOL hasButtonText; 
@property (nonatomic,retain) NSString * buttonText; 
@property (assign,nonatomic) BOOL hasShouldEmphasize; 
@property (assign,nonatomic) BOOL shouldEmphasize; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOFormattedString *)title;
-(void)setTitle:(GEOFormattedString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTitle;
-(void)setDetail:(GEOFormattedString *)arg1 ;
-(GEOFormattedString *)detail;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readDetail;
-(BOOL)hasDetail;
-(void)_readTitle;
-(void)_readButtonText;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
-(BOOL)hasButtonText;
-(BOOL)shouldEmphasize;
-(void)setShouldEmphasize:(BOOL)arg1 ;
-(void)setHasShouldEmphasize:(BOOL)arg1 ;
-(BOOL)hasShouldEmphasize;
@end

