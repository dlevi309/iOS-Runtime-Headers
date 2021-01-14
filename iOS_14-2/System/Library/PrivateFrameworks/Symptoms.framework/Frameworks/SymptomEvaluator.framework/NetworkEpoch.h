/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, AnalyticsWorkspace, NetworkAttachmentAnalytics, NSMutableDictionary, NSManagedObjectID, NSDictionary, SFNetworkAttachment, StopWatch, SFLiveRoutePerf, NSMutableSet, NSUUID;

@interface NetworkEpoch : NSObject <NSCopying> {

	NSDate* createdAt;
	NSString* identifier;
	BOOL fromRoamingEvent;
	AnalyticsWorkspace* workspace;
	NetworkAttachmentAnalytics* naspace;
	NSMutableDictionary* tickers;
	NSManagedObjectID* currentLiveRoutePerfObjectID;
	double lastBytesDelta;
	NSDate* lastBytesPartialUpdate;
	BOOL isSnapshot;
	NSDictionary* scores;
	BOOL isLowLqm;
	BOOL isLowq;
	BOOL isFaulty;
	BOOL isKnownGood;
	BOOL _active;
	BOOL _oncell;
	BOOL _supportsIPv4;
	BOOL _supportsIPv6;
	BOOL _hasInternetDNS;
	BOOL _knownGoodNotified;
	BOOL _deleteNetworkAttachmentsWhenDone;
	int _bars;
	unsigned _seqno;
	SFNetworkAttachment* _durable;
	long long _loi;
	NStatSourceRef _defRoute4;
	NStatSourceRef _defRoute6;
	NSString* _interfaceName;
	double _lqmTransitions;
	NSDate* _lastCountedDown;
	StopWatch* _overall;
	StopWatch* _lowLqm;
	StopWatch* _lowq;
	StopWatch* _fatal;
	SFLiveRoutePerf* _partial;
	SFLiveRoutePerf* _partial4;
	SFLiveRoutePerf* _partial6;
	double _initialRttAvg;
	double _initialRttVar;
	double _topDownlRate;
	NSMutableSet* _hasDNS;
	NSMutableSet* _impDNS;
	NSMutableSet* _hasGW;
	NSUUID* _uuid;

}

