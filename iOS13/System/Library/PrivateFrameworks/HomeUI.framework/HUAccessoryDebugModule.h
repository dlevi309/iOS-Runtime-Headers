/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>

@protocol HFHomeKitObject;
@class HFItem, HMAccessory, HMSymptomsHandler, HFStaticItemProvider;

@interface HUAccessoryDebugModule : HFItemModule {

	BOOL _fakeWifiNetworkMismatchSymptom;
	id<HFHomeKitObject> _homeKitObject;
	HFItem* _fakeUnreachableItem;
	HFItem* _fakeShouldDisplayManualFixOptionItem;
	HFItem* _fakeWiFiSymptomItem;
	HFItem* _fakeWiFiPerformanceSymptomItem;
	HFItem* _fakeInternetFixSymptomItem;
	HFItem* _fakeHardwareFixSymptomItem;
	HFItem* _fakeGeneralFixSymptomItem;
	HFItem* _fakeHomeKitSymptomItem;
	HFItem* _fakeICloudSymptomItem;
	HFItem* _fakeITunesSymptomItem;
	HFItem* _fakeWifiNetworkMismatchSymptomItem;
	HFItem* _fakeVPNProfileExpiredSymptomItem;
	HFItem* _fake8021xNetworkSymptomItem;
	HFItem* _fakeNetworkProfileFixSymptomItem;
	HFItem* _fakeNetworkProfileInstallSymptomItem;
	HFItem* _fakeNetworkNotShareableSymptomItem;
	HFItem* _fakeStereoPairGeneralSymptomItem;
	HFItem* _fakeStereoPairNotFoundSymptomItem;
	HFItem* _fakeStereoPairVersionMismatchSymptomItem;
	HMAccessory* _accessory;
	HMSymptomsHandler* _symptomsHandler;
	HFStaticItemProvider* _debugItemProvider;

}

