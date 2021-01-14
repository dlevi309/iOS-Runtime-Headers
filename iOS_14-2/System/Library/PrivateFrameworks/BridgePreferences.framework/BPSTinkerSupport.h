/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
*/


@protocol OS_dispatch_queue;
@class FAFamilyCircle, FAProfilePictureStore, NSSManager, NSObject, FAFamilyMember, AKDevice;

@interface BPSTinkerSupport : NSObject {

	FAFamilyCircle* _cachedFamilyCircle;
	FAProfilePictureStore* _profilePictureStore;
	NSSManager* _nssManager;
	NSObject*<OS_dispatch_queue> _queue;
	FAFamilyMember* _currentTinkerMember;
	FAFamilyMember* _pairingParentFamilyMember;
	FAFamilyMember* _organizerParentFamilyMember;
	AKDevice* _currentTinkerAKDevice;

}

@property (nonatomic,retain) FAFamilyCircle * cachedFamilyCircle;                       //@synthesize cachedFamilyCircle=_cachedFamilyCircle - In the implementation block
@property (nonatomic,retain) FAProfilePictureStore * profilePictureStore;               //@synthesize profilePictureStore=_profilePictureStore - In the implementation block
@property (nonatomic,retain) NSSManager * nssManager;                                   //@synthesize nssManager=_nssManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) FAFamilyMember * currentTinkerMember;                      //@synthesize currentTinkerMember=_currentTinkerMember - In the implementation block
@property (nonatomic,retain) FAFamilyMember * pairingParentFamilyMember;                //@synthesize pairingParentFamilyMember=_pairingParentFamilyMember - In the implementation block
@property (nonatomic,retain) FAFamilyMember * organizerParentFamilyMember;              //@synthesize organizerParentFamilyMember=_organizerParentFamilyMember - In the implementation block
@property (nonatomic,retain) AKDevice * currentTinkerAKDevice;                          //@synthesize currentTinkerAKDevice=_currentTinkerAKDevice - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setProfilePictureStore:(FAProfilePictureStore *)arg1 ;
-(id)cachedTinkerFamilyMemeber;
-(NSObject*<OS_dispatch_queue>)queue;
-(FAProfilePictureStore *)profilePictureStore;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setNssManager:(NSSManager *)arg1 ;
-(NSSManager *)nssManager;
-(void)setTinkerFamilyMember:(id)arg1 ;
-(FAFamilyMember *)pairingParentFamilyMember;
-(void)setPairingParentFamilyMember:(FAFamilyMember *)arg1 ;
-(FAFamilyMember *)organizerParentFamilyMember;
-(void)setOrganizerParentFamilyMember:(FAFamilyMember *)arg1 ;
-(void)fetchProfilePictures;
-(BOOL)isActiveTinker;
-(void)getActiveTinkerFamilyMemberWithCompletion:(/*^block*/id)arg1 ;
-(void)getActiveTinkerFamilyMemberDetailsWithCompletion:(/*^block*/id)arg1 ;
-(void)getActiveTinkerFamilyDetailsWithCompletion:(/*^block*/id)arg1 ;
-(id)familyMemberMatchingAccount:(id)arg1 inCircle:(id)arg2 ;
-(void)fetchFamilyDetails;
-(void)resetCachedDeviceValues;
-(FAFamilyCircle *)cachedFamilyCircle;
-(id)cachedProfilePictureForFamilyMember:(id)arg1 ;
-(id)cachedTinkerAKDevice;
-(id)cachedPairingParentFamilyMember;
-(id)cachedOrganizerParentFamilyMember;
-(void)getActiveTinkerFamilyMember:(/*^block*/id)arg1 ;
-(void)setCachedFamilyCircle:(FAFamilyCircle *)arg1 ;
-(FAFamilyMember *)currentTinkerMember;
-(void)setCurrentTinkerMember:(FAFamilyMember *)arg1 ;
-(AKDevice *)currentTinkerAKDevice;
-(void)setCurrentTinkerAKDevice:(AKDevice *)arg1 ;
@end

