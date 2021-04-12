/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
*/

#import <libobjc.A.dylib/BSDebugDescriptionProviding.h>

@class STMutableTelephonySubscriptionInfo, NSString, NSArray, STMutableTelephonyCarrierBundleInfo, STMutableTelephonyMobileEquipmentInfo;

@interface STTelephonySubscriptionContext : NSObject <BSDebugDescriptionProviding> {

	BOOL _pretendingToSearch;
	STMutableTelephonySubscriptionInfo* _subscriptionInfo;
	BOOL* _fakeServiceCanceled;
	BOOL* _fakeRegistrationCanceled;
	BOOL* _fakeCellularRegistrationCanceled;
	NSString* _cachedCTRegistrationDisplayStatus;
	NSString* _cachedCTRegistrationCellularStatus;
	unsigned long long _modemDataConnectionType;
	NSString* _cachedCTOperatorName;
	NSArray* _statusBarImages;
	STMutableTelephonyCarrierBundleInfo* _carrierBundleInfo;
	STMutableTelephonyMobileEquipmentInfo* _mobileEquipmentInfo;

}

@property (nonatomic,retain) STMutableTelephonySubscriptionInfo * subscriptionInfo;                              //@synthesize subscriptionInfo=_subscriptionInfo - In the implementation block
@property (assign,nonatomic) BOOL* fakeServiceCanceled;                                                          //@synthesize fakeServiceCanceled=_fakeServiceCanceled - In the implementation block
@property (assign,nonatomic) BOOL* fakeRegistrationCanceled;                                                     //@synthesize fakeRegistrationCanceled=_fakeRegistrationCanceled - In the implementation block
@property (assign,nonatomic) BOOL* fakeCellularRegistrationCanceled;                                             //@synthesize fakeCellularRegistrationCanceled=_fakeCellularRegistrationCanceled - In the implementation block
@property (assign,getter=isPretendingToSearch,nonatomic) BOOL pretendingToSearch;                                //@synthesize pretendingToSearch=_pretendingToSearch - In the implementation block
@property (nonatomic,copy) NSString * cachedCTRegistrationDisplayStatus;                                         //@synthesize cachedCTRegistrationDisplayStatus=_cachedCTRegistrationDisplayStatus - In the implementation block
@property (nonatomic,copy) NSString * cachedCTRegistrationCellularStatus;                                        //@synthesize cachedCTRegistrationCellularStatus=_cachedCTRegistrationCellularStatus - In the implementation block
@property (assign,nonatomic) unsigned long long modemDataConnectionType;                                         //@synthesize modemDataConnectionType=_modemDataConnectionType - In the implementation block
@property (nonatomic,copy) NSString * cachedCTOperatorName;                                                      //@synthesize cachedCTOperatorName=_cachedCTOperatorName - In the implementation block
@property (nonatomic,copy) NSArray * statusBarImages;                                                            //@synthesize statusBarImages=_statusBarImages - In the implementation block
@property (nonatomic,retain) STMutableTelephonyCarrierBundleInfo * carrierBundleInfo;                            //@synthesize carrierBundleInfo=_carrierBundleInfo - In the implementation block
@property (nonatomic,retain) STMutableTelephonyMobileEquipmentInfo * mobileEquipmentInfo;                        //@synthesize mobileEquipmentInfo=_mobileEquipmentInfo - In the implementation block
@property (getter=isFakingService,nonatomic,readonly) BOOL fakingService; 
@property (getter=isFakingRegistration,nonatomic,readonly) BOOL fakingRegistration; 
@property (getter=isFakingCellularRegistration,nonatomic,readonly) BOOL fakingCellularRegistration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(BOOL)isFakingRegistration;
-(NSString *)cachedCTOperatorName;
-(NSString *)cachedCTRegistrationDisplayStatus;
-(void)setMobileEquipmentInfo:(STMutableTelephonyMobileEquipmentInfo *)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)debugDescriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)debugDescription;
-(BOOL)isFakingCellularRegistration;
-(void)setFakeServiceCanceled:(BOOL*)arg1 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(NSString *)cachedCTRegistrationCellularStatus;
-(void)setPretendingToSearch:(BOOL)arg1 ;
-(unsigned long long)modemDataConnectionType;
-(STMutableTelephonyCarrierBundleInfo *)carrierBundleInfo;
-(void)setStatusBarImages:(NSArray *)arg1 ;
-(BOOL)isPretendingToSearch;
-(void)setSubscriptionInfo:(STMutableTelephonySubscriptionInfo *)arg1 ;
-(BOOL*)fakeCellularRegistrationCanceled;
-(void)setFakeCellularRegistrationCanceled:(BOOL*)arg1 ;
-(BOOL*)fakeServiceCanceled;
-(void)setCarrierBundleInfo:(STMutableTelephonyCarrierBundleInfo *)arg1 ;
-(STMutableTelephonySubscriptionInfo *)subscriptionInfo;
-(void)setCachedCTOperatorName:(NSString *)arg1 ;
-(NSArray *)statusBarImages;
-(void)setCachedCTRegistrationCellularStatus:(NSString *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL*)fakeRegistrationCanceled;
-(id)succinctDescriptionBuilder;
-(STMutableTelephonyMobileEquipmentInfo *)mobileEquipmentInfo;
-(void)setModemDataConnectionType:(unsigned long long)arg1 ;
-(void)setCachedCTRegistrationDisplayStatus:(NSString *)arg1 ;
-(BOOL)isFakingService;
-(void)setFakeRegistrationCanceled:(BOOL*)arg1 ;
@end

