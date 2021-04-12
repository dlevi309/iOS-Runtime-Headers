/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
*/

#import <DrawingKit/DrawingKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSData;

@interface HWPDrawing : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _compressionAlgorithm;
	unsigned _decompressedLength;
	NSData* _encodedCanvasSize;
	NSData* _encodedStrokesFrame;
	unsigned _strokeDataFieldCount;
	NSData* _strokes;
	unsigned _strokesCount;
	unsigned _version;
	SCD_Struct_HW17 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                               //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasEncodedCanvasSize; 
@property (nonatomic,retain) NSData * encodedCanvasSize;                     //@synthesize encodedCanvasSize=_encodedCanvasSize - In the implementation block
@property (nonatomic,readonly) BOOL hasEncodedStrokesFrame; 
@property (nonatomic,retain) NSData * encodedStrokesFrame;                   //@synthesize encodedStrokesFrame=_encodedStrokesFrame - In the implementation block
@property (assign,nonatomic) BOOL hasStrokesCount; 
@property (assign,nonatomic) unsigned strokesCount;                          //@synthesize strokesCount=_strokesCount - In the implementation block
@property (assign,nonatomic) BOOL hasCompressionAlgorithm; 
@property (assign,nonatomic) int compressionAlgorithm;                       //@synthesize compressionAlgorithm=_compressionAlgorithm - In the implementation block
@property (assign,nonatomic) BOOL hasDecompressedLength; 
@property (assign,nonatomic) unsigned decompressedLength;                    //@synthesize decompressedLength=_decompressedLength - In the implementation block
@property (assign,nonatomic) BOOL hasStrokeDataFieldCount; 
@property (assign,nonatomic) unsigned strokeDataFieldCount;                  //@synthesize strokeDataFieldCount=_strokeDataFieldCount - In the implementation block
@property (nonatomic,readonly) BOOL hasStrokes; 
@property (nonatomic,retain) NSData * strokes;                               //@synthesize strokes=_strokes - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(PBUnknownFields *)unknownFields;
-(NSData *)strokes;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)setStrokes:(NSData *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasStrokes;
-(int)compressionAlgorithm;
-(unsigned)decompressedLength;
-(NSData *)encodedCanvasSize;
-(NSData *)encodedStrokesFrame;
-(unsigned)strokesCount;
-(unsigned)strokeDataFieldCount;
-(void)setCompressionAlgorithm:(int)arg1 ;
-(void)setDecompressedLength:(unsigned)arg1 ;
-(void)setEncodedCanvasSize:(NSData *)arg1 ;
-(void)setEncodedStrokesFrame:(NSData *)arg1 ;
-(void)setStrokesCount:(unsigned)arg1 ;
-(void)setStrokeDataFieldCount:(unsigned)arg1 ;
-(BOOL)hasEncodedCanvasSize;
-(BOOL)hasEncodedStrokesFrame;
-(void)setHasStrokesCount:(BOOL)arg1 ;
-(BOOL)hasStrokesCount;
-(void)setHasCompressionAlgorithm:(BOOL)arg1 ;
-(BOOL)hasCompressionAlgorithm;
-(id)compressionAlgorithmAsString:(int)arg1 ;
-(int)StringAsCompressionAlgorithm:(id)arg1 ;
-(void)setHasDecompressedLength:(BOOL)arg1 ;
-(BOOL)hasDecompressedLength;
-(void)setHasStrokeDataFieldCount:(BOOL)arg1 ;
-(BOOL)hasStrokeDataFieldCount;
@end

