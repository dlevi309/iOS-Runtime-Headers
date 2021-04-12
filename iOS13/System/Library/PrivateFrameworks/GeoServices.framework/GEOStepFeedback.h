/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSData;

@interface GEOStepFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	double _completionTimeStamp;
	NSData* _routeID;
	NSData* _tripID;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _routeIndex;
	unsigned _stepID;
	BOOL _completedStep;
	BOOL _lightGuidance;
	struct {
		unsigned has_completionTimeStamp : 1;
		unsigned has_routeIndex : 1;
		unsigned has_stepID : 1;
		unsigned has_completedStep : 1;
		unsigned has_lightGuidance : 1;
		unsigned read_routeID : 1;
		unsigned read_tripID : 1;
		unsigned wrote_completionTimeStamp : 1;
		unsigned wrote_routeID : 1;
		unsigned wrote_tripID : 1;
		unsigned wrote_routeIndex : 1;
		unsigned wrote_stepID : 1;
		unsigned wrote_completedStep : 1;
		unsigned wrote_lightGuidance : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID; 
@property (assign,nonatomic) BOOL hasCompletionTimeStamp; 
@property (assign,nonatomic) double completionTimeStamp; 
@property (assign,nonatomic) BOOL hasCompletedStep; 
@property (assign,nonatomic) BOOL completedStep; 
@property (nonatomic,readonly) BOOL hasRouteID; 
@property (nonatomic,retain) NSData * routeID; 
@property (assign,nonatomic) BOOL hasRouteIndex; 
@property (assign,nonatomic) unsigned routeIndex; 
@property (assign,nonatomic) BOOL hasLightGuidance; 
@property (assign,nonatomic) BOOL lightGuidance; 
@property (nonatomic,readonly) BOOL hasTripID; 
@property (nonatomic,retain) NSData * tripID; 
+(BOOL)isValid:(id)arg1 ;
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
-(void)_readRouteID;
-(NSData *)routeID;
-(void)setRouteID:(NSData *)arg1 ;
-(BOOL)hasRouteID;
-(NSData *)tripID;
-(unsigned)routeIndex;
-(void)setRouteIndex:(unsigned)arg1 ;
-(void)setHasRouteIndex:(BOOL)arg1 ;
-(BOOL)hasRouteIndex;
-(void)setStepID:(unsigned)arg1 ;
-(unsigned)stepID;
-(void)setHasStepID:(BOOL)arg1 ;
-(BOOL)hasStepID;
-(void)setCompletionTimeStamp:(double)arg1 ;
-(void)setCompletedStep:(BOOL)arg1 ;
-(void)_readTripID;
-(void)setTripID:(NSData *)arg1 ;
-(BOOL)hasTripID;
-(double)completionTimeStamp;
-(void)setHasCompletionTimeStamp:(BOOL)arg1 ;
-(BOOL)hasCompletionTimeStamp;
-(BOOL)completedStep;
-(void)setHasCompletedStep:(BOOL)arg1 ;
-(BOOL)hasCompletedStep;
-(BOOL)lightGuidance;
-(void)setLightGuidance:(BOOL)arg1 ;
-(void)setHasLightGuidance:(BOOL)arg1 ;
-(BOOL)hasLightGuidance;
@end

