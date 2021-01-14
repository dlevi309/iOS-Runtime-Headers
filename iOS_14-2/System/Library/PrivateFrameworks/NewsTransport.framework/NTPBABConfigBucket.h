/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_CO1 _has;

}

@property (assign,nonatomic) BOOL hasBucketFloor; 
@property (assign,nonatomic) long long bucketFloor;                //@synthesize bucketFloor=_bucketFloor - In the implementation block
@property (assign,nonatomic) BOOL hasBucketCeiling; 
@property (assign,nonatomic) long long bucketCeiling;              //@synthesize bucketCeiling=_bucketCeiling - In the implementation block
@property (nonatomic,readonly) BOOL hasConfig; 
@property (nonatomic,retain) NTPBConfig * config;                  //@synthesize config=_config - In the implementation block
-(NTPBConfig *)config;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasConfig;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setConfig:(NTPBConfig *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setBucketFloor:(long long)arg1 ;
-(long long)bucketCeiling;
-(long long)bucketFloor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasBucketFloor:(BOOL)arg1 ;
-(BOOL)hasBucketFloor;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBucketCeiling:(long long)arg1 ;
-(void)setHasBucketCeiling:(BOOL)arg1 ;
-(BOOL)hasBucketCeiling;
@end

