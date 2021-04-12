/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, GEOLocation;

@interface GEOLogMsgEventDirections : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEONavigationAudioFeedback _navigationAudioFeedback;
	GEOSessionID _navSessionId;
	NSMutableArray* _directionsFeedbacks;
	NSMutableArray* _durationInNavigationModes;
	double _durationOfTrip;
	GEOLocation* _finalLocation;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _originalEta;
	BOOL _arrivedAtDestination;
	BOOL _preArrival;
	SCD_Struct_GE92 _flags;

}

@property (nonatomic,retain) NSMutableArray * directionsFeedbacks; 
@property (nonatomic,readonly) BOOL hasFinalLocation; 
@property (nonatomic,retain) GEOLocation * finalLocation; 
@property (assign,nonatomic) BOOL hasArrivedAtDestination; 
@property (assign,nonatomic) BOOL arrivedAtDestination; 
@property (assign,nonatomic) BOOL hasNavigationAudioFeedback; 
@property (assign,nonatomic) GEONavigationAudioFeedback navigationAudioFeedback; 
@property (assign,nonatomic) BOOL hasDurationOfTrip; 
@property (assign,nonatomic) double durationOfTrip; 
@property (assign,nonatomic) BOOL hasNavSessionId; 
@property (assign,nonatomic) GEOSessionID navSessionId; 
@property (nonatomic,retain) NSMutableArray * durationInNavigationModes; 
@property (assign,nonatomic) BOOL hasOriginalEta; 
@property (assign,nonatomic) unsigned originalEta; 
@property (assign,nonatomic) BOOL hasPreArrival; 
@property (assign,nonatomic) BOOL preArrival; 
+(BOOL)isValid:(id)arg1 ;
+(Class)directionsFeedbackType;
+(Class)durationInNavigationModeType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readDirectionsFeedbacks;
-(void)_addNoFlagsDirectionsFeedback:(id)arg1 ;
-(void)_readFinalLocation;
-(void)_readDurationInNavigationModes;
-(void)_addNoFlagsDurationInNavigationMode:(id)arg1 ;
-(GEOLocation *)finalLocation;
-(unsigned long long)directionsFeedbacksCount;
-(void)clearDirectionsFeedbacks;
-(id)directionsFeedbackAtIndex:(unsigned long long)arg1 ;
-(void)addDirectionsFeedback:(id)arg1 ;
-(void)setFinalLocation:(GEOLocation *)arg1 ;
-(unsigned long long)durationInNavigationModesCount;
-(void)clearDurationInNavigationModes;
-(id)durationInNavigationModeAtIndex:(unsigned long long)arg1 ;
-(void)addDurationInNavigationMode:(id)arg1 ;
-(NSMutableArray *)directionsFeedbacks;
-(void)setDirectionsFeedbacks:(NSMutableArray *)arg1 ;
-(BOOL)hasFinalLocation;
-(BOOL)arrivedAtDestination;
-(void)setArrivedAtDestination:(BOOL)arg1 ;
-(void)setHasArrivedAtDestination:(BOOL)arg1 ;
-(BOOL)hasArrivedAtDestination;
-(GEONavigationAudioFeedback)navigationAudioFeedback;
-(void)setNavigationAudioFeedback:(GEONavigationAudioFeedback)arg1 ;
-(void)setHasNavigationAudioFeedback:(BOOL)arg1 ;
-(BOOL)hasNavigationAudioFeedback;
-(double)durationOfTrip;
-(void)setDurationOfTrip:(double)arg1 ;
-(void)setHasDurationOfTrip:(BOOL)arg1 ;
-(BOOL)hasDurationOfTrip;
-(GEOSessionID)navSessionId;
-(void)setNavSessionId:(GEOSessionID)arg1 ;
-(void)setHasNavSessionId:(BOOL)arg1 ;
-(BOOL)hasNavSessionId;
-(NSMutableArray *)durationInNavigationModes;
-(void)setDurationInNavigationModes:(NSMutableArray *)arg1 ;
-(unsigned)originalEta;
-(void)setOriginalEta:(unsigned)arg1 ;
-(void)setHasOriginalEta:(BOOL)arg1 ;
-(BOOL)hasOriginalEta;
-(BOOL)preArrival;
-(void)setPreArrival:(BOOL)arg1 ;
-(void)setHasPreArrival:(BOOL)arg1 ;
-(BOOL)hasPreArrival;
@end

