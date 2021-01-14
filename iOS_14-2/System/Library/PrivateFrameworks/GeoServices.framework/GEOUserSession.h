/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	GEOSessionID _15MonthSessionID;
	double _15MonthSessionIDGenerationTime;
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

@property (assign,nonatomic) BOOL shareSessionWithMaps;                                       //@synthesize shareSessionWithMaps=_shareSessionWithMaps - In the implementation block
@property (nonatomic,retain) GEOUserSessionEntity * mapsUserSessionEntity;                    //@synthesize mapsUserSessionEntity=_mapsUserSessionEntity - In the implementation block
@property (nonatomic,readonly) GEOSessionID longSessionID; 
@property (nonatomic,readonly) GEOSessionID fifteenMonthSessionID; 
@property (assign,nonatomic) BOOL zeroSessionIDMode;                                          //@synthesize zeroSessionIDMode=_zeroSessionIDMode - In the implementation block
@property (nonatomic,readonly) GEOUserSessionEntity * longSessionEntity; 
@property (nonatomic,readonly) GEOUserSessionEntity * fifteenMonthSessionEntity; 
@property (nonatomic,readonly) GEOUserSessionEntity * navSessionEntity; 
@property (nonatomic,readonly) GEOUserSessionEntity * cohortSessionEntity; 
@property (nonatomic,readonly) GEOUserSessionSnapshot * userSessionSnapshot; 
+(id)sharedInstance;
+(BOOL)isGeod;
+(void)setInitialShareSessionWithMaps:(BOOL)arg1 ;
+(BOOL)initialShareSessionWithMaps;
+(void)setIsGeod;
-(void)_resetSessionID;
-(void)_safe_renewLongSessionID;
-(BOOL)zeroSessionIDMode;
-(id)init;
-(GEOUserSessionEntity *)cohortSessionEntity;
-(void)_renewLongSessionID;
-(void)_overrideShortSessionId:(GEOSessionID)arg1 sessionMachBasisTime:(unsigned long long)arg2 sessionStartTime:(double)arg3 ;
-(GEOUserSessionEntity *)mapsUserSessionEntity;
-(void)_createLongSessionWithOffset:(BOOL)arg1 ;
-(void)_renew15MonthSessionId;
-(GEOUserSessionEntity *)navSessionEntity;
-(void)_rollInitial15MonthSessionId;
-(GEOSessionID)longSessionID;
-(void)mapsSessionEntityWithCallback:(/*^block*/id)arg1 shareSessionIDWithMaps:(BOOL)arg2 resetSession:(BOOL)arg3 ;
-(GEOSessionID)fifteenMonthSessionID;
-(GEOUserSessionEntity *)fifteenMonthSessionEntity;
-(void)_updateNavSessionID;
-(void)setShareSessionWithMaps:(BOOL)arg1 ;
-(void)endNavigationSession;
-(void)_shortSessionWithBasisComponentsCompletion:(/*^block*/id)arg1 ;
-(void)_generateNewNavSessionID;
-(void)prepareForNewShortSession;
-(id)shortSessionEntity;
-(GEOUserSessionSnapshot *)userSessionSnapshot;
-(GEOUserSessionEntity *)longSessionEntity;
-(void)_rollInitialLongSessionId;
-(void)setSharedMapsUserSessionEntity:(id)arg1 shareSessionIDWithMaps:(BOOL)arg2 ;
-(void)startNavigationSessionWithDirectionsID:(id)arg1 originalDirectionsID:(id)arg2 ;
-(void)_updateWithNewUUIDForSessionID:(GEOSessionID*)arg1 ;
-(double)_getCurrentTime;
-(BOOL)shareSessionWithMaps;
-(void)setZeroSessionIDMode:(BOOL)arg1 ;
-(void)_create15MonthSessionFirstTime:(BOOL)arg1 ;
-(void)setMapsUserSessionEntity:(GEOUserSessionEntity *)arg1 ;
-(void)dealloc;
@end

