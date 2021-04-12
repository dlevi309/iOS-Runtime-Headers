/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
*/

#import <DistributedEvaluation/DistributedEvaluation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface DESEncryptedData : PBCodable <NSCopying> {

	NSString* _algorithm;
	NSData* _data;
	NSData* _encryptedKey;
	int _version;
	SCD_Struct_DE3 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) int version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSData * data;                       //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) BOOL hasEncryptedKey; 
@property (nonatomic,retain) NSData * encryptedKey;               //@synthesize encryptedKey=_encryptedKey - In the implementation block
@property (nonatomic,readonly) BOOL hasAlgorithm; 
@property (nonatomic,retain) NSString * algorithm;                //@synthesize algorithm=_algorithm - In the implementation block
-(NSString *)algorithm;
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(BOOL)hasAlgorithm;
-(void)setAlgorithm:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSData *)encryptedKey;
-(void)setEncryptedKey:(NSData *)arg1 ;
-(id)description;
-(NSData *)data;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasEncryptedKey;
@end

