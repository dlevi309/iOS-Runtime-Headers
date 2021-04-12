/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface HDAWDHealthRecordsFailureToExtractEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _extractionFailures;
	SCD_Struct_HD1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * extractionFailures;              //@synthesize extractionFailures=_extractionFailures - In the implementation block
+(Class)extractionFailuresType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)addExtractionFailures:(id)arg1 ;
-(unsigned long long)extractionFailuresCount;
-(void)clearExtractionFailures;
-(id)extractionFailuresAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)extractionFailures;
-(void)setExtractionFailures:(NSMutableArray *)arg1 ;
@end

