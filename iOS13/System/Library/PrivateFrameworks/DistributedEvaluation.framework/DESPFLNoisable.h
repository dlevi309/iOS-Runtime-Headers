/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
*/

#import <DistributedEvaluation/DistributedEvaluation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface DESPFLNoisable : PBCodable <NSCopying> {

	SCD_Struct_DE1* _data32s;
	SCD_Struct_DE2* _datas;
	double _weight;
	unsigned _iteration;
	NSString* _recipeId;
	NSString* _uuid;
	int _version;
	SCD_Struct_DE3 _has;

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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(int)arg1 ;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setWeight:(double)arg1 ;
-(double)weight;
-(double)dataAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(unsigned long long)datasCount;
-(void)clearDatas;
-(void)addData:(double)arg1 ;
-(double*)datas;
-(BOOL)hasUuid;
-(NSString *)recipeId;
-(void)setRecipeId:(NSString *)arg1 ;
-(unsigned long long)data32sCount;
-(void)clearData32s;
-(float)data32AtIndex:(unsigned long long)arg1 ;
-(void)addData32:(float)arg1 ;
-(BOOL)hasRecipeId;
-(void)setIteration:(unsigned)arg1 ;
-(void)setHasIteration:(BOOL)arg1 ;
-(BOOL)hasIteration;
-(void)setHasWeight:(BOOL)arg1 ;
-(BOOL)hasWeight;
-(void)setDatas:(double*)arg1 count:(unsigned long long)arg2 ;
-(float*)data32s;
-(void)setData32s:(float*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)iteration;
@end

