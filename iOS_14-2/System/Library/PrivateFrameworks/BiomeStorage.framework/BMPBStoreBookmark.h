/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
*/

#import <BiomeStorage/BiomeStorage-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BMPBStoreBookmark : PBCodable <NSCopying> {

	double _iterationStartTime;
	unsigned _offset;
	NSString* _segmentName;
	NSString* _streamId;
	SCD_Struct_BM5 _has;

}

@property (nonatomic,readonly) BOOL hasStreamId; 
@property (nonatomic,retain) NSString * streamId;                     //@synthesize streamId=_streamId - In the implementation block
@property (nonatomic,readonly) BOOL hasSegmentName; 
@property (nonatomic,retain) NSString * segmentName;                  //@synthesize segmentName=_segmentName - In the implementation block
@property (assign,nonatomic) BOOL hasIterationStartTime; 
@property (assign,nonatomic) double iterationStartTime;               //@synthesize iterationStartTime=_iterationStartTime - In the implementation block
@property (assign,nonatomic) BOOL hasOffset; 
@property (assign,nonatomic) unsigned offset;                         //@synthesize offset=_offset - In the implementation block
-(NSString *)segmentName;
-(id)dictionaryRepresentation;
-(BOOL)hasSegmentName;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasOffset:(BOOL)arg1 ;
-(unsigned)offset;
-(id)description;
-(void)setSegmentName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setOffset:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasOffset;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStreamId:(NSString *)arg1 ;
-(void)setIterationStartTime:(double)arg1 ;
-(BOOL)hasStreamId;
-(void)setHasIterationStartTime:(BOOL)arg1 ;
-(BOOL)hasIterationStartTime;
-(NSString *)streamId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)iterationStartTime;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

