/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface HDAWDHealthRecordsCodingDisplayStringsEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _displayStrings;
	SCD_Struct_HD1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * displayStrings;              //@synthesize displayStrings=_displayStrings - In the implementation block
+(Class)displayStringsType;
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
-(NSMutableArray *)displayStrings;
-(unsigned long long)displayStringsCount;
-(void)clearDisplayStrings;
-(id)displayStringsAtIndex:(unsigned long long)arg1 ;
-(void)addDisplayStrings:(id)arg1 ;
-(void)setDisplayStrings:(NSMutableArray *)arg1 ;
@end

