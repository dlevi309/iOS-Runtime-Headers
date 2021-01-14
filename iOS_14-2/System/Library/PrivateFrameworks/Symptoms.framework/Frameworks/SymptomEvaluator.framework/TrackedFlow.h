/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <SymptomEvaluator/TrackedFlowCounts.h>

@class NSString, AppTracker, NSDate, FlowClassification;

@interface TrackedFlow : TrackedFlowCounts {

	unsigned long long _snapshotRxWiFiBytes;
	unsigned long long _snapshotTxWiFiBytes;
	unsigned long long _snapshotRxPkts;
	unsigned long long _snapshotTxPkts;
	unsigned long long _snapshotRxDupeBytes;
	unsigned long long _snapshotRxOOOBytes;
	unsigned long long _snapshotTxReTxBytes;
	int _snapshotTxUnacked;
	BOOL _closedOut;
	BOOL _isNiced;
	BOOL _isRNF;
	BOOL _isForcedNonRNF;
	BOOL _trackedAsForeground;
	BOOL _networkActivityMapShouldNotBeCounted;
	BOOL _networkActivityMapRolledOver;
	unsigned _trafficMgtFlags;
	unsigned _trafficClassFlags;
	unsigned _ifIndex;
	int _pid;
	unsigned _txUnacked;
	unsigned _flags;
	long long _ifType;
	NSString* _ownerKey;
	unsigned long long _flowId;
	AppTracker* _ultimateUser;
	AppTracker* _immediateUser;
	NSDate* _startingTimestamp;
	double _duration;
	double _wifiDownlRate;
	double _cellDownlRate;
	FlowClassification* _classification;
	AppTracker* _trackerForStatistics;
	unsigned long long _classificationChangeTimer;
	unsigned long long _backgroundCellFlowTrackingSeqNo;
	unsigned long long _networkActivityMapStartTime;
	unsigned long long _networkActivityMapPart1;
	unsigned long long _networkActivityMapPart2;

}

