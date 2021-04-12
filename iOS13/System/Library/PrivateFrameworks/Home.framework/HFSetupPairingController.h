/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

@class HFSetupPairingContext, HFSetupAccessoryResult, HMHome, NSString, HFDiscoveredAccessory, HMAccessorySetupCompletedInfo;


@protocol HFSetupPairingController <NSObject>
@property (nonatomic,readonly) HFSetupPairingContext * context; 
@property (nonatomic,retain) HFSetupAccessoryResult * setupResult; 
@property (nonatomic,readonly) HMHome * home; 
@property (nonatomic,readonly) unsigned long long phase; 
@property (nonatomic,readonly) NSString * statusTitle; 
@property (nonatomic,readonly) NSString * statusDescription; 
@property (nonatomic,readonly) HFDiscoveredAccessory * discoveredAccessoryToPair; 
@property (nonatomic,readonly) HMAccessorySetupCompletedInfo * completedInfo; 
@required
+(BOOL)supportsSetupPayloadRetry;
-(id)cancel;
-(HFSetupPairingContext *)context;
-(HMHome *)home;
-(unsigned long long)phase;
-(NSString *)statusDescription;
-(NSString *)statusTitle;
-(HFDiscoveredAccessory *)discoveredAccessoryToPair;
-(HFSetupAccessoryResult *)setupResult;
-(void)setSetupResult:(id)arg1;
-(id)pairedAccessories;
-(void)addPairingObserver:(id)arg1;
-(void)removePairingObserver:(id)arg1;
-(void)startWithHome:(id)arg1;
-(HMAccessorySetupCompletedInfo *)completedInfo;

@end

