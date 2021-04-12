/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NTPBConfig;

@interface NTPBABConfig : PBCodable <NSCopying> {

	long long _populationCeiling;
	long long _populationFloor;
	NSMutableArray* _configBuckets;
	NTPBConfig* _configControl;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasPopulationFloor; 
@property (assign,nonatomic) long long populationFloor;                   //@synthesize populationFloor=_populationFloor - In the implementation block
@property (assign,nonatomic) BOOL hasPopulationCeiling; 
@property (assign,nonatomic) long long populationCeiling;                 //@synthesize populationCeiling=_populationCeiling - In the implementation block
@property (nonatomic,readonly) BOOL hasConfigControl; 
@property (nonatomic,retain) NTPBConfig * configControl;                  //@synthesize configControl=_configControl - In the implementation block
@property (nonatomic,retain) NSMutableArray * configBuckets;              //@synthesize configBuckets=_configBuckets - In the implementation block
+(Class)configBucketsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)addConfigBuckets:(id)arg1 ;
-(void)setConfigControl:(NTPBConfig *)arg1 ;
-(void)setPopulationFloor:(long long)arg1 ;
-(void)setHasPopulationFloor:(BOOL)arg1 ;
-(BOOL)hasPopulationFloor;
-(void)setPopulationCeiling:(long long)arg1 ;
-(void)setHasPopulationCeiling:(BOOL)arg1 ;
-(BOOL)hasPopulationCeiling;
-(BOOL)hasConfigControl;
-(void)clearConfigBuckets;
-(unsigned long long)configBucketsCount;
-(id)configBucketsAtIndex:(unsigned long long)arg1 ;
-(long long)populationFloor;
-(long long)populationCeiling;
-(NTPBConfig *)configControl;
-(NSMutableArray *)configBuckets;
-(void)setConfigBuckets:(NSMutableArray *)arg1 ;
@end

