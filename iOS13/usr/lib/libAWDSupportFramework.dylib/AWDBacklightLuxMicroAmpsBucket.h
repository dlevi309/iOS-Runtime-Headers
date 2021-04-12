/*
* Generated on Monday, March 1, 2021 at 2:35:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDBacklightLuxMicroAmpsBucket : PBCodable <NSCopying> {

	unsigned _bucketDuration;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasBucketDuration; 
@property (assign,nonatomic) unsigned bucketDuration;              //@synthesize bucketDuration=_bucketDuration - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setBucketDuration:(unsigned)arg1 ;
-(void)setHasBucketDuration:(BOOL)arg1 ;
-(BOOL)hasBucketDuration;
-(unsigned)bucketDuration;
@end

