/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/


@protocol OS_dispatch_queue;
@class NSData, NSObject, SPBeaconManager, NSArray, NSDate, WPDPendingCompletions;

@interface WPDSearchPartyAgent : NSObject {

	BOOL _isTestMode;
	BOOL _disableScans;
	BOOL _spBeaconState;
	unsigned char _spBeaconStatus;
	BOOL _testBeaconState;
	unsigned char _testBeaconStatus;
	NSData* _beaconKey;
	NSObject*<OS_dispatch_queue> _queue;
	NSData* _spBeaconReserved;
	NSData* _testBeaconReserved;
	SPBeaconManager* _beaconManager;
	/*^block*/id _beaconChange;
	NSArray* _spBeaconKeys;
	NSDate* _spBeaconKeysUpdated;
	/*^block*/id _beaconStateChangedBlock;
	/*^block*/id _beaconKeysChangedBlock;
	/*^block*/id _beaconStatusChangedBlock;
	/*^block*/id _nearbyTokensChangedBlock;
	/*^block*/id _tokensChange;
	NSArray* _spNearbyTokens;
	NSDate* _spNearbyTokensUpdated;
	NSArray* _testNearbyTokens;
	NSArray* _testBeaconKeys;
	NSDate* _testNearbyTokensUpdated;
	NSDate* _testBeaconKeysUpdated;
	WPDPendingCompletions* _pendingKeyCompletions;
	WPDPendingCompletions* _pendingTokenCompletions;

}

