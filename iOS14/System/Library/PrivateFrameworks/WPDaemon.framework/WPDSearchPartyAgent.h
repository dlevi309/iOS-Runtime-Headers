/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)generateStateDump;
-(void)stopTest;
-(void)setNearbyTokensChangedBlock:(id)arg1 ;
-(id)nearbyTokensChangedBlock;
-(void)setBeaconKeysChangedBlock:(id)arg1 ;
-(void)initSPObjects;
-(id)initWithQueue:(id)arg1 beaconChange:(/*^block*/id)arg2 tokensChange:(/*^block*/id)arg3 ;
-(void)rollKeysWithRequestID:(unsigned long long)arg1 ;
-(void)rollTokens_async;
-(void)rollKeys_async_completion:(/*^block*/id)arg1 ;
-(id)tokensChange;
-(void)setDisableScans:(BOOL)arg1 ;
-(void)updateTestBeaconState:(id)arg1 ;
-(void)setTestNearbyTokens:(NSArray *)arg1 ;
-(void)setBeaconKey:(NSData *)arg1 ;
-(void)rollTokensWithRequestID:(unsigned long long)arg1 ;
-(BOOL)beaconState;
-(void)setTestBeaconStatus:(unsigned char)arg1 ;
-(void)setTestBeaconReserved:(NSData *)arg1 ;
-(void)setSpBeaconKeysUpdated:(NSDate *)arg1 ;
-(unsigned char)spBeaconStatus;
-(void)setSpNearbyTokens:(NSArray *)arg1 ;
-(void)startTest;
-(void)setPendingKeyCompletions:(WPDPendingCompletions *)arg1 ;
-(BOOL)testBeaconState;
-(void)setSpBeaconState:(BOOL)arg1 ;
-(NSArray *)beaconKeys;
-(void)updateTestBeaconStatus:(id)arg1 ;
-(BOOL)spBeaconState;
-(void)updateTestBeaconExtended:(id)arg1 ;
-(void)setTestBeaconKeys:(NSArray *)arg1 ;
-(BOOL)disableScans;
-(NSArray *)nearbyTokens;
-(id)beaconChange;
-(NSDate *)spBeaconKeysUpdated;
-(void)setPendingTokenCompletions:(WPDPendingCompletions *)arg1 ;
-(void)completedKeyRequestID:(unsigned long long)arg1 success:(BOOL)arg2 ;
-(NSData *)beaconReserved;
-(unsigned char)beaconStatus;
-(void)setSpNearbyTokensUpdated:(NSDate *)arg1 ;
-(BOOL)isTestMode;
-(NSDate *)testNearbyTokensUpdated;
-(void)setIsTestMode:(BOOL)arg1 ;
-(NSDate *)spNearbyTokensUpdated;
-(NSDate *)beaconKeysUpdated;
-(void)setBeaconManager:(SPBeaconManager *)arg1 ;
-(NSData *)spBeaconReserved;
-(WPDPendingCompletions *)pendingTokenCompletions;
-(void)setTestBeaconState:(BOOL)arg1 ;
-(void)setSpBeaconKeys:(NSArray *)arg1 ;
-(void)setSpBeaconStatus:(unsigned char)arg1 ;
-(SPBeaconManager *)beaconManager;
-(unsigned char)testBeaconStatus;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSDate *)testBeaconKeysUpdated;
-(NSArray *)testNearbyTokens;
-(WPDPendingCompletions *)pendingKeyCompletions;
-(void)rollKeys_async;
-(NSDate *)nearbyTokensUpdated;
-(void)rollTokens_async_completion:(/*^block*/id)arg1 ;
-(NSArray *)spBeaconKeys;
-(void)setTestNearbyTokensUpdated:(NSDate *)arg1 ;
-(NSArray *)testBeaconKeys;
-(void)setBeaconStatusChangedBlock:(id)arg1 ;
-(id)beaconKeysChangedBlock;
-(NSData *)beaconKey;
-(void)completedTokenRequestID:(unsigned long long)arg1 success:(BOOL)arg2 ;
-(id)beaconStateChangedBlock;
-(NSData *)testBeaconReserved;
-(void)updateTestNearOwnerTokens:(id)arg1 ;
-(id)beaconStatusChangedBlock;
-(NSArray *)spNearbyTokens;
-(void)setTokensChange:(id)arg1 ;
-(void)setTestBeaconKeysUpdated:(NSDate *)arg1 ;
-(void)setBeaconStateChangedBlock:(id)arg1 ;
-(void)dealloc;
-(void)setBeaconChange:(id)arg1 ;
-(void)updateTestBeaconKeys:(id)arg1 ;
@end

