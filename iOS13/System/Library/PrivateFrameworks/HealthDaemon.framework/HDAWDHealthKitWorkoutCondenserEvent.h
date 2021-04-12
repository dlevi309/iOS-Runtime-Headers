/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDAWDHealthKitWorkoutCondenserEvent : PBCodable <NSCopying> {

	long long _batchSize;
	long long _condensedWorkouts;
	long long _createdSeries;
	long long _deletedSamples;
	unsigned long long _duration;
	unsigned long long _errorCode;
	long long _processedWorkouts;
	unsigned long long _timestamp;
	unsigned long long _underlyingErrorCode;
	long long _workoutsToCondense;
	long long _workoutsToRecondense;
	NSString* _errorDomain;
	int _reason;
	NSString* _underlyingErrorDomain;
	BOOL _hasWatchSource;
	BOOL _success;
	SCD_Struct_HD22 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) int reason;                                          //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL hasBatchSize; 
@property (assign,nonatomic) long long batchSize;                                 //@synthesize batchSize=_batchSize - In the implementation block
@property (assign,nonatomic) BOOL hasHasWatchSource; 
@property (assign,nonatomic) BOOL hasWatchSource;                                 //@synthesize hasWatchSource=_hasWatchSource - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) BOOL success;                                        //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                              //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned long long errorCode;                        //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasUnderlyingErrorDomain; 
@property (nonatomic,retain) NSString * underlyingErrorDomain;                    //@synthesize underlyingErrorDomain=_underlyingErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasUnderlyingErrorCode; 
@property (assign,nonatomic) unsigned long long underlyingErrorCode;              //@synthesize underlyingErrorCode=_underlyingErrorCode - In the implementation block
@property (assign,nonatomic) BOOL hasWorkoutsToCondense; 
@property (assign,nonatomic) long long workoutsToCondense;                        //@synthesize workoutsToCondense=_workoutsToCondense - In the implementation block
@property (assign,nonatomic) BOOL hasWorkoutsToRecondense; 
@property (assign,nonatomic) long long workoutsToRecondense;                      //@synthesize workoutsToRecondense=_workoutsToRecondense - In the implementation block
@property (assign,nonatomic) BOOL hasCondensedWorkouts; 
@property (assign,nonatomic) long long condensedWorkouts;                         //@synthesize condensedWorkouts=_condensedWorkouts - In the implementation block
@property (assign,nonatomic) BOOL hasProcessedWorkouts; 
@property (assign,nonatomic) long long processedWorkouts;                         //@synthesize processedWorkouts=_processedWorkouts - In the implementation block
@property (assign,nonatomic) BOOL hasCreatedSeries; 
@property (assign,nonatomic) long long createdSeries;                             //@synthesize createdSeries=_createdSeries - In the implementation block
@property (assign,nonatomic) BOOL hasDeletedSamples; 
@property (assign,nonatomic) long long deletedSamples;                            //@synthesize deletedSamples=_deletedSamples - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)reason;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(long long)batchSize;
-(void)setBatchSize:(long long)arg1 ;
-(BOOL)success;
-(void)setReason:(int)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setUnderlyingErrorDomain:(NSString *)arg1 ;
-(void)setSuccess:(BOOL)arg1 ;
-(unsigned long long)errorCode;
-(NSString *)errorDomain;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(unsigned long long)arg1 ;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasErrorDomain;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(BOOL)hasReason;
-(BOOL)hasSuccess;
-(void)setHasSuccess:(BOOL)arg1 ;
-(id)reasonAsString:(int)arg1 ;
-(int)StringAsReason:(id)arg1 ;
-(void)setHasReason:(BOOL)arg1 ;
-(BOOL)hasUnderlyingErrorDomain;
-(void)setUnderlyingErrorCode:(unsigned long long)arg1 ;
-(void)setHasUnderlyingErrorCode:(BOOL)arg1 ;
-(BOOL)hasUnderlyingErrorCode;
-(NSString *)underlyingErrorDomain;
-(unsigned long long)underlyingErrorCode;
-(void)setHasBatchSize:(BOOL)arg1 ;
-(BOOL)hasBatchSize;
-(long long)deletedSamples;
-(void)setDeletedSamples:(long long)arg1 ;
-(void)setHasWatchSource:(BOOL)arg1 ;
-(void)setHasHasWatchSource:(BOOL)arg1 ;
-(BOOL)hasHasWatchSource;
-(void)setWorkoutsToCondense:(long long)arg1 ;
-(void)setHasWorkoutsToCondense:(BOOL)arg1 ;
-(BOOL)hasWorkoutsToCondense;
-(void)setWorkoutsToRecondense:(long long)arg1 ;
-(void)setHasWorkoutsToRecondense:(BOOL)arg1 ;
-(BOOL)hasWorkoutsToRecondense;
-(void)setCondensedWorkouts:(long long)arg1 ;
-(void)setHasCondensedWorkouts:(BOOL)arg1 ;
-(BOOL)hasCondensedWorkouts;
-(void)setProcessedWorkouts:(long long)arg1 ;
-(void)setHasProcessedWorkouts:(BOOL)arg1 ;
-(BOOL)hasProcessedWorkouts;
-(void)setCreatedSeries:(long long)arg1 ;
-(void)setHasCreatedSeries:(BOOL)arg1 ;
-(BOOL)hasCreatedSeries;
-(void)setHasDeletedSamples:(BOOL)arg1 ;
-(BOOL)hasDeletedSamples;
-(BOOL)hasWatchSource;
-(long long)workoutsToCondense;
-(long long)workoutsToRecondense;
-(long long)condensedWorkouts;
-(long long)processedWorkouts;
-(long long)createdSeries;
@end

