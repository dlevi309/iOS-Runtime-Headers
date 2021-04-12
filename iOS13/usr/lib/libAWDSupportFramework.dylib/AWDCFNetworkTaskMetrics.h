/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface AWDCFNetworkTaskMetrics : PBCodable <NSCopying> {

	unsigned long long _didCompleteWithError;
	long long _error;
	unsigned long long _numberOfRedirects;
	unsigned long long _numberOfRetries;
	unsigned long long _taskResume;
	unsigned long long _timestamp;
	long long _underlyingError;
	long long _underlyingErrorDomain;
	NSString* _activityUUID;
	int _schedulingTier;
	int _taskType;
	NSMutableArray* _transactionMetrics;
	BOOL _isBackground;
	BOOL _unused;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityUUID; 
@property (nonatomic,retain) NSString * activityUUID;                              //@synthesize activityUUID=_activityUUID - In the implementation block
@property (assign,nonatomic) BOOL hasTaskResume; 
@property (assign,nonatomic) unsigned long long taskResume;                        //@synthesize taskResume=_taskResume - In the implementation block
@property (assign,nonatomic) BOOL hasDidCompleteWithError; 
@property (assign,nonatomic) unsigned long long didCompleteWithError;              //@synthesize didCompleteWithError=_didCompleteWithError - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfRetries; 
@property (assign,nonatomic) unsigned long long numberOfRetries;                   //@synthesize numberOfRetries=_numberOfRetries - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfRedirects; 
@property (assign,nonatomic) unsigned long long numberOfRedirects;                 //@synthesize numberOfRedirects=_numberOfRedirects - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) long long error;                                      //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL hasUnderlyingError; 
@property (assign,nonatomic) long long underlyingError;                            //@synthesize underlyingError=_underlyingError - In the implementation block
@property (assign,nonatomic) BOOL hasUnderlyingErrorDomain; 
@property (assign,nonatomic) long long underlyingErrorDomain;                      //@synthesize underlyingErrorDomain=_underlyingErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasTaskType; 
@property (assign,nonatomic) int taskType;                                         //@synthesize taskType=_taskType - In the implementation block
@property (assign,nonatomic) BOOL hasIsBackground; 
@property (assign,nonatomic) BOOL isBackground;                                    //@synthesize isBackground=_isBackground - In the implementation block
@property (nonatomic,retain) NSMutableArray * transactionMetrics;                  //@synthesize transactionMetrics=_transactionMetrics - In the implementation block
@property (assign,nonatomic) BOOL hasSchedulingTier; 
@property (assign,nonatomic) int schedulingTier;                                   //@synthesize schedulingTier=_schedulingTier - In the implementation block
@property (assign,nonatomic) BOOL hasUnused; 
@property (assign,nonatomic) BOOL unused;                                          //@synthesize unused=_unused - In the implementation block
+(Class)transactionMetricsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)error;
-(void)setError:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(int)schedulingTier;
-(void)setSchedulingTier:(int)arg1 ;
-(NSMutableArray *)transactionMetrics;
-(void)setTransactionMetrics:(NSMutableArray *)arg1 ;
-(void)addTransactionMetrics:(id)arg1 ;
-(void)setIsBackground:(BOOL)arg1 ;
-(void)setTaskType:(int)arg1 ;
-(void)setUnderlyingErrorDomain:(long long)arg1 ;
-(void)setUnderlyingError:(long long)arg1 ;
-(void)setNumberOfRedirects:(unsigned long long)arg1 ;
-(void)setNumberOfRetries:(unsigned long long)arg1 ;
-(void)setDidCompleteWithError:(unsigned long long)arg1 ;
-(void)setActivityUUID:(NSString *)arg1 ;
-(BOOL)isBackground;
-(NSString *)activityUUID;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasActivityUUID;
-(unsigned long long)transactionMetricsCount;
-(void)clearTransactionMetrics;
-(id)transactionMetricsAtIndex:(unsigned long long)arg1 ;
-(long long)underlyingError;
-(int)taskType;
-(id)taskTypeAsString:(int)arg1 ;
-(int)StringAsTaskType:(id)arg1 ;
-(BOOL)hasTaskType;
-(void)setHasTaskType:(BOOL)arg1 ;
-(BOOL)hasUnderlyingErrorDomain;
-(long long)underlyingErrorDomain;
-(void)setHasError:(BOOL)arg1 ;
-(unsigned long long)didCompleteWithError;
-(BOOL)hasUnderlyingError;
-(unsigned long long)numberOfRetries;
-(void)setTaskResume:(unsigned long long)arg1 ;
-(void)setHasTaskResume:(BOOL)arg1 ;
-(BOOL)hasTaskResume;
-(void)setHasDidCompleteWithError:(BOOL)arg1 ;
-(BOOL)hasDidCompleteWithError;
-(void)setHasNumberOfRetries:(BOOL)arg1 ;
-(BOOL)hasNumberOfRetries;
-(void)setHasNumberOfRedirects:(BOOL)arg1 ;
-(BOOL)hasNumberOfRedirects;
-(void)setHasUnderlyingError:(BOOL)arg1 ;
-(void)setHasUnderlyingErrorDomain:(BOOL)arg1 ;
-(void)setHasIsBackground:(BOOL)arg1 ;
-(BOOL)hasIsBackground;
-(void)setHasSchedulingTier:(BOOL)arg1 ;
-(BOOL)hasSchedulingTier;
-(id)schedulingTierAsString:(int)arg1 ;
-(int)StringAsSchedulingTier:(id)arg1 ;
-(void)setUnused:(BOOL)arg1 ;
-(void)setHasUnused:(BOOL)arg1 ;
-(BOOL)hasUnused;
-(unsigned long long)taskResume;
-(unsigned long long)numberOfRedirects;
-(BOOL)unused;
@end

