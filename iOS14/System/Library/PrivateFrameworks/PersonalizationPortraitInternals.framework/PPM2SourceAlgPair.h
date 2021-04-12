/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPM2SourceAlgPair : PBCodable <NSCopying> {

	NSString* _algorithm;
	NSString* _source;

}

@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,retain) NSString * source;                 //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) BOOL hasAlgorithm; 
@property (nonatomic,retain) NSString * algorithm;              //@synthesize algorithm=_algorithm - In the implementation block
-(NSString *)algorithm;
-(id)dictionaryRepresentation;
-(BOOL)hasSource;
-(BOOL)hasAlgorithm;
-(void)setAlgorithm:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)source;
@end

