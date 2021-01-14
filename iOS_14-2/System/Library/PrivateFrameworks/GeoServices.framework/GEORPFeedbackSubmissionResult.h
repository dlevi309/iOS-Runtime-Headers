/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEORPFeedbackSubmissionResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _feedbackId;
	NSMutableArray* _imageIdMapEntrys;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_feedbackId : 1;
		unsigned read_imageIdMapEntrys : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasFeedbackId; 
@property (nonatomic,retain) NSString * feedbackId; 
@property (nonatomic,retain) NSMutableArray * imageIdMapEntrys; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)imageIdMapEntryType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setFeedbackId:(NSString *)arg1 ;
-(BOOL)hasFeedbackId;
-(id)initWithData:(id)arg1 ;
-(void)addImageIdMapEntry:(id)arg1 ;
-(unsigned long long)imageIdMapEntrysCount;
-(void)clearImageIdMapEntrys;
-(id)imageIdMapEntryAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)imageIdMapEntrys;
-(void)setImageIdMapEntrys:(NSMutableArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)feedbackId;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

