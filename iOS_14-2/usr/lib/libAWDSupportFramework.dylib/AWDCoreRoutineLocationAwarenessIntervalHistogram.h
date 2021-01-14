/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface AWDCoreRoutineLocationAwarenessIntervalHistogram : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned long long _duration;
	unsigned long long _timestamp;
	NSMutableArray* _anyPositiveIntervalHistograms;
	NSMutableArray* _lessThan10mIntervalHistograms;
	NSMutableArray* _lessThan200mIntervalHistograms;
	NSMutableArray* _lessThan25mIntervalHistograms;
	NSMutableArray* _lessThan55mIntervalHistograms;
	SCD_Struct_AW3 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;                                  //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSMutableArray * lessThan10mIntervalHistograms;               //@synthesize lessThan10mIntervalHistograms=_lessThan10mIntervalHistograms - In the implementation block
@property (nonatomic,retain) NSMutableArray * lessThan25mIntervalHistograms;               //@synthesize lessThan25mIntervalHistograms=_lessThan25mIntervalHistograms - In the implementation block
@property (nonatomic,retain) NSMutableArray * lessThan55mIntervalHistograms;               //@synthesize lessThan55mIntervalHistograms=_lessThan55mIntervalHistograms - In the implementation block
@property (nonatomic,retain) NSMutableArray * lessThan200mIntervalHistograms;              //@synthesize lessThan200mIntervalHistograms=_lessThan200mIntervalHistograms - In the implementation block
@property (nonatomic,retain) NSMutableArray * anyPositiveIntervalHistograms;               //@synthesize anyPositiveIntervalHistograms=_anyPositiveIntervalHistograms - In the implementation block
+(id)_defaultIntervalHistogram;
+(BOOL)checkIntervalHistogramDimensions:(id)arg1 ;
+(Class)lessThan10mIntervalHistogramType;
+(Class)lessThan25mIntervalHistogramType;
+(Class)lessThan55mIntervalHistogramType;
+(Class)lessThan200mIntervalHistogramType;
+(Class)anyPositiveIntervalHistogramType;
-(BOOL)valid:(id*)arg1 ;
-(id)_init;
-(long long)metricId;
-(id)dictionaryRepresentation;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSMutableArray *)anyPositiveIntervalHistograms;
-(NSMutableArray *)lessThan200mIntervalHistograms;
-(NSMutableArray *)lessThan55mIntervalHistograms;
-(NSMutableArray *)lessThan25mIntervalHistograms;
-(NSMutableArray *)lessThan10mIntervalHistograms;
-(void)setLessThan10mIntervalHistograms:(NSMutableArray *)arg1 ;
-(void)setLessThan25mIntervalHistograms:(NSMutableArray *)arg1 ;
-(void)setLessThan55mIntervalHistograms:(NSMutableArray *)arg1 ;
-(void)setLessThan200mIntervalHistograms:(NSMutableArray *)arg1 ;
-(void)setAnyPositiveIntervalHistograms:(NSMutableArray *)arg1 ;
-(void)addLessThan10mIntervalHistogram:(id)arg1 ;
-(void)addLessThan25mIntervalHistogram:(id)arg1 ;
-(void)addLessThan55mIntervalHistogram:(id)arg1 ;
-(void)addLessThan200mIntervalHistogram:(id)arg1 ;
-(void)addAnyPositiveIntervalHistogram:(id)arg1 ;
-(unsigned long long)lessThan10mIntervalHistogramsCount;
-(void)clearLessThan10mIntervalHistograms;
-(id)lessThan10mIntervalHistogramAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)lessThan25mIntervalHistogramsCount;
-(void)clearLessThan25mIntervalHistograms;
-(id)lessThan25mIntervalHistogramAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)lessThan55mIntervalHistogramsCount;
-(void)clearLessThan55mIntervalHistograms;
-(id)lessThan55mIntervalHistogramAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)lessThan200mIntervalHistogramsCount;
-(void)clearLessThan200mIntervalHistograms;
-(id)lessThan200mIntervalHistogramAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)anyPositiveIntervalHistogramsCount;
-(void)clearAnyPositiveIntervalHistograms;
-(id)anyPositiveIntervalHistogramAtIndex:(unsigned long long)arg1 ;
@end

