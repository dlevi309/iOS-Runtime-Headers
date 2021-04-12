/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBConfig;

@interface NTPBABConfigBucket : PBCodable <NSCopying> {

	long long _bucketCeiling;
	long long _bucketFloor;
	NTPBConfig* _config;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasBucketFloor; 
@property (assign,nonatomic) long long bucketFloor;                //@synthesize bucketFloor=_bucketFloor - In the implementation block
@property (assign,nonatomic) BOOL hasBucketCeiling; 
@property (assign,nonatomic) long long bucketCeiling;              //@synthesize bucketCeiling=_bucketCeiling - In the implementation block
@property (nonatomic,readonly) BOOL hasConfig; 
@property (nonatomic,retain) NTPBConfig * config;                  //@synthesize config=_config - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NTPBConfig *)config;
-(void)setConfig:(NTPBConfig *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setBucketFloor:(long long)arg1 ;
-(void)setHasBucketFloor:(BOOL)arg1 ;
-(BOOL)hasBucketFloor;
-(void)setBucketCeiling:(long long)arg1 ;
-(void)setHasBucketCeiling:(BOOL)arg1 ;
-(BOOL)hasBucketCeiling;
-(BOOL)hasConfig;
-(long long)bucketFloor;
-(long long)bucketCeiling;
@end

