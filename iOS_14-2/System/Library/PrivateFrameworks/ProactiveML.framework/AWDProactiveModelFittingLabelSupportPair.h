/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDProactiveModelFittingLabelSupportPair : PBCodable <NSCopying> {

	unsigned long long _label;
	float _support;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) BOOL hasLabel; 
@property (assign,nonatomic) unsigned long long label;              //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL hasSupport; 
@property (assign,nonatomic) float support;                         //@synthesize support=_support - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasLabel;
-(float)support;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasLabel:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSupport:(float)arg1 ;
-(void)setLabel:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)label;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasSupport:(BOOL)arg1 ;
-(BOOL)hasSupport;
@end

