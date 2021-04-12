/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
*/

#import <C2/C2-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface C2MPGenericEvent : PBCodable <NSCopying> {

	unsigned long long _timestampEnd;
	unsigned long long _timestampStart;
	NSMutableArray* _metrics;
	NSString* _name;
	int _type;
	SCD_Struct_C24 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasTimestampStart; 
@property (assign,nonatomic) unsigned long long timestampStart;              //@synthesize timestampStart=_timestampStart - In the implementation block
@property (assign,nonatomic) BOOL hasTimestampEnd; 
@property (assign,nonatomic) unsigned long long timestampEnd;                //@synthesize timestampEnd=_timestampEnd - In the implementation block
@property (nonatomic,retain) NSMutableArray * metrics;                       //@synthesize metrics=_metrics - In the implementation block
+(Class)metricType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)metrics;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasName;
-(void)setMetrics:(NSMutableArray *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)addMetric:(id)arg1 ;
-(void)clearMetrics;
-(void)setTimestampStart:(unsigned long long)arg1 ;
-(void)setTimestampEnd:(unsigned long long)arg1 ;
-(unsigned long long)metricsCount;
-(id)metricAtIndex:(unsigned long long)arg1 ;
-(void)setHasTimestampStart:(BOOL)arg1 ;
-(BOOL)hasTimestampStart;
-(void)setHasTimestampEnd:(BOOL)arg1 ;
-(BOOL)hasTimestampEnd;
-(unsigned long long)timestampStart;
-(unsigned long long)timestampEnd;
@end

