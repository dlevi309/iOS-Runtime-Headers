/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)algorithm;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasSource;
-(void)setAlgorithm:(NSString *)arg1 ;
-(BOOL)hasAlgorithm;
@end

