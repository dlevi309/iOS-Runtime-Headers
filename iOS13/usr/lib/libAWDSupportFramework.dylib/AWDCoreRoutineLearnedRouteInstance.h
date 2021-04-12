/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface AWDCoreRoutineLearnedRouteInstance : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	SCD_Struct_AW16* _majorGapLengths;
	unsigned long long _timestamp;
	int _failureReason;
	int _latitudeTruncated;
	int _length;
	NSMutableArray* _locationTypeHistograms;
	int _longitudeTruncated;
	int _numberOfFilteredLocations;
	int _numberOfInputLocations;
	int _recoveryTime;
	NSMutableArray* _roadClassHistograms;
	SCD_Struct_AW13 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfInputLocations; 
@property (assign,nonatomic) int numberOfInputLocations;                             //@synthesize numberOfInputLocations=_numberOfInputLocations - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfFilteredLocations; 
@property (assign,nonatomic) int numberOfFilteredLocations;                          //@synthesize numberOfFilteredLocations=_numberOfFilteredLocations - In the implementation block
@property (assign,nonatomic) BOOL hasLength; 
@property (assign,nonatomic) int length;                                             //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) BOOL hasRecoveryTime; 
@property (assign,nonatomic) int recoveryTime;                                       //@synthesize recoveryTime=_recoveryTime - In the implementation block
@property (assign,nonatomic) BOOL hasFailureReason; 
@property (assign,nonatomic) int failureReason;                                      //@synthesize failureReason=_failureReason - In the implementation block
@property (assign,nonatomic) BOOL hasLatitudeTruncated; 
@property (assign,nonatomic) int latitudeTruncated;                                  //@synthesize latitudeTruncated=_latitudeTruncated - In the implementation block
@property (assign,nonatomic) BOOL hasLongitudeTruncated; 
@property (assign,nonatomic) int longitudeTruncated;                                 //@synthesize longitudeTruncated=_longitudeTruncated - In the implementation block
@property (nonatomic,retain) NSMutableArray * roadClassHistograms;                   //@synthesize roadClassHistograms=_roadClassHistograms - In the implementation block
@property (nonatomic,retain) NSMutableArray * locationTypeHistograms;                //@synthesize locationTypeHistograms=_locationTypeHistograms - In the implementation block
@property (nonatomic,readonly) unsigned long long majorGapLengthsCount; 
@property (nonatomic,readonly) int* majorGapLengths; 
+(Class)roadClassHistogramType;
+(Class)locationTypeHistogramType;
-(NSString *)description;
-(id)_init;
-(long long)metricId;
-(BOOL)valid:(id*)arg1 ;
-(void)dealloc;
-(int)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLength:(int)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(int)failureReason;
-(void)setFailureReason:(int)arg1 ;
-(void)setHasFailureReason:(BOOL)arg1 ;
-(BOOL)hasFailureReason;
-(BOOL)hasLength;
-(void)setHasLength:(BOOL)arg1 ;
-(int)numberOfInputLocations;
-(int)numberOfFilteredLocations;
-(int)recoveryTime;
-(int)latitudeTruncated;
-(int)longitudeTruncated;
-(unsigned long long)majorGapLengthsCount;
-(int*)majorGapLengths;
-(unsigned long long)locationTypeHistogramsCount;
-(unsigned long long)roadClassHistogramsCount;
-(void)setRoadClassHistograms:(NSMutableArray *)arg1 ;
-(void)setLocationTypeHistograms:(NSMutableArray *)arg1 ;
-(void)addRoadClassHistogram:(id)arg1 ;
-(void)addLocationTypeHistogram:(id)arg1 ;
-(void)clearRoadClassHistograms;
-(id)roadClassHistogramAtIndex:(unsigned long long)arg1 ;
-(void)clearLocationTypeHistograms;
-(id)locationTypeHistogramAtIndex:(unsigned long long)arg1 ;
-(void)clearMajorGapLengths;
-(int)majorGapLengthAtIndex:(unsigned long long)arg1 ;
-(void)addMajorGapLength:(int)arg1 ;
-(void)setNumberOfInputLocations:(int)arg1 ;
-(void)setHasNumberOfInputLocations:(BOOL)arg1 ;
-(BOOL)hasNumberOfInputLocations;
-(void)setNumberOfFilteredLocations:(int)arg1 ;
-(void)setHasNumberOfFilteredLocations:(BOOL)arg1 ;
-(BOOL)hasNumberOfFilteredLocations;
-(void)setRecoveryTime:(int)arg1 ;
-(void)setHasRecoveryTime:(BOOL)arg1 ;
-(BOOL)hasRecoveryTime;
-(void)setLatitudeTruncated:(int)arg1 ;
-(void)setHasLatitudeTruncated:(BOOL)arg1 ;
-(BOOL)hasLatitudeTruncated;
-(void)setLongitudeTruncated:(int)arg1 ;
-(void)setHasLongitudeTruncated:(BOOL)arg1 ;
-(BOOL)hasLongitudeTruncated;
-(void)setMajorGapLengths:(int*)arg1 count:(unsigned long long)arg2 ;
-(NSMutableArray *)roadClassHistograms;
-(NSMutableArray *)locationTypeHistograms;
@end