@property (nonatomic,readonly) HMAccessory * accessory;                                        //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) HMSymptomsHandler * symptomsHandler;                            //@synthesize symptomsHandler=_symptomsHandler - In the implementation block
@property (nonatomic,readonly) HFStaticItemProvider * debugItemProvider;                       //@synthesize debugItemProvider=_debugItemProvider - In the implementation block
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject;                              //@synthesize homeKitObject=_homeKitObject - In the implementation block
@property (nonatomic,readonly) HFItem * fakeUnreachableItem;                                   //@synthesize fakeUnreachableItem=_fakeUnreachableItem - In the implementation block
@property (nonatomic,readonly) HFItem * fakeShouldDisplayManualFixOptionItem;                  //@synthesize fakeShouldDisplayManualFixOptionItem=_fakeShouldDisplayManualFixOptionItem - In the implementation block
@property (nonatomic,readonly) HFItem * fakeWiFiSymptomItem;                                   //@synthesize fakeWiFiSymptomItem=_fakeWiFiSymptomItem - In the implementation block
@property (nonatomic,readonly) HFItem * fakeWiFiPerformanceSymptomItem;                        //@synthesize fakeWiFiPerformanceSymptomItem=_fakeWiFiPerformanceSymptomItem - In the implementation block
@property (nonatomic,readonly) HFItem * fakeInternetFixSymptomItem;                            //@synthesize fakeInternetFixSymptomItem=_fakeInternetFixSymptomItem - In the implementation block
@property (nonatomic,readonly) HFItem * fakeHardwareFixSymptomItem;                            //@synthesize fakeHardwareFixSymptomItem=_fakeHardwareFixSymptomItem - In the implementation block
@property (nonatomic,readonly) HFItem * fakeGeneralFixSymptomItem;                             //@synthesize fakeGeneralFixSymptomItem=_fakeGeneralFixSymptomItem - In the implementation block
@property (nonatomic,readonly) HFItem * fakeHomeKitSymptomItem;                                //@synthesize fakeHomeKitSymptomItem=_fakeHomeKitSymptomItem - In the implementation block
@property (nonatomic,readonly) HFItem * fakeICloudSymptomItem;                                 //@synthesize fakeICloudSymptomItem=_fakeICloudSymptomItem - In the implementation block
@property (nonatomic,readonly) HFItem * fakeITunesSymptomItem;                                 //@synthesize fakeITunesSymptomItem=_fakeITunesSymptomItem - In the implementation block
@property (nonatomic,readonly) HFItem * fakeWifiNetworkMismatchSymptomItem;                    //@synthesize fakeWifiNetworkMismatchSymptomItem=_fakeWifiNetworkMismatchSymptomItem - In the implementation block
@property (nonatomic,readonly) HFItem * fakeVPNProfileExpiredSymptomItem;                      //@synthesize fakeVPNProfileExpiredSymptomItem=_fakeVPNProfileExpiredSymptomItem - In the implementation block
@property (nonatomic,readonly) HFItem * fake8021xNetworkSymptomItem;                           //@synthesize fake8021xNetworkSymptomItem=_fake8021xNetworkSymptomItem - In the implementation block
@property (nonatomic,readonly) HFItem * fakeNetworkProfileFixSymptomItem;                      //@synthesize fakeNetworkProfileFixSymptomItem=_fakeNetworkProfileFixSymptomItem - In the implementation block
@property (nonatomic,readonly) HFItem * fakeNetworkProfileInstallSymptomItem;                  //@synthesize fakeNetworkProfileInstallSymptomItem=_fakeNetworkProfileInstallSymptomItem - In the implementation block
@property (nonatomic,readonly) HFItem * fakeNetworkNotShareableSymptomItem;                    //@synthesize fakeNetworkNotShareableSymptomItem=_fakeNetworkNotShareableSymptomItem - In the implementation block
@property (nonatomic,readonly) HFItem * fakeStereoPairGeneralSymptomItem;                      //@synthesize fakeStereoPairGeneralSymptomItem=_fakeStereoPairGeneralSymptomItem - In the implementation block
@property (nonatomic,readonly) HFItem * fakeStereoPairNotFoundSymptomItem;                     //@synthesize fakeStereoPairNotFoundSymptomItem=_fakeStereoPairNotFoundSymptomItem - In the implementation block
@property (nonatomic,readonly) HFItem * fakeStereoPairVersionMismatchSymptomItem;              //@synthesize fakeStereoPairVersionMismatchSymptomItem=_fakeStereoPairVersionMismatchSymptomItem - In the implementation block
@property (assign,nonatomic) BOOL fakeUnreachableError; 
@property (assign,nonatomic) BOOL fakeShouldDisplayManualFixOption; 
@property (assign,nonatomic) BOOL fakeWiFiSymptom; 
@property (assign,nonatomic) BOOL fakeWiFiPerformanceSymptom; 
@property (assign,nonatomic) BOOL fakeInternetFixSymptom; 
@property (assign,nonatomic) BOOL fakeHardwareFixSymptom; 
@property (assign,nonatomic) BOOL fakeGeneralFixSymptom; 
@property (assign,nonatomic) BOOL fakeHomeKitSymptom; 
@property (assign,nonatomic) BOOL fakeICloudSymptom; 
@property (assign,nonatomic) BOOL fakeITunesSymptom; 
@property (assign,nonatomic) BOOL fakeWifiNetworkMismatchSymptom;                              //@synthesize fakeWifiNetworkMismatchSymptom=_fakeWifiNetworkMismatchSymptom - In the implementation block
@property (assign,nonatomic) BOOL fakeVPNProfileExpiredSymptom; 
@property (assign,nonatomic) BOOL fake8021xNetworkSymptom; 
@property (assign,nonatomic) BOOL fakeNetworkProfileFixSymptom; 
@property (assign,nonatomic) BOOL fakeNetworkProfileInstallSymptom; 
@property (assign,nonatomic) BOOL fakeNetworkNotShareableSymptom; 
@property (assign,nonatomic) BOOL fakeStereoPairGeneralSymptom; 
@property (assign,nonatomic) BOOL fakeStereoPairNotFoundSymptom; 
@property (assign,nonatomic) BOOL fakeStereoPairVersionMismatchSymptom; 
-(id)itemProviders;
-(HMAccessory *)accessory;
-(HMSymptomsHandler *)symptomsHandler;
-(id<HFHomeKitObject>)homeKitObject;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(void)_pushSymptomUpdate;
-(void)_reloadItemProviders;
-(HFItem *)fakeUnreachableItem;
-(void)setFakeUnreachableError:(BOOL)arg1 ;
-(HFItem *)fakeWiFiSymptomItem;
-(void)setFakeWiFiSymptom:(BOOL)arg1 ;
-(HFItem *)fakeWiFiPerformanceSymptomItem;
-(void)setFakeWiFiPerformanceSymptom:(BOOL)arg1 ;
-(HFItem *)fakeHardwareFixSymptomItem;
-(void)setFakeHardwareFixSymptom:(BOOL)arg1 ;
-(HFItem *)fakeGeneralFixSymptomItem;
-(void)setFakeGeneralFixSymptom:(BOOL)arg1 ;
-(HFItem *)fakeHomeKitSymptomItem;
-(void)setFakeHomeKitSymptom:(BOOL)arg1 ;
-(HFItem *)fakeInternetFixSymptomItem;
-(void)setFakeInternetFixSymptom:(BOOL)arg1 ;
-(HFItem *)fakeICloudSymptomItem;
-(void)setFakeICloudSymptom:(BOOL)arg1 ;
-(HFItem *)fakeITunesSymptomItem;
-(void)setFakeITunesSymptom:(BOOL)arg1 ;
-(HFItem *)fakeShouldDisplayManualFixOptionItem;
-(void)setFakeShouldDisplayManualFixOption:(BOOL)arg1 ;
-(HFItem *)fakeStereoPairVersionMismatchSymptomItem;
-(void)setFakeStereoPairVersionMismatchSymptom:(BOOL)arg1 ;
-(HFItem *)fakeStereoPairGeneralSymptomItem;
-(void)setFakeStereoPairGeneralSymptom:(BOOL)arg1 ;
-(HFItem *)fakeStereoPairNotFoundSymptomItem;
-(void)setFakeStereoPairNotFoundSymptom:(BOOL)arg1 ;
-(HFItem *)fakeWifiNetworkMismatchSymptomItem;
-(void)setFakeWifiNetworkMismatchSymptom:(BOOL)arg1 ;
-(HFItem *)fakeVPNProfileExpiredSymptomItem;
-(void)setFakeVPNProfileExpiredSymptom:(BOOL)arg1 ;
-(HFItem *)fake8021xNetworkSymptomItem;
-(void)setFake8021xNetworkSymptom:(BOOL)arg1 ;
-(HFItem *)fakeNetworkProfileFixSymptomItem;
-(void)setFakeNetworkProfileFixSymptom:(BOOL)arg1 ;
-(HFItem *)fakeNetworkProfileInstallSymptomItem;
-(void)setFakeNetworkProfileInstallSymptom:(BOOL)arg1 ;
-(HFItem *)fakeNetworkNotShareableSymptomItem;
-(void)setFakeNetworkNotShareableSymptom:(BOOL)arg1 ;
-(BOOL)fakeUnreachableError;
-(BOOL)fakeShouldDisplayManualFixOption;
-(BOOL)fakeWiFiSymptom;
-(BOOL)fakeWiFiPerformanceSymptom;
-(BOOL)fakeWiFiNetworkMismatchSymptom;
-(BOOL)fakeInternetFixSymptom;
-(BOOL)fakeHardwareFixSymptom;
-(BOOL)fakeGeneralFixSymptom;
-(BOOL)fakeHomeKitSymptom;
-(BOOL)fakeICloudSymptom;
-(BOOL)fakeITunesSymptom;
-(BOOL)fakeVPNProfileExpiredSymptom;
-(BOOL)fake8021xNetworkSymptom;
-(BOOL)fakeNetworkProfileFixSymptom;
-(BOOL)fakeNetworkProfileInstallSymptom;
-(BOOL)fakeNetworkNotShareableSymptom;
-(BOOL)fakeStereoPairGeneralSymptom;
-(BOOL)fakeStereoPairNotFoundSymptom;
-(BOOL)fakeStereoPairVersionMismatchSymptom;
-(HFStaticItemProvider *)debugItemProvider;
-(id)initWithItemUpdater:(id)arg1 homeKitObject:(id)arg2 ;
-(void)setFakeWiFiNetworkMismatchSymptom:(BOOL)arg1 ;
-(BOOL)fakeWifiNetworkMismatchSymptom;
@end

