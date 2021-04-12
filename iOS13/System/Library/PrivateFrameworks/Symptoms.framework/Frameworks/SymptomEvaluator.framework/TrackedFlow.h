/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign,nonatomic) unsigned long long backgroundCellFlowTrackingSeqNo;              //@synthesize backgroundCellFlowTrackingSeqNo=_backgroundCellFlowTrackingSeqNo - In the implementation block
+(void)initialize;
+(void)dumpState;
+(void)startPollingWifiFlows:(unsigned)arg1 ;
+(void)stopPollingWifiFlows;
+(id)getPolledFlowInfo;
+(void)setPolledFlowQueue:(id)arg1 ;
+(unsigned long long)allActiveFlowsCount;
+(unsigned long long)countFlowsPassingTest:(/*^block*/id)arg1 ;
+(id)flowForKey:(id)arg1 ;
+(id)startTrackingForKey:(id)arg1 ;
+(unsigned long long)cellUsageGrandTallyAfterAdding:(unsigned long long)arg1 ;
+(unsigned long long)rnfUsageGrandTallyAfterAdding:(unsigned long long)arg1 ;
+(void)removeTrackingForKey:(id)arg1 ;
+(id)ownersOfFlowsPassingTest:(/*^block*/id)arg1 ;
+(unsigned long long)activeFlowsCountForType:(long long)arg1 ;
+(unsigned long long)cellUsageGrandTallyAfterSetting:(unsigned long long)arg1 ;
+(unsigned long long)rnfUsageGrandTallyAfterSetting:(unsigned long long)arg1 ;
+(id)currentCellUsers;
+(void)_dumpStateOfType:(long long)arg1 ;
+(void)_wifiStallCheckStarted;
+(void)_wifiStallCheck;
+(void)_notifyPollingEnd;
-(id)init;
-(id)description;
-(unsigned)flags;
-(double)duration;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(void)setFlags:(unsigned)arg1 ;
-(void)setDuration:(double)arg1 ;
-(FlowClassification *)classification;
-(unsigned)ifIndex;
-(void)setIfIndex:(unsigned)arg1 ;
-(unsigned long long)flowId;
-(void)setFlowId:(unsigned long long)arg1 ;
-(void)setClassification:(FlowClassification *)arg1 ;
-(void)_takeSnapshot;
-(unsigned)txUnacked;
-(unsigned long long)networkActivityMapStartTime;
-(unsigned long long)networkActivityMapPart1;
-(unsigned long long)networkActivityMapPart2;
-(NSString *)ownerKey;
-(BOOL)inheritEarlyProperties:(id)arg1 ;
-(void)setOwnerKey:(NSString *)arg1 ;
-(void)setActivityBitmapInfo:(id)arg1 withOwner:(id)arg2 ;
-(BOOL)isForcedNonRNF;
-(void)setIsRNF:(BOOL)arg1 ;
-(void)setTxUnacked:(unsigned)arg1 ;
-(void)setClosedOut:(BOOL)arg1 ;
-(void)inheritLateProperties:(id)arg1 ;
-(void)setCellDownlRate:(double)arg1 ;
-(void)setWifiDownlRate:(double)arg1 ;
-(NSDate *)startingTimestamp;
-(void)setIsForcedNonRNF:(BOOL)arg1 ;
-(BOOL)isRNF;
-(unsigned)trafficClassFlags;
-(unsigned)trafficMgtFlags;
-(long long)ifType;
-(double)wifiDownlRate;
-(double)cellDownlRate;
-(void)setIfType:(long long)arg1 ;
-(AppTracker *)ultimateUser;
-(AppTracker *)immediateUser;
-(void)setTrackerForStatistics:(AppTracker *)arg1 ;
-(BOOL)networkActivityMapShouldNotBeCounted;
-(BOOL)networkActivityMapRolledOver;
-(AppTracker *)trackerForStatistics;
-(void)setUltimateUser:(AppTracker *)arg1 ;
-(void)setImmediateUser:(AppTracker *)arg1 ;
-(void)setTrafficMgtFlags:(unsigned)arg1 ;
-(void)setTrafficClassFlags:(unsigned)arg1 ;
-(void)setStartingTimestamp:(NSDate *)arg1 ;
-(void)_decrementCounters;
-(void)_updateScoreholder:(scoreHolder*)arg1 ;
-(BOOL)closedOut;
-(BOOL)isNiced;
-(void)setIsNiced:(BOOL)arg1 ;
-(BOOL)trackedAsForeground;
-(void)setTrackedAsForeground:(BOOL)arg1 ;
-(unsigned long long)backgroundCellFlowTrackingSeqNo;
-(void)setBackgroundCellFlowTrackingSeqNo:(unsigned long long)arg1 ;
-(void)setNetworkActivityMapStartTime:(unsigned long long)arg1 ;
-(void)setNetworkActivityMapPart1:(unsigned long long)arg1 ;
-(void)setNetworkActivityMapPart2:(unsigned long long)arg1 ;
-(void)setNetworkActivityMapShouldNotBeCounted:(BOOL)arg1 ;
-(void)setNetworkActivityMapRolledOver:(BOOL)arg1 ;
@end

