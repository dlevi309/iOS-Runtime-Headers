/*
* Generated on Thursday, January 14, 2021 at 2:28:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(BOOL)isBackground;
-(void)setNumberOfRetries:(unsigned long long)arg1 ;
-(NSString *)activityUUID;
-(void)clearTransactionMetrics;
-(void)setTaskType:(int)arg1 ;
-(BOOL)unused;
-(void)setNumberOfRedirects:(unsigned long long)arg1 ;
-(void)setUnderlyingErrorDomain:(long long)arg1 ;
-(void)setDidCompleteWithError:(unsigned long long)arg1 ;
-(unsigned long long)timestamp;
-(void)setActivityUUID:(NSString *)arg1 ;
-(id)taskTypeAsString:(int)arg1 ;
-(int)StringAsTaskType:(id)arg1 ;
-(BOOL)hasTaskType;
-(void)setHasTaskType:(BOOL)arg1 ;
-(void)setSchedulingTier:(int)arg1 ;
-(void)setHasError:(BOOL)arg1 ;
-(void)setUnderlyingError:(long long)arg1 ;
-(id)transactionMetricsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)transactionMetricsCount;
-(void)mergeFrom:(id)arg1 ;
-(long long)underlyingError;
-(void)setError:(long long)arg1 ;
-(long long)error;
-(unsigned long long)numberOfRetries;
-(BOOL)hasActivityUUID;
-(int)taskType;
-(id)description;
-(void)setTransactionMetrics:(NSMutableArray *)arg1 ;
-(void)setHasUnderlyingErrorDomain:(BOOL)arg1 ;
-(BOOL)hasUnderlyingErrorDomain;
-(long long)underlyingErrorDomain;
-(void)setIsBackground:(BOOL)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(NSMutableArray *)transactionMetrics;
-(BOOL)readFrom:(id)arg1 ;
-(void)addTransactionMetrics:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)didCompleteWithError;
-(BOOL)hasUnderlyingError;
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
-(void)setHasIsBackground:(BOOL)arg1 ;
-(BOOL)hasIsBackground;
-(int)schedulingTier;
-(void)setHasSchedulingTier:(BOOL)arg1 ;
-(BOOL)hasSchedulingTier;
-(id)schedulingTierAsString:(int)arg1 ;
-(int)StringAsSchedulingTier:(id)arg1 ;
-(void)setUnused:(BOOL)arg1 ;
-(void)setHasUnused:(BOOL)arg1 ;
-(BOOL)hasUnused;
-(unsigned long long)taskResume;
-(unsigned long long)numberOfRedirects;
@end

