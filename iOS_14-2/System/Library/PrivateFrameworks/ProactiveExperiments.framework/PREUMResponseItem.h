/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(unsigned)modelId;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setModelId:(unsigned)arg1 ;
-(void)setHasModelId:(BOOL)arg1 ;
-(BOOL)hasModelId;
-(unsigned)replyTextId;
-(BOOL)isCustomResponse;
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

