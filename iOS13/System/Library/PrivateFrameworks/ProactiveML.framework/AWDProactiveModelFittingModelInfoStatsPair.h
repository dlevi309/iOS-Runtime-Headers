/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setModelInfo:(AWDProactiveModelFittingModelInfo *)arg1 ;
-(AWDProactiveModelFittingModelInfo *)modelInfo;
-(AWDProactiveModelFittingMinibatchStats *)stats;
-(void)setStats:(AWDProactiveModelFittingMinibatchStats *)arg1 ;
-(BOOL)hasModelInfo;
-(BOOL)hasStats;
@end

