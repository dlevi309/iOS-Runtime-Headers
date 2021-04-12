/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMsgEventMarcoLiteUsage : PBCodable <NSCopying> {

	NSMutableArray* _usageStates;
	unsigned _totalNavTime;
	SCD_Struct_GE99 _flags;

}

@property (assign,nonatomic) BOOL hasTotalNavTime; 
@property (assign,nonatomic) unsigned totalNavTime; 
@property (nonatomic,retain) NSMutableArray * usageStates; 
+(BOOL)isValid:(id)arg1 ;
+(Class)usageStatesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)addUsageStates:(id)arg1 ;
-(unsigned long long)usageStatesCount;
-(void)clearUsageStates;
-(id)usageStatesAtIndex:(unsigned long long)arg1 ;
-(unsigned)totalNavTime;
-(void)setTotalNavTime:(unsigned)arg1 ;
-(void)setHasTotalNavTime:(BOOL)arg1 ;
-(BOOL)hasTotalNavTime;
-(NSMutableArray *)usageStates;
-(void)setUsageStates:(NSMutableArray *)arg1 ;
@end

