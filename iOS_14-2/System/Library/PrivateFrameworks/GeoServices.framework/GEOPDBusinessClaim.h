/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPDBusinessClaim : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _buttonLabel;
	NSString* _descriptionText;
	NSString* _titleText;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _buttonEnabled;
	struct {
		unsigned has_buttonEnabled : 1;
		unsigned read_unknownFields : 1;
		unsigned read_buttonLabel : 1;
		unsigned read_descriptionText : 1;
		unsigned read_titleText : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasButtonLabel; 
@property (nonatomic,retain) NSString * buttonLabel; 
@property (assign,nonatomic) BOOL hasButtonEnabled; 
@property (assign,nonatomic) BOOL buttonEnabled; 
@property (nonatomic,readonly) BOOL hasTitleText; 
@property (nonatomic,retain) NSString * titleText; 
@property (nonatomic,readonly) BOOL hasDescriptionText; 
@property (nonatomic,retain) NSString * descriptionText; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)businessClaimForPlaceData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)descriptionText;
-(void)setButtonLabel:(NSString *)arg1 ;
-(void)setButtonEnabled:(BOOL)arg1 ;
-(void)setDescriptionText:(NSString *)arg1 ;
-(BOOL)hasButtonLabel;
-(BOOL)buttonEnabled;
-(void)setHasButtonEnabled:(BOOL)arg1 ;
-(BOOL)hasButtonEnabled;
-(BOOL)hasTitleText;
-(BOOL)hasDescriptionText;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)titleText;
-(id)initWithData:(id)arg1 ;
-(NSString *)buttonLabel;
-(void)setTitleText:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

