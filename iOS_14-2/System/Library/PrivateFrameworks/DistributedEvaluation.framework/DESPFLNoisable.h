/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
*/

#import <DistributedEvaluation/DistributedEvaluation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class DESDataTransport, NSString;

@interface DESPFLNoisable : PBCodable <NSCopying> {

	SCD_Struct_DE4* _data32s;
	SCD_Struct_DE5* _datas;
	double _weight;
	DESDataTransport* _dataTransport;
	unsigned _iteration;
	NSString* _recipeId;
	NSString* _uuid;
	int _version;
	SCD_Struct_DE6 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) int version;                                    //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasRecipeId; 
@property (nonatomic,retain) NSString * recipeId;                            //@synthesize recipeId=_recipeId - In the implementation block
@property (assign,nonatomic) BOOL hasIteration; 
@property (assign,nonatomic) unsigned iteration;                             //@synthesize iteration=_iteration - In the implementation block
@property (assign,nonatomic) BOOL hasWeight; 
@property (assign,nonatomic) double weight;                                  //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) unsigned long long datasCount; 
@property (nonatomic,readonly) double* datas; 
@property (nonatomic,readonly) unsigned long long data32sCount; 
@property (nonatomic,readonly) float* data32s; 
@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSString * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) BOOL hasDataTransport; 
@property (nonatomic,retain) DESDataTransport * dataTransport;               //@synthesize dataTransport=_dataTransport - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(double*)datas;
-(NSString *)uuid;
-(double)dataAtIndex:(unsigned long long)arg1 ;
-(void)setWeight:(double)arg1 ;
-(NSString *)recipeId;
-(BOOL)hasUuid;
-(void)mergeFrom:(id)arg1 ;
-(double)weight;
-(id)description;
-(void)addData:(double)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(float*)data32s;
-(int)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasWeight;
-(void)setHasWeight:(BOOL)arg1 ;
-(unsigned long long)datasCount;
-(void)clearDatas;
-(void)setRecipeId:(NSString *)arg1 ;
-(void)setData32s:(float*)arg1 count:(unsigned long long)arg2 ;
-(void)setDatas:(double*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)data32sCount;
-(void)clearData32s;
-(void)setDataTransport:(DESDataTransport *)arg1 ;
-(float)data32AtIndex:(unsigned long long)arg1 ;
-(void)addData32:(float)arg1 ;
-(BOOL)hasRecipeId;
-(void)setIteration:(unsigned)arg1 ;
-(void)setHasIteration:(BOOL)arg1 ;
-(BOOL)hasIteration;
-(BOOL)hasDataTransport;
-(unsigned)iteration;
-(DESDataTransport *)dataTransport;
@end

