/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, _DKPRSource, _DKPRStream, _DKPRValue;

@interface _DKPREvent : PBCodable <NSCopying> {

	double _creationDate;
	double _endDate;
	double _startDate;
	NSString* _identifier;
	NSMutableArray* _metadatas;
	_DKPRSource* _source;
	_DKPRStream* _stream;
	_DKPRValue* _value;
	SCD_Struct_DK5 _has;

}

@property (nonatomic,retain) _DKPRStream * stream;                    //@synthesize stream=_stream - In the implementation block
@property (assign,nonatomic) double startDate;                        //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) double endDate;                          //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) _DKPRValue * value;                      //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,retain) _DKPRSource * source;                    //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSMutableArray * metadatas;              //@synthesize metadatas=_metadatas - In the implementation block
@property (assign,nonatomic) BOOL hasCreationDate; 
@property (assign,nonatomic) double creationDate;                     //@synthesize creationDate=_creationDate - In the implementation block
+(Class)metadataType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource:(_DKPRSource *)arg1 ;
-(NSString *)identifier;
-(_DKPRSource *)source;
-(_DKPRValue *)value;
-(void)setValue:(_DKPRValue *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(double)startDate;
-(double)endDate;
-(id)dictionaryRepresentation;
-(double)creationDate;
-(void)writeTo:(id)arg1 ;
-(_DKPRStream *)stream;
-(void)setStartDate:(double)arg1 ;
-(void)setEndDate:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCreationDate:(double)arg1 ;
-(void)setStream:(_DKPRStream *)arg1 ;
-(void)addMetadata:(id)arg1 ;
-(NSMutableArray *)metadatas;
-(unsigned long long)metadatasCount;
-(void)clearMetadatas;
-(id)metadataAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSource;
-(void)setHasCreationDate:(BOOL)arg1 ;
-(BOOL)hasCreationDate;
-(void)setMetadatas:(NSMutableArray *)arg1 ;
@end

