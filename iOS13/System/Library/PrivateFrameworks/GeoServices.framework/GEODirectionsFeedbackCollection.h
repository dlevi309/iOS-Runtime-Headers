/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, GEOLocation;

@interface GEODirectionsFeedbackCollection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEONavigationAudioFeedback _navigationAudioFeedback;
	NSMutableArray* _directionsFeedbacks;
	double _durationOfTrip;
	GEOLocation* _finalLocation;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _arrivedAtDestination;
	struct {
		unsigned has_navigationAudioFeedback : 1;
		unsigned has_durationOfTrip : 1;
		unsigned has_arrivedAtDestination : 1;
		unsigned read_directionsFeedbacks : 1;
		unsigned read_finalLocation : 1;
		unsigned wrote_navigationAudioFeedback : 1;
		unsigned wrote_directionsFeedbacks : 1;
		unsigned wrote_durationOfTrip : 1;
		unsigned wrote_finalLocation : 1;
		unsigned wrote_arrivedAtDestination : 1;
	}  _flags;

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
+(BOOL)isValid:(id)arg1 ;
+(Class)directionsFeedbackType;
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
-(GEOLocation *)finalLocation;
-(unsigned long long)directionsFeedbacksCount;
-(void)clearDirectionsFeedbacks;
-(id)directionsFeedbackAtIndex:(unsigned long long)arg1 ;
-(void)addDirectionsFeedback:(id)arg1 ;
-(void)setFinalLocation:(GEOLocation *)arg1 ;
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
@end

