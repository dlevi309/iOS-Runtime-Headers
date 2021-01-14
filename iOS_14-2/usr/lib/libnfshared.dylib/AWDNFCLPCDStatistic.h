/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDNFCLPCDStatistic : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _falseDetectionCount;
	unsigned _tagType1ReadSuccessCount;
	unsigned _tagType2ReadSuccessCount;
	unsigned _tagType3ReadSuccessCount;
	unsigned _tagType4ReadSuccessCount;
	unsigned _tagType5ReadSuccessCount;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasFalseDetectionCount; 
@property (assign,nonatomic) unsigned falseDetectionCount;                   //@synthesize falseDetectionCount=_falseDetectionCount - In the implementation block
@property (assign,nonatomic) BOOL hasTagType1ReadSuccessCount; 
@property (assign,nonatomic) unsigned tagType1ReadSuccessCount;              //@synthesize tagType1ReadSuccessCount=_tagType1ReadSuccessCount - In the implementation block
@property (assign,nonatomic) BOOL hasTagType2ReadSuccessCount; 
@property (assign,nonatomic) unsigned tagType2ReadSuccessCount;              //@synthesize tagType2ReadSuccessCount=_tagType2ReadSuccessCount - In the implementation block
@property (assign,nonatomic) BOOL hasTagType3ReadSuccessCount; 
@property (assign,nonatomic) unsigned tagType3ReadSuccessCount;              //@synthesize tagType3ReadSuccessCount=_tagType3ReadSuccessCount - In the implementation block
@property (assign,nonatomic) BOOL hasTagType4ReadSuccessCount; 
@property (assign,nonatomic) unsigned tagType4ReadSuccessCount;              //@synthesize tagType4ReadSuccessCount=_tagType4ReadSuccessCount - In the implementation block
@property (assign,nonatomic) BOOL hasTagType5ReadSuccessCount; 
@property (assign,nonatomic) unsigned tagType5ReadSuccessCount;              //@synthesize tagType5ReadSuccessCount=_tagType5ReadSuccessCount - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFalseDetectionCount:(unsigned)arg1 ;
-(void)setHasFalseDetectionCount:(BOOL)arg1 ;
-(BOOL)hasFalseDetectionCount;
-(void)setTagType1ReadSuccessCount:(unsigned)arg1 ;
-(void)setHasTagType1ReadSuccessCount:(BOOL)arg1 ;
-(BOOL)hasTagType1ReadSuccessCount;
-(void)setTagType2ReadSuccessCount:(unsigned)arg1 ;
-(void)setHasTagType2ReadSuccessCount:(BOOL)arg1 ;
-(BOOL)hasTagType2ReadSuccessCount;
-(void)setTagType3ReadSuccessCount:(unsigned)arg1 ;
-(void)setHasTagType3ReadSuccessCount:(BOOL)arg1 ;
-(BOOL)hasTagType3ReadSuccessCount;
-(void)setTagType4ReadSuccessCount:(unsigned)arg1 ;
-(void)setHasTagType4ReadSuccessCount:(BOOL)arg1 ;
-(BOOL)hasTagType4ReadSuccessCount;
-(void)setTagType5ReadSuccessCount:(unsigned)arg1 ;
-(void)setHasTagType5ReadSuccessCount:(BOOL)arg1 ;
-(BOOL)hasTagType5ReadSuccessCount;
-(unsigned)falseDetectionCount;
-(unsigned)tagType1ReadSuccessCount;
-(unsigned)tagType2ReadSuccessCount;
-(unsigned)tagType3ReadSuccessCount;
-(unsigned)tagType4ReadSuccessCount;
-(unsigned)tagType5ReadSuccessCount;
@end