@property (retain) NSData * beaconKey;                                           //@synthesize beaconKey=_beaconKey - In the implementation block
@property (__weak,readonly) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (assign) BOOL disableScans;                                            //@synthesize disableScans=_disableScans - In the implementation block
@property (assign) BOOL isTestMode;                                              //@synthesize isTestMode=_isTestMode - In the implementation block
@property (assign) BOOL spBeaconState;                                           //@synthesize spBeaconState=_spBeaconState - In the implementation block
@property (assign) unsigned char spBeaconStatus;                                 //@synthesize spBeaconStatus=_spBeaconStatus - In the implementation block
@property (readonly) NSData * spBeaconReserved;                                  //@synthesize spBeaconReserved=_spBeaconReserved - In the implementation block
@property (assign) BOOL testBeaconState;                                         //@synthesize testBeaconState=_testBeaconState - In the implementation block
@property (assign) unsigned char testBeaconStatus;                               //@synthesize testBeaconStatus=_testBeaconStatus - In the implementation block
@property (retain) NSData * testBeaconReserved;                                  //@synthesize testBeaconReserved=_testBeaconReserved - In the implementation block
@property (retain) SPBeaconManager * beaconManager;                              //@synthesize beaconManager=_beaconManager - In the implementation block
@property (copy) id beaconChange;                                                //@synthesize beaconChange=_beaconChange - In the implementation block
@property (retain) NSArray * spBeaconKeys;                                       //@synthesize spBeaconKeys=_spBeaconKeys - In the implementation block
@property (retain) NSDate * spBeaconKeysUpdated;                                 //@synthesize spBeaconKeysUpdated=_spBeaconKeysUpdated - In the implementation block
@property (copy) id beaconStateChangedBlock;                                     //@synthesize beaconStateChangedBlock=_beaconStateChangedBlock - In the implementation block
@property (copy) id beaconKeysChangedBlock;                                      //@synthesize beaconKeysChangedBlock=_beaconKeysChangedBlock - In the implementation block
@property (copy) id beaconStatusChangedBlock;                                    //@synthesize beaconStatusChangedBlock=_beaconStatusChangedBlock - In the implementation block
@property (copy) id nearbyTokensChangedBlock;                                    //@synthesize nearbyTokensChangedBlock=_nearbyTokensChangedBlock - In the implementation block
@property (copy) id tokensChange;                                                //@synthesize tokensChange=_tokensChange - In the implementation block
@property (retain) NSArray * spNearbyTokens;                                     //@synthesize spNearbyTokens=_spNearbyTokens - In the implementation block
@property (retain) NSDate * spNearbyTokensUpdated;                               //@synthesize spNearbyTokensUpdated=_spNearbyTokensUpdated - In the implementation block
@property (retain) NSArray * testNearbyTokens;                                   //@synthesize testNearbyTokens=_testNearbyTokens - In the implementation block
@property (retain) NSArray * testBeaconKeys;                                     //@synthesize testBeaconKeys=_testBeaconKeys - In the implementation block
@property (retain) NSDate * testNearbyTokensUpdated;                             //@synthesize testNearbyTokensUpdated=_testNearbyTokensUpdated - In the implementation block
@property (retain) NSDate * testBeaconKeysUpdated;                               //@synthesize testBeaconKeysUpdated=_testBeaconKeysUpdated - In the implementation block
@property (readonly) NSArray * beaconKeys; 
@property (readonly) NSDate * nearbyTokensUpdated; 
@property (readonly) NSDate * beaconKeysUpdated; 
@property (retain) WPDPendingCompletions * pendingKeyCompletions;                //@synthesize pendingKeyCompletions=_pendingKeyCompletions - In the implementation block
@property (retain) WPDPendingCompletions * pendingTokenCompletions;              //@synthesize pendingTokenCompletions=_pendingTokenCompletions - In the implementation block
@property (readonly) BOOL beaconState; 
@property (readonly) unsigned char beaconStatus; 
@property (readonly) NSData * beaconReserved; 
@property (readonly) NSArray * nearbyTokens; 
+(id)spBeaconKeyFromTestKey:(id)arg1 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)startTest;
-(void)stopTest;
-(id)nearbyTokensChangedBlock;
-(void)setNearbyTokensChangedBlock:(id)arg1 ;
-(id)generateStateDump;
-(void)initSPObjects;
-(BOOL)isTestMode;
-(BOOL)testBeaconState;
-(BOOL)spBeaconState;
-(unsigned char)testBeaconStatus;
-(unsigned char)spBeaconStatus;
-(NSData *)testBeaconReserved;
-(NSData *)spBeaconReserved;
-(NSArray *)testNearbyTokens;
-(NSArray *)spNearbyTokens;
-(NSDate *)testNearbyTokensUpdated;
-(NSDate *)spNearbyTokensUpdated;
-(NSArray *)testBeaconKeys;
-(NSArray *)spBeaconKeys;
-(NSDate *)testBeaconKeysUpdated;
-(NSDate *)spBeaconKeysUpdated;
-(void)setBeaconManager:(SPBeaconManager *)arg1 ;
-(void)setBeaconStateChangedBlock:(id)arg1 ;
-(void)setBeaconKeysChangedBlock:(id)arg1 ;
-(void)setBeaconStatusChangedBlock:(id)arg1 ;
-(void)setBeaconChange:(id)arg1 ;
-(void)setTokensChange:(id)arg1 ;
-(void)setPendingKeyCompletions:(WPDPendingCompletions *)arg1 ;
-(void)setPendingTokenCompletions:(WPDPendingCompletions *)arg1 ;
-(BOOL)beaconState;
-(NSData *)beaconKey;
-(unsigned char)beaconStatus;
-(NSData *)beaconReserved;
-(NSArray *)beaconKeys;
-(NSDate *)beaconKeysUpdated;
-(NSArray *)nearbyTokens;
-(NSDate *)nearbyTokensUpdated;
-(WPDPendingCompletions *)pendingTokenCompletions;
-(WPDPendingCompletions *)pendingKeyCompletions;
-(void)setSpBeaconState:(BOOL)arg1 ;
-(void)setSpBeaconKeysUpdated:(NSDate *)arg1 ;
-(void)rollKeys_async_completion:(/*^block*/id)arg1 ;
-(void)setSpBeaconKeys:(NSArray *)arg1 ;
-(void)setSpBeaconStatus:(unsigned char)arg1 ;
-(void)setSpNearbyTokens:(NSArray *)arg1 ;
-(void)setSpNearbyTokensUpdated:(NSDate *)arg1 ;
-(void)rollTokens_async_completion:(/*^block*/id)arg1 ;
-(id)beaconStateChangedBlock;
-(SPBeaconManager *)beaconManager;
-(id)beaconKeysChangedBlock;
-(id)beaconStatusChangedBlock;
-(void)rollKeysWithRequestID:(unsigned long long)arg1 ;
-(void)setBeaconKey:(NSData *)arg1 ;
-(id)beaconChange;
-(void)rollTokensWithRequestID:(unsigned long long)arg1 ;
-(id)tokensChange;
-(void)setIsTestMode:(BOOL)arg1 ;
-(void)updateTestBeaconKeys:(id)arg1 ;
-(void)updateTestNearOwnerTokens:(id)arg1 ;
-(void)updateTestBeaconState:(id)arg1 ;
-(void)updateTestBeaconStatus:(id)arg1 ;
-(void)updateTestBeaconExtended:(id)arg1 ;
-(void)rollKeys_async;
-(void)rollTokens_async;
-(void)setTestNearbyTokens:(NSArray *)arg1 ;
-(void)setTestNearbyTokensUpdated:(NSDate *)arg1 ;
-(void)setTestBeaconKeys:(NSArray *)arg1 ;
-(void)setTestBeaconKeysUpdated:(NSDate *)arg1 ;
-(void)setTestBeaconStatus:(unsigned char)arg1 ;
-(void)setTestBeaconReserved:(NSData *)arg1 ;
-(void)setTestBeaconState:(BOOL)arg1 ;
-(id)initWithQueue:(id)arg1 beaconChange:(/*^block*/id)arg2 tokensChange:(/*^block*/id)arg3 ;
-(void)completedKeyRequestID:(unsigned long long)arg1 success:(BOOL)arg2 ;
-(void)completedTokenRequestID:(unsigned long long)arg1 success:(BOOL)arg2 ;
-(BOOL)disableScans;
-(void)setDisableScans:(BOOL)arg1 ;
@end

