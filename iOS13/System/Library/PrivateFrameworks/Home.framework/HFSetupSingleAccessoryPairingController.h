/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFHomeObserver.h>
#import <libobjc.A.dylib/HFSetupPairingController.h>

@class HFSetupPairingContext, HFSetupAccessoryResult, HMHome, NSString, HFDiscoveredAccessory, HMAccessorySetupCompletedInfo, NSSet, NSHashTable, NAFuture, NSDate;

@interface HFSetupSingleAccessoryPairingController : NSObject <HFHomeObserver, HFSetupPairingController> {

	BOOL _accessoryRequiresCode;
	HFSetupPairingContext* _context;
	HFSetupAccessoryResult* _setupResult;
	HMAccessorySetupCompletedInfo* _completedInfo;
	HFDiscoveredAccessory* _discoveredAccessoryToPair;
	unsigned long long _phase;
	NSString* _statusTitle;
	NSString* _statusDescription;
	HMHome* _home;
	NSSet* _pairedAccessories;
	NSHashTable* _pairingObservers;
	NAFuture* _pairingFuture;
	NSDate* _phaseStartDate;

}

@property (assign,nonatomic) unsigned long long phase;                                         //@synthesize phase=_phase - In the implementation block
@property (nonatomic,retain) NSString * statusTitle;                                           //@synthesize statusTitle=_statusTitle - In the implementation block
@property (nonatomic,retain) NSString * statusDescription;                                     //@synthesize statusDescription=_statusDescription - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                    //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSSet * pairedAccessories;                                        //@synthesize pairedAccessories=_pairedAccessories - In the implementation block
@property (nonatomic,retain) NSHashTable * pairingObservers;                                   //@synthesize pairingObservers=_pairingObservers - In the implementation block
@property (nonatomic,retain) NAFuture * pairingFuture;                                         //@synthesize pairingFuture=_pairingFuture - In the implementation block
@property (nonatomic,retain) NSDate * phaseStartDate;                                          //@synthesize phaseStartDate=_phaseStartDate - In the implementation block
@property (assign,nonatomic) BOOL accessoryRequiresCode;                                       //@synthesize accessoryRequiresCode=_accessoryRequiresCode - In the implementation block
@property (nonatomic,readonly) HFDiscoveredAccessory * discoveredAccessoryToPair;              //@synthesize discoveredAccessoryToPair=_discoveredAccessoryToPair - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HFSetupPairingContext * context;                                //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) HFSetupAccessoryResult * setupResult;                             //@synthesize setupResult=_setupResult - In the implementation block
@property (nonatomic,readonly) HMAccessorySetupCompletedInfo * completedInfo;                  //@synthesize completedInfo=_completedInfo - In the implementation block
+(BOOL)supportsSetupPayloadRetry;
-(id)cancel;
-(HFSetupPairingContext *)context;
-(HMHome *)home;
-(unsigned long long)phase;
-(void)setPhase:(unsigned long long)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(void)home:(id)arg1 didAddAccessory:(id)arg2 ;
-(NSString *)statusDescription;
-(void)setStatusDescription:(NSString *)arg1 ;
-(void)setStatusTitle:(NSString *)arg1 ;
-(NSString *)statusTitle;
-(HFDiscoveredAccessory *)discoveredAccessoryToPair;
-(void)_assertValidTransitionFromPhase:(unsigned long long)arg1 toPhase:(unsigned long long)arg2 ;
-(void)setPhaseStartDate:(NSDate *)arg1 ;
-(void)_updateStatusTextAndNotifyDelegate:(BOOL)arg1 ;
-(NSHashTable *)pairingObservers;
-(void)_tryPairing;
-(void)setPairingObservers:(NSHashTable *)arg1 ;
-(HFSetupAccessoryResult *)setupResult;
-(void)_failPairingWithDiscoveredAccessory:(id)arg1 error:(id)arg2 ;
-(NAFuture *)pairingFuture;
-(void)_finishPairingWithDiscoveredAccessory:(id)arg1 ;
-(BOOL)accessoryRequiresCode;
-(NSDate *)phaseStartDate;
-(void)setPairedAccessories:(NSSet *)arg1 ;
-(void)setSetupResult:(HFSetupAccessoryResult *)arg1 ;
-(NSSet *)pairedAccessories;
-(void)addPairingObserver:(id)arg1 ;
-(void)removePairingObserver:(id)arg1 ;
-(void)startWithHome:(id)arg1 ;
-(HMAccessorySetupCompletedInfo *)completedInfo;
-(id)initWithContext:(id)arg1 discoveredAccessory:(id)arg2 ;
-(void)setPairingFuture:(NAFuture *)arg1 ;
-(void)setAccessoryRequiresCode:(BOOL)arg1 ;
@end