@property (assign,nonatomic) unsigned long long networkActivityMapStartTime;                  //@synthesize networkActivityMapStartTime=_networkActivityMapStartTime - In the implementation block
@property (assign,nonatomic) unsigned long long networkActivityMapPart1;                      //@synthesize networkActivityMapPart1=_networkActivityMapPart1 - In the implementation block
@property (assign,nonatomic) unsigned long long networkActivityMapPart2;                      //@synthesize networkActivityMapPart2=_networkActivityMapPart2 - In the implementation block
@property (assign,nonatomic) BOOL networkActivityMapShouldNotBeCounted;                       //@synthesize networkActivityMapShouldNotBeCounted=_networkActivityMapShouldNotBeCounted - In the implementation block
@property (assign,nonatomic) BOOL networkActivityMapRolledOver;                               //@synthesize networkActivityMapRolledOver=_networkActivityMapRolledOver - In the implementation block
@property (assign,nonatomic) unsigned ifIndex;                                                //@synthesize ifIndex=_ifIndex - In the implementation block
@property (assign,nonatomic) long long ifType;                                                //@synthesize ifType=_ifType - In the implementation block
@property (nonatomic,retain) NSString * ownerKey;                                             //@synthesize ownerKey=_ownerKey - In the implementation block
@property (assign,nonatomic) int pid;                                                         //@synthesize pid=_pid - In the implementation block
@property (assign,nonatomic) unsigned long long flowId;                                       //@synthesize flowId=_flowId - In the implementation block
@property (nonatomic,retain) AppTracker * ultimateUser;                                       //@synthesize ultimateUser=_ultimateUser - In the implementation block
@property (nonatomic,retain) AppTracker * immediateUser;                                      //@synthesize immediateUser=_immediateUser - In the implementation block
@property (nonatomic,retain) NSDate * startingTimestamp;                                      //@synthesize startingTimestamp=_startingTimestamp - In the implementation block
@property (assign,nonatomic) BOOL closedOut;                                                  //@synthesize closedOut=_closedOut - In the implementation block
@property (assign,nonatomic) double duration;                                                 //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned txUnacked;                                              //@synthesize txUnacked=_txUnacked - In the implementation block
@property (assign,nonatomic) unsigned flags;                                                  //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) unsigned trafficMgtFlags;                                        //@synthesize trafficMgtFlags=_trafficMgtFlags - In the implementation block
@property (assign,nonatomic) unsigned trafficClassFlags;                                      //@synthesize trafficClassFlags=_trafficClassFlags - In the implementation block
@property (assign,nonatomic) double wifiDownlRate;                                            //@synthesize wifiDownlRate=_wifiDownlRate - In the implementation block
@property (assign,nonatomic) double cellDownlRate;                                            //@synthesize cellDownlRate=_cellDownlRate - In the implementation block
@property (assign,nonatomic) BOOL isNiced;                                                    //@synthesize isNiced=_isNiced - In the implementation block
@property (assign,nonatomic) BOOL isRNF;                                                      //@synthesize isRNF=_isRNF - In the implementation block
@property (assign,nonatomic) BOOL isForcedNonRNF;                                             //@synthesize isForcedNonRNF=_isForcedNonRNF - In the implementation block
@property (assign,nonatomic) BOOL trackedAsForeground;                                        //@synthesize trackedAsForeground=_trackedAsForeground - In the implementation block
@property (nonatomic,retain) FlowClassification * classification;                             //@synthesize classification=_classification - In the implementation block
@property (nonatomic,retain) AppTracker * trackerForStatistics;                               //@synthesize trackerForStatistics=_trackerForStatistics - In the implementation block
@property (assign,nonatomic) unsigned long long classificationChangeTimer;                    //@synthesize classificationChangeTimer=_classificationChangeTimer - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundCellFlowTrackingSeqNo;              //@synthesize backgroundCellFlowTrackingSeqNo=_backgroundCellFlowTrackingSeqNo - In the implementation block
+(void)initialize;
+(unsigned long long)rnfUsageGrandTallyAfterSetting:(unsigned long long)arg1 ;
+(id)getPolledFlowInfo;
+(id)startTrackingForKey:(id)arg1 ;
+(id)ownersOfFlowsPassingTest:(/*^block*/id)arg1 ;
+(void)startPollingWifiFlows:(unsigned)arg1 ;
+(void)dumpState;
+(unsigned long long)rnfUsageGrandTallyAfterAdding:(unsigned long long)arg1 ;
+(void)removeTrackingForKey:(id)arg1 ;
+(void)stopPollingWifiFlows;
+(void)_notifyPollingEnd;
+(void)_dumpStateOfType:(long long)arg1 ;
+(id)flowForKey:(id)arg1 ;
+(unsigned long long)activeFlowsCountForType:(long long)arg1 ;
+(void)_wifiStallCheck;
+(unsigned long long)countFlowsPassingTest:(/*^block*/id)arg1 ;
+(unsigned long long)cellUsageGrandTallyAfterAdding:(unsigned long long)arg1 ;
+(id)currentCellUsers;
+(void)_wifiStallCheckStarted;
+(unsigned long long)cellUsageGrandTallyAfterSetting:(unsigned long long)arg1 ;
+(void)setPolledFlowQueue:(id)arg1 ;
+(unsigned long long)allActiveFlowsCount;
-(BOOL)trackedAsForeground;
-(void)setIfIndex:(unsigned)arg1 ;
-(BOOL)isForcedNonRNF;
-(void)setTrackerForStatistics:(AppTracker *)arg1 ;
-(unsigned long long)networkActivityMapStartTime;
-(void)setCellDownlRate:(double)arg1 ;
-(BOOL)isRNF;
-(void)setDuration:(double)arg1 ;
-(int)pid;
-(unsigned)trafficClassFlags;
-(unsigned long long)networkActivityMapPart2;
-(long long)ifType;
-(id)init;
-(double)cellDownlRate;
-(void)setWifiDownlRate:(double)arg1 ;
-(BOOL)networkActivityMapShouldNotBeCounted;
-(unsigned)ifIndex;
-(void)setClosedOut:(BOOL)arg1 ;
-(unsigned)flags;
-(void)_decrementCounters;
-(unsigned)txUnacked;
-(void)setIsForcedNonRNF:(BOOL)arg1 ;
-(unsigned long long)networkActivityMapPart1;
-(void)setNetworkActivityMapPart1:(unsigned long long)arg1 ;
-(BOOL)isNiced;
-(unsigned long long)flowId;
-(void)setBackgroundCellFlowTrackingSeqNo:(unsigned long long)arg1 ;
-(void)setNetworkActivityMapRolledOver:(BOOL)arg1 ;
-(BOOL)inheritEarlyProperties:(id)arg1 ;
-(void)_takeSnapshot;
-(void)setTxUnacked:(unsigned)arg1 ;
-(void)setStartingTimestamp:(NSDate *)arg1 ;
-(id)description;
-(double)wifiDownlRate;
-(void)setNetworkActivityMapShouldNotBeCounted:(BOOL)arg1 ;
-(NSDate *)startingTimestamp;
-(void)setIfType:(long long)arg1 ;
-(FlowClassification *)classification;
-(void)setTrafficClassFlags:(unsigned)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(BOOL)closedOut;
-(void)setIsNiced:(BOOL)arg1 ;
-(void)setActivityBitmapInfo:(id)arg1 withOwner:(id)arg2 ;
-(AppTracker *)immediateUser;
-(void)setNetworkActivityMapPart2:(unsigned long long)arg1 ;
-(void)setClassification:(FlowClassification *)arg1 ;
-(unsigned long long)classificationChangeTimer;
-(unsigned long long)backgroundCellFlowTrackingSeqNo;
-(void)setClassificationChangeTimer:(unsigned long long)arg1 ;
-(void)setOwnerKey:(NSString *)arg1 ;
-(NSString *)ownerKey;
-(void)setImmediateUser:(AppTracker *)arg1 ;
-(void)setTrackedAsForeground:(BOOL)arg1 ;
-(void)setPid:(int)arg1 ;
-(double)duration;
-(void)setFlowId:(unsigned long long)arg1 ;
-(void)setIsRNF:(BOOL)arg1 ;
-(AppTracker *)ultimateUser;
-(void)_updateScoreholder:(scoreHolder*)arg1 ;
-(void)inheritLateProperties:(id)arg1 ;
-(BOOL)networkActivityMapRolledOver;
-(AppTracker *)trackerForStatistics;
-(void)setNetworkActivityMapStartTime:(unsigned long long)arg1 ;
-(void)setTrafficMgtFlags:(unsigned)arg1 ;
-(void)setUltimateUser:(AppTracker *)arg1 ;
-(unsigned)trafficMgtFlags;
@end

