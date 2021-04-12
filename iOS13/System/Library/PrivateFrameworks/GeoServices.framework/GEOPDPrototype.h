/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOPDPrototype : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _componentType;
	NSMutableArray* _values;
	NSString* _version;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_componentType : 1;
		unsigned read_values : 1;
		unsigned read_version : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_componentType : 1;
		unsigned wrote_values : 1;
		unsigned wrote_version : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasComponentType; 
@property (nonatomic,retain) NSString * componentType; 
@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) NSString * version; 
@property (nonatomic,retain) NSMutableArray * values; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)valueType;
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)values;
-(NSString *)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addValue:(id)arg1 ;
-(unsigned long long)valuesCount;
-(void)clearValues;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(void)_readVersion;
-(void)_readComponentType;
-(void)_readValues;
-(void)_addNoFlagsValue:(id)arg1 ;
-(NSString *)componentType;
-(void)setComponentType:(NSString *)arg1 ;
-(BOOL)hasComponentType;
@end

