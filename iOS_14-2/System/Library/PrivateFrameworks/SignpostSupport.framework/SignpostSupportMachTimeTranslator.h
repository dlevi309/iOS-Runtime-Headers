/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface SignpostSupportMachTimeTranslator : NSObject {

	BOOL _isMonitoringSleepWake;
	NSMutableArray* _translationRanges;
	NSMutableArray* _startMachAbsoluteTimes;
	NSMutableArray* _startMachContinuousTimes;
	unsigned long long _maxEntries;
	NSObject*<OS_dispatch_queue> _synchronizationQueue;

}

@property (nonatomic,readonly) NSMutableArray * translationRanges;                           //@synthesize translationRanges=_translationRanges - In the implementation block
@property (nonatomic,readonly) NSMutableArray * startMachAbsoluteTimes;                      //@synthesize startMachAbsoluteTimes=_startMachAbsoluteTimes - In the implementation block
@property (nonatomic,readonly) NSMutableArray * startMachContinuousTimes;                    //@synthesize startMachContinuousTimes=_startMachContinuousTimes - In the implementation block
@property (assign,nonatomic) unsigned long long maxEntries;                                  //@synthesize maxEntries=_maxEntries - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> synchronizationQueue;              //@synthesize synchronizationQueue=_synchronizationQueue - In the implementation block
@property (assign) BOOL isMonitoringSleepWake;                                               //@synthesize isMonitoringSleepWake=_isMonitoringSleepWake - In the implementation block
@property (nonatomic,readonly) BOOL containsContinuousTimeJumps; 
+(id)_globalNotificationDispatchQueue;
+(id)_timeTranslationLog;
+(void)_snapshotMachTimesForAllListeners;
+(void)_addListeningTimeTranslator:(id)arg1 ;
+(void)_removeListeningTimeTranslator:(id)arg1 ;
+(void)_processPowerNotificationOfType:(unsigned)arg1 withNotificationID:(long long)arg2 ;
-(void)_grabMachTimesSnapshot;
-(id)initWithMaxEntries:(unsigned long long)arg1 ;
-(void)startMonitoringSleepWake;
-(void)stopMonitoringSleepWake;
-(id)dataRepresentationDuringMonitoring;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)dataRepresentation;
-(id)init;
-(void)setSynchronizationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)maxEntries;
-(id)initWithDataRepresentation:(id)arg1 ;
-(void)setMaxEntries:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)synchronizationQueue;
-(BOOL)isEqual:(id)arg1 ;
-(void)addTimestampPairWithMachAbsoluteTime:(unsigned long long)arg1 machContinuousTime:(unsigned long long)arg2 ;
-(BOOL)isMonitoringSleepWake;
-(void)setIsMonitoringSleepWake:(BOOL)arg1 ;
-(unsigned long long)machAbsoluteTimeForMachContinuousTime:(unsigned long long)arg1 ;
-(unsigned long long)machContinuousTimeForMachAbsoluteTime:(unsigned long long)arg1 ;
-(NSMutableArray *)translationRanges;
-(id)serializableDictionaryRepresentation;
-(NSMutableArray *)startMachAbsoluteTimes;
-(NSMutableArray *)startMachContinuousTimes;
-(BOOL)containsContinuousTimeJumps;
@end

