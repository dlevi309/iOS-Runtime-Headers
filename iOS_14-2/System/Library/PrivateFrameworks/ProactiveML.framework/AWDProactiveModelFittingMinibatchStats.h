/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDProactiveModelFittingMinibatchStats : PBCodable <NSCopying> {

	unsigned long long _batchSize;
	NSMutableArray* _perLabelSupports;
	float _support;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) BOOL hasSupport; 
@property (assign,nonatomic) float support;                                  //@synthesize support=_support - In the implementation block
@property (assign,nonatomic) BOOL hasBatchSize; 
@property (assign,nonatomic) unsigned long long batchSize;                   //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,retain) NSMutableArray * perLabelSupports;              //@synthesize perLabelSupports=_perLabelSupports - In the implementation block
+(Class)perLabelSupportType;
+(id)statsWithSize:(unsigned long long)arg1 support:(float)arg2 ;
+(id)statsWithPerLabelCounts:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)batchSize;
-(float)support;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(id)toDictionary;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSupport:(float)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasSupport:(BOOL)arg1 ;
-(BOOL)hasSupport;
-(void)setHasBatchSize:(BOOL)arg1 ;
-(BOOL)hasBatchSize;
-(void)clearPerLabelSupports;
-(void)addPerLabelSupport:(id)arg1 ;
-(unsigned long long)perLabelSupportsCount;
-(id)perLabelSupportAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)perLabelSupports;
-(void)setPerLabelSupports:(NSMutableArray *)arg1 ;
-(id)combineWithStats:(id)arg1 ;
-(float)supportForLabel:(unsigned long long)arg1 ;
@end

