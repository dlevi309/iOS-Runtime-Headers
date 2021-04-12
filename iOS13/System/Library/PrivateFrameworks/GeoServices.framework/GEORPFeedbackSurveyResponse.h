/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEORPFeedbackSurveyResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _optionDescription;
	NSString* _optionId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_optionDescription : 1;
		unsigned read_optionId : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_optionDescription : 1;
		unsigned wrote_optionId : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasOptionId; 
@property (nonatomic,retain) NSString * optionId; 
@property (nonatomic,readonly) BOOL hasOptionDescription; 
@property (nonatomic,retain) NSString * optionDescription; 
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
-(void)_readOptionId;
-(void)_readOptionDescription;
-(NSString *)optionId;
-(NSString *)optionDescription;
-(void)setOptionId:(NSString *)arg1 ;
-(void)setOptionDescription:(NSString *)arg1 ;
-(BOOL)hasOptionId;
-(BOOL)hasOptionDescription;
@end

