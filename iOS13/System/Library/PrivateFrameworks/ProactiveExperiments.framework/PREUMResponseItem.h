/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
*/

#import <ProactiveExperiments/ProactiveExperiments-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PREUMResponseItem : PBCodable <NSCopying> {

	unsigned _modelId;
	unsigned _replyTextId;
	unsigned _responseClassId;
	BOOL _isCustomResponse;
	SCD_Struct_PR1 _has;

}

@property (assign,nonatomic) BOOL hasModelId; 
@property (assign,nonatomic) unsigned modelId;                      //@synthesize modelId=_modelId - In the implementation block
@property (assign,nonatomic) BOOL hasResponseClassId; 
@property (assign,nonatomic) unsigned responseClassId;              //@synthesize responseClassId=_responseClassId - In the implementation block
@property (assign,nonatomic) BOOL hasReplyTextId; 
@property (assign,nonatomic) unsigned replyTextId;                  //@synthesize replyTextId=_replyTextId - In the implementation block
@property (assign,nonatomic) BOOL hasIsCustomResponse; 
@property (assign,nonatomic) BOOL isCustomResponse;                 //@synthesize isCustomResponse=_isCustomResponse - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasModelId;
-(unsigned)modelId;
-(void)setModelId:(unsigned)arg1 ;
-(BOOL)isCustomResponse;
-(unsigned)replyTextId;
-(void)setHasModelId:(BOOL)arg1 ;
-(void)setResponseClassId:(unsigned)arg1 ;
-(void)setHasResponseClassId:(BOOL)arg1 ;
-(BOOL)hasResponseClassId;
-(void)setReplyTextId:(unsigned)arg1 ;
-(void)setHasReplyTextId:(BOOL)arg1 ;
-(BOOL)hasReplyTextId;
-(void)setIsCustomResponse:(BOOL)arg1 ;
-(void)setHasIsCustomResponse:(BOOL)arg1 ;
-(BOOL)hasIsCustomResponse;
-(unsigned)responseClassId;
@end

