/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOPDAssociatedApp : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _alternateAppAdamIds;
	NSString* _preferredAppAdamId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_alternateAppAdamIds : 1;
		unsigned read_preferredAppAdamId : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_alternateAppAdamIds : 1;
		unsigned wrote_preferredAppAdamId : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPreferredAppAdamId; 
@property (nonatomic,retain) NSString * preferredAppAdamId; 
@property (nonatomic,retain) NSMutableArray * alternateAppAdamIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)associatedAppForPlaceData:(id)arg1 ;
+(Class)alternateAppAdamIdType;
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
-(void)_readPreferredAppAdamId;
-(void)_readAlternateAppAdamIds;
-(void)_addNoFlagsAlternateAppAdamId:(id)arg1 ;
-(NSString *)preferredAppAdamId;
-(NSMutableArray *)alternateAppAdamIds;
-(void)setPreferredAppAdamId:(NSString *)arg1 ;
-(unsigned long long)alternateAppAdamIdsCount;
-(void)clearAlternateAppAdamIds;
-(id)alternateAppAdamIdAtIndex:(unsigned long long)arg1 ;
-(void)addAlternateAppAdamId:(id)arg1 ;
-(BOOL)hasPreferredAppAdamId;
-(void)setAlternateAppAdamIds:(NSMutableArray *)arg1 ;
@end

