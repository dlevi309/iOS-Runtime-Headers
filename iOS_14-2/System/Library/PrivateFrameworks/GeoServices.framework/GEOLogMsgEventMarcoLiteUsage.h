/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMsgEventMarcoLiteUsage : PBCodable <NSCopying> {

	NSMutableArray* _usageStates;
	unsigned _totalNavTime;
	int _vioTrigger;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasTotalNavTime; 
@property (assign,nonatomic) unsigned totalNavTime; 
@property (nonatomic,retain) NSMutableArray * usageStates; 
@property (assign,nonatomic) BOOL hasVioTrigger; 
@property (assign,nonatomic) int vioTrigger; 
+(Class)usageStatesType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(void)addUsageStates:(id)arg1 ;
-(unsigned long long)usageStatesCount;
-(void)clearUsageStates;
-(id)usageStatesAtIndex:(unsigned long long)arg1 ;
-(unsigned)totalNavTime;
-(void)setHasTotalNavTime:(BOOL)arg1 ;
-(BOOL)hasTotalNavTime;
-(int)vioTrigger;
-(void)setHasVioTrigger:(BOOL)arg1 ;
-(BOOL)hasVioTrigger;
-(id)vioTriggerAsString:(int)arg1 ;
-(int)StringAsVioTrigger:(id)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSMutableArray *)usageStates;
-(void)setTotalNavTime:(unsigned)arg1 ;
-(void)setUsageStates:(NSMutableArray *)arg1 ;
-(void)setVioTrigger:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

