/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitCameraRecordingUploadOperation : PBCodable <NSCopying> {

	long long _errorCode;
	unsigned long long _operationStartTime;
	unsigned long long _retryCount;
	unsigned long long _runTime;
	unsigned long long _timestamp;
	unsigned long long _totalClipDuration;
	NSString* _clipModelUUID;
	NSString* _errorDomain;
	int _operationType;
	BOOL _didCausePreviousClipToFinalizeBecauseMaxDurationExceeded;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasClipModelUUID; 
@property (nonatomic,retain) NSString * clipModelUUID;                                                      //@synthesize clipModelUUID=_clipModelUUID - In the implementation block
@property (assign,nonatomic) BOOL hasDidCausePreviousClipToFinalizeBecauseMaxDurationExceeded; 
@property (assign,nonatomic) BOOL didCausePreviousClipToFinalizeBecauseMaxDurationExceeded;                 //@synthesize didCausePreviousClipToFinalizeBecauseMaxDurationExceeded=_didCausePreviousClipToFinalizeBecauseMaxDurationExceeded - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                                                           //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasTotalClipDuration; 
@property (assign,nonatomic) unsigned long long totalClipDuration;                                          //@synthesize totalClipDuration=_totalClipDuration - In the implementation block
@property (assign,nonatomic) BOOL hasRunTime; 
@property (assign,nonatomic) unsigned long long runTime;                                                    //@synthesize runTime=_runTime - In the implementation block
@property (assign,nonatomic) BOOL hasRetryCount; 
@property (assign,nonatomic) unsigned long long retryCount;                                                 //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) BOOL hasOperationType; 
@property (assign,nonatomic) int operationType;                                                             //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                                                        //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasOperationStartTime; 
@property (assign,nonatomic) unsigned long long operationStartTime;                                         //@synthesize operationStartTime=_operationStartTime - In the implementation block
-(int)operationType;
-(id)dictionaryRepresentation;
-(unsigned long long)runTime;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(unsigned long long)retryCount;
-(void)setOperationStartTime:(unsigned long long)arg1 ;
-(NSString *)errorDomain;
-(BOOL)hasErrorDomain;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(long long)errorCode;
-(void)setRunTime:(unsigned long long)arg1 ;
-(unsigned long long)operationStartTime;
-(BOOL)hasErrorCode;
-(id)description;
-(void)setHasRetryCount:(BOOL)arg1 ;
-(BOOL)hasRetryCount;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setOperationType:(int)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setHasOperationType:(BOOL)arg1 ;
-(BOOL)hasOperationType;
-(id)operationTypeAsString:(int)arg1 ;
-(int)StringAsOperationType:(id)arg1 ;
-(void)setTotalClipDuration:(unsigned long long)arg1 ;
-(void)setClipModelUUID:(NSString *)arg1 ;
-(void)setDidCausePreviousClipToFinalizeBecauseMaxDurationExceeded:(BOOL)arg1 ;
-(BOOL)hasClipModelUUID;
-(void)setHasDidCausePreviousClipToFinalizeBecauseMaxDurationExceeded:(BOOL)arg1 ;
-(BOOL)hasDidCausePreviousClipToFinalizeBecauseMaxDurationExceeded;
-(void)setHasTotalClipDuration:(BOOL)arg1 ;
-(BOOL)hasTotalClipDuration;
-(void)setHasRunTime:(BOOL)arg1 ;
-(BOOL)hasRunTime;
-(void)setHasOperationStartTime:(BOOL)arg1 ;
-(BOOL)hasOperationStartTime;
-(NSString *)clipModelUUID;
-(BOOL)didCausePreviousClipToFinalizeBecauseMaxDurationExceeded;
-(unsigned long long)totalClipDuration;
@end

