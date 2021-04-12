/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HDAWDHealthKitCloudSyncEvent;

@interface HDAWDHealthKitCloudSyncEndEvent : PBCodable <NSCopying> {

	unsigned long long _countSinceLastSuccess;
	unsigned long long _duration;
	unsigned long long _errorCode;
	unsigned long long _timeSinceLastSuccess;
	unsigned long long _timestamp;
	unsigned long long _underlyingErrorCode;
	NSString* _errorDomain;
	HDAWDHealthKitCloudSyncEvent* _event;
	int _result;
	NSString* _underlyingErrorDomain;
	SCD_Struct_HD61 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasEvent; 
@property (nonatomic,retain) HDAWDHealthKitCloudSyncEvent * event;                  //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;                           //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasResult; 
@property (assign,nonatomic) int result;                                            //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) BOOL hasCountSinceLastSuccess; 
@property (assign,nonatomic) unsigned long long countSinceLastSuccess;              //@synthesize countSinceLastSuccess=_countSinceLastSuccess - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceLastSuccess; 
@property (assign,nonatomic) unsigned long long timeSinceLastSuccess;               //@synthesize timeSinceLastSuccess=_timeSinceLastSuccess - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                                //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned long long errorCode;                          //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasUnderlyingErrorDomain; 
@property (nonatomic,retain) NSString * underlyingErrorDomain;                      //@synthesize underlyingErrorDomain=_underlyingErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasUnderlyingErrorCode; 
@property (assign,nonatomic) unsigned long long underlyingErrorCode;                //@synthesize underlyingErrorCode=_underlyingErrorCode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)result;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(void)setResult:(int)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(HDAWDHealthKitCloudSyncEvent *)event;
-(void)setEvent:(HDAWDHealthKitCloudSyncEvent *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setUnderlyingErrorDomain:(NSString *)arg1 ;
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
-(BOOL)hasEvent;
-(BOOL)hasUnderlyingErrorDomain;
-(void)setUnderlyingErrorCode:(unsigned long long)arg1 ;
-(void)setHasUnderlyingErrorCode:(BOOL)arg1 ;
-(BOOL)hasUnderlyingErrorCode;
-(NSString *)underlyingErrorDomain;
-(unsigned long long)underlyingErrorCode;
-(void)setHasResult:(BOOL)arg1 ;
-(BOOL)hasResult;
-(id)resultAsString:(int)arg1 ;
-(int)StringAsResult:(id)arg1 ;
-(void)setCountSinceLastSuccess:(unsigned long long)arg1 ;
-(void)setHasCountSinceLastSuccess:(BOOL)arg1 ;
-(BOOL)hasCountSinceLastSuccess;
-(void)setTimeSinceLastSuccess:(unsigned long long)arg1 ;
-(void)setHasTimeSinceLastSuccess:(BOOL)arg1 ;
-(BOOL)hasTimeSinceLastSuccess;
-(unsigned long long)countSinceLastSuccess;
-(unsigned long long)timeSinceLastSuccess;
@end