@property (assign,nonatomic) long long loi;                                         //@synthesize loi=_loi - In the implementation block
@property (readonly) BOOL active;                                                   //@synthesize active=_active - In the implementation block
@property (readonly) BOOL oncell;                                                   //@synthesize oncell=_oncell - In the implementation block
@property (assign,nonatomic) NStatSourceRef defRoute4;                              //@synthesize defRoute4=_defRoute4 - In the implementation block
@property (assign,nonatomic) NStatSourceRef defRoute6;                              //@synthesize defRoute6=_defRoute6 - In the implementation block
@property (assign,nonatomic) BOOL supportsIPv4;                                     //@synthesize supportsIPv4=_supportsIPv4 - In the implementation block
@property (assign,nonatomic) BOOL supportsIPv6;                                     //@synthesize supportsIPv6=_supportsIPv6 - In the implementation block
@property (readonly) NSString * primaryKey; 
@property (readonly) NSString * interfaceName;                                      //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign) int bars;                                                        //@synthesize bars=_bars - In the implementation block
@property (assign) double lqmTransitions;                                           //@synthesize lqmTransitions=_lqmTransitions - In the implementation block
@property (nonatomic,retain) NSDate * lastCountedDown;                              //@synthesize lastCountedDown=_lastCountedDown - In the implementation block
@property (nonatomic,retain) StopWatch * overall;                                   //@synthesize overall=_overall - In the implementation block
@property (nonatomic,retain) StopWatch * lowLqm;                                    //@synthesize lowLqm=_lowLqm - In the implementation block
@property (nonatomic,retain) StopWatch * lowq;                                      //@synthesize lowq=_lowq - In the implementation block
@property (nonatomic,retain) StopWatch * fatal;                                     //@synthesize fatal=_fatal - In the implementation block
@property (nonatomic,retain) SFLiveRoutePerf * partial;                             //@synthesize partial=_partial - In the implementation block
@property (nonatomic,retain) SFLiveRoutePerf * partial4;                            //@synthesize partial4=_partial4 - In the implementation block
@property (nonatomic,retain) SFLiveRoutePerf * partial6;                            //@synthesize partial6=_partial6 - In the implementation block
@property (nonatomic,readonly) double initialRttAvg;                                //@synthesize initialRttAvg=_initialRttAvg - In the implementation block
@property (nonatomic,readonly) double initialRttVar;                                //@synthesize initialRttVar=_initialRttVar - In the implementation block
@property (assign,nonatomic) double topDownlRate;                                   //@synthesize topDownlRate=_topDownlRate - In the implementation block
@property (nonatomic,retain) NSMutableSet * hasDNS;                                 //@synthesize hasDNS=_hasDNS - In the implementation block
@property (nonatomic,retain) NSMutableSet * impDNS;                                 //@synthesize impDNS=_impDNS - In the implementation block
@property (nonatomic,retain) NSMutableSet * hasGW;                                  //@synthesize hasGW=_hasGW - In the implementation block
@property (assign,nonatomic) BOOL hasInternetDNS;                                   //@synthesize hasInternetDNS=_hasInternetDNS - In the implementation block
@property (nonatomic,readonly) SFNetworkAttachment * durable;                       //@synthesize durable=_durable - In the implementation block
@property (nonatomic,readonly) SFLiveRoutePerf * currentLiveRoutePerf; 
@property (nonatomic,retain) NSUUID * uuid;                                         //@synthesize uuid=_uuid - In the implementation block
@property (assign) BOOL knownGoodNotified;                                          //@synthesize knownGoodNotified=_knownGoodNotified - In the implementation block
@property (readonly) unsigned seqno;                                                //@synthesize seqno=_seqno - In the implementation block
@property (assign,nonatomic) BOOL deleteNetworkAttachmentsWhenDone;                 //@synthesize deleteNetworkAttachmentsWhenDone=_deleteNetworkAttachmentsWhenDone - In the implementation block
+(void)resetDataFor:(id)arg1 exceptFor:(id)arg2 inWorkspace:(id)arg3 ;
+(void)resetDataForSSIDs:(id)arg1 exceptFor:(id)arg2 inWorkspace:(id)arg3 ;
+(unsigned long long)coalescingFactor;
+(BOOL)pruneDataOlderThan:(id)arg1 exceptFor:(id)arg2 inWorkspace:(id)arg3 ;
+(id)snapshotsIn:(id)arg1 olderThan:(id)arg2 ;
+(BOOL)parsePrimaryKeyStr:(const char*)arg1 majorIDLengthInBytes:(int*)arg2 minorIDLengthInBytes:(int*)arg3 ;
+(id)epochWithPrimaryKey:(id)arg1 interfaceName:(id)arg2 isCell:(BOOL)arg3 maxBars:(int)arg4 roamingEvent:(BOOL)arg5 roamingAttrs:(long long)arg6 supportsIPv4:(BOOL)arg7 supportsIPv6:(BOOL)arg8 inWorkspace:(id)arg9 andQueue:(id)arg10 ;
+(BOOL)parsePrimaryKey:(id)arg1 majorID:(id*)arg2 minorID:(id*)arg3 ;
-(BOOL)supportsIPv6;
-(NSString *)primaryKey;
-(void)setSupportsIPv4:(BOOL)arg1 ;
-(void)setSupportsIPv6:(BOOL)arg1 ;
-(BOOL)supportsIPv4;
-(SFLiveRoutePerf *)partial;
-(NSUUID *)uuid;
-(void)_retrieveLOIAttrsOnQueue:(id)arg1 roamingEvent:(BOOL)arg2 roamingAttrs:(long long)arg3 ;
-(BOOL)active;
-(id)_initWithPrimaryKey:(id)arg1 interfaceName:(id)arg2 isCell:(BOOL)arg3 maxBars:(int)arg4 roamingEvent:(BOOL)arg5 roamingAttrs:(long long)arg6 supportsIPv4:(BOOL)arg7 supportsIPv6:(BOOL)arg8 inWorkspace:(id)arg9 andQueue:(id)arg10 ;
-(BOOL)matchesLOI:(long long)arg1 ;
-(id)establishPartials:(id)arg1 withFlag:(BOOL)arg2 ;
-(void)setLowq:(StopWatch *)arg1 ;
-(void)setPartial:(SFLiveRoutePerf *)arg1 ;
-(BOOL)hasInternetDNS;
-(void)setImpDNS:(NSMutableSet *)arg1 ;
-(BOOL)oncell;
-(SFLiveRoutePerf *)partial4;
-(NStatSourceRef)defRoute4;
-(BOOL)hasCountDownActive:(id)arg1 ;
-(void)setOverall:(StopWatch *)arg1 ;
-(double)topDownlRate;
-(void)setBars:(int)arg1 ;
-(void)setHasGW:(NSMutableSet *)arg1 ;
-(void)updateMetrics:(id)arg1 source:(NStatSourceRef)arg2 wasProgress:(/*^block*/id)arg3 ;
-(NSString *)interfaceName;
-(BOOL)countDownStop:(id)arg1 eventTimeStamp:(id)arg2 ;
-(int)bars;
-(void)setLqmTransitions:(double)arg1 ;
-(int)compareToSnapshot:(id)arg1 ;
-(NSMutableSet *)hasGW;
-(id)description;
-(StopWatch *)fatal;
-(double)initialRttVar;
-(StopWatch *)overall;
-(void)setKnownGoodNotified:(BOOL)arg1 ;
-(void)setPartial6:(SFLiveRoutePerf *)arg1 ;
-(void)reportCertError;
-(void)setDefRoute6:(NStatSourceRef)arg1 ;
-(void)setHasInternetDNS:(BOOL)arg1 ;
-(long long)getMatchingRTLocationOfInterestType;
-(void)reportAdminDisable;
-(void)setLastCountedDown:(NSDate *)arg1 ;
-(SFNetworkAttachment *)durable;
-(double)lqmTransitions;
-(NSMutableSet *)hasDNS;
-(void)setDeleteNetworkAttachmentsWhenDone:(BOOL)arg1 ;
-(void)setPartial4:(SFLiveRoutePerf *)arg1 ;
-(BOOL)knownGoodNotified;
-(void)reportDataStall;
-(id)_createCellSignature;
-(StopWatch *)lowLqm;
-(BOOL)createCountDown:(id)arg1 atTime:(id)arg2 nextTick:(unsigned long long)arg3 ticksTotal:(unsigned long long)arg4 onQueue:(id)arg5 withIterationBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(StopWatch *)lowq;
-(void)setLoi:(long long)arg1 ;
-(SFLiveRoutePerf *)currentLiveRoutePerf;
-(NSDate *)lastCountedDown;
-(void)setDefRoute4:(NStatSourceRef)arg1 ;
-(SFLiveRoutePerf *)partial6;
-(long long)loi;
-(id)_init;
-(NSMutableSet *)impDNS;
-(void)unloadDurableState;
-(BOOL)_isLiveRoutePerfinScope:(id)arg1 forTime:(id)arg2 ;
-(BOOL)hasTypicalShortStay;
-(void)setHasDNS:(NSMutableSet *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)_networkAttachmentDurableState;
-(void)setTopDownlRate:(double)arg1 ;
-(double)initialRttAvg;
-(BOOL)deleteNetworkAttachmentsWhenDone;
-(void)setFatal:(StopWatch *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mapLOIToString;
-(unsigned)seqno;
-(NStatSourceRef)defRoute6;
-(void)retire;
-(void)dealloc;
-(void)setLowLqm:(StopWatch *)arg1 ;
-(void)reportCaptivityRedirect;
@end

