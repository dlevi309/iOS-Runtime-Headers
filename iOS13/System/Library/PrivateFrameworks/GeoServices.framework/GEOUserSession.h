/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class GEOUserSessionEntity, NSData, NSObject, GEOUserSessionSnapshot;

@interface GEOUserSession : NSObject {

	GEOSessionID _sessionID;
	double _sessionCreationTime;
	unsigned _sequenceNumber;
	GEOSessionID _longSessionID;
	double _longSessionIDGenerationTime;
	GEOSessionID _thirtyDayCountsSessionID;
	double _thirtyDayCountsSessionIDGenerationTime;
	BOOL _shareSessionWithMaps;
	GEOUserSessionEntity* _mapsUserSessionEntity;
	BOOL _zeroSessionIDMode;
	GEOSessionID _cohortSessionID;
	double _cohortSessionStartTime;
	os_unfair_lock_s _lock;
	NSData* _navigationDirectionsID;
	GEOSessionID _navigationSessionID;
	double _navigationSessionStartTime;
	NSData* _previousNavigationDirectionsID;
	GEOSessionID _previousNavigationSessionID;
	double _previousNavigationSessionStartTime;
	double _previousNavigationSessionEndTime;
	GEOSessionID _zeroSessionID;
	unsigned char _shortSessionMachElapsedShiftFactor;
	GEOSessionID _shortSessionID;
	double _shortSessionCreationTime;
	unsigned long long _shortSessionMachTimeBasis;
	NSObject*<OS_dispatch_queue> _snapshotQueue;
	int _shortSessionChangedToken;

}

@property (assign,nonatomic) BOOL shareSessionWithMaps;                                   //@synthesize shareSessionWithMaps=_shareSessionWithMaps - In the implementation block
@property (nonatomic,retain) GEOUserSessionEntity * mapsUserSessionEntity;                //@synthesize mapsUserSessionEntity=_mapsUserSessionEntity - In the implementation block
@property (nonatomic,readonly) GEOSessionID longSessionID; 
@property (assign,nonatomic) BOOL zeroSessionIDMode;                                      //@synthesize zeroSessionIDMode=_zeroSessionIDMode - In the implementation block
@property (nonatomic,readonly) GEOUserSessionEntity * longSessionEntity; 
@property (nonatomic,readonly) GEOUserSessionEntity * navSessionEntity; 
@property (nonatomic,readonly) GEOUserSessionEntity * cohortSessionEntity; 
@property (nonatomic,readonly) GEOUserSessionSnapshot * userSessionSnapshot; 
+(id)sharedInstance;
+(BOOL)isGeod;
+(void)setIsGeod;
-(id)init;
-(void)dealloc;
-(GEOUserSessionEntity *)mapsUserSessionEntity;
-(void)_updateWithNewUUIDForSessionID:(GEOSessionID*)arg1 ;
-(void)_shortSessionWithBasisComponentsCompletion:(/*^block*/id)arg1 ;
-(void)_overrideShortSessionId:(GEOSessionID)arg1 sessionMachBasisTime:(unsigned long long)arg2 sessionStartTime:(double)arg3 ;
-(id)shortSessionEntity;
-(GEOUserSessionEntity *)longSessionEntity;
-(GEOUserSessionEntity *)navSessionEntity;
-(GEOUserSessionEntity *)cohortSessionEntity;
-(void)_rollInitialLongSessionId;
-(void)_renewLongSessionID;
-(void)_renewThirtyDayCountsSessionID;
-(void)_renewCohortSessionID;
-(void)prepareForNewShortSession;
-(void)_createLongSessionWithOffset:(BOOL)arg1 ;
-(void)setSharedMapsUserSessionEntity:(id)arg1 shareSessionIDWithMaps:(BOOL)arg2 ;
-(id)thirtyDayCountsEntity;
-(double)_getCurrentTime;
-(void)_generateNewNavSessionID;
-(GEOSessionID)longSessionID;
-(GEOSessionID)thirtyDayCountsSessionID;
-(void)_updateNavSessionID;
-(void)_resetSessionID;
-(void)_safe_renewLongSessionID;
-(void)_safe_renewThirtyDayCountsSessionID;
-(void)_safe_renewCohortSessionID;
-(void)mapsSessionEntityWithCallback:(/*^block*/id)arg1 shareSessionIDWithMaps:(BOOL)arg2 resetSession:(BOOL)arg3 ;
-(void)setShareSessionWithMaps:(BOOL)arg1 ;
-(void)setMapsUserSessionEntity:(GEOUserSessionEntity *)arg1 ;
-(GEOUserSessionSnapshot *)userSessionSnapshot;
-(void)startNavigationSessionWithDirectionsID:(id)arg1 originalDirectionsID:(id)arg2 ;
-(void)endNavigationSession;
-(BOOL)shareSessionWithMaps;
-(BOOL)zeroSessionIDMode;
-(void)setZeroSessionIDMode:(BOOL)arg1 ;
@end

