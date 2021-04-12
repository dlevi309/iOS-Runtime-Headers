/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setLabel:(unsigned long long)arg1 ;
-(unsigned long long)label;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasLabel;
-(void)setHasLabel:(BOOL)arg1 ;
-(void)setSupport:(float)arg1 ;
-(float)support;
-(void)setHasSupport:(BOOL)arg1 ;
-(BOOL)hasSupport;
@end

