/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingMinibatchStats;

@interface AWDProactiveModelFittingModelInfoStatsPair : PBCodable <NSCopying> {

	AWDProactiveModelFittingModelInfo* _modelInfo;
	AWDProactiveModelFittingMinibatchStats* _stats;

}

@property (nonatomic,readonly) BOOL hasModelInfo; 
@property (nonatomic,retain) AWDProactiveModelFittingModelInfo * modelInfo;               //@synthesize modelInfo=_modelInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasStats; 
@property (nonatomic,retain) AWDProactiveModelFittingMinibatchStats * stats;              //@synthesize stats=_stats - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(AWDProactiveModelFittingMinibatchStats *)stats;
-(void)setModelInfo:(AWDProactiveModelFittingModelInfo *)arg1 ;
-(unsigned long long)hash;
-(void)setStats:(AWDProactiveModelFittingMinibatchStats *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(AWDProactiveModelFittingModelInfo *)modelInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasModelInfo;
-(BOOL)hasStats;
@end

