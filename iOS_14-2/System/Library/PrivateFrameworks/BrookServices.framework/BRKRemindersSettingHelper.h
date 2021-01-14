/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrookServices.framework/BrookServices
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol BRKRemindersSettingDelegate;
@class BRKSettings, CNContactStore, CLLocationManager, CLInUseAssertion, RTRoutineManager, NSString;

@interface BRKRemindersSettingHelper : NSObject <CLLocationManagerDelegate> {

	BOOL _coreRoutineAvailable;
	BOOL _locationAvailable;
	BOOL _locationAuthorizationValid;
	id<BRKRemindersSettingDelegate> _delegate;
	BRKSettings* _brookSettings;
	CNContactStore* _contactStore;
	CLLocationManager* _locationManager;
	CLInUseAssertion* _inUseAssertion;
	RTRoutineManager* _routineManager;

}

@property (assign,nonatomic,__weak) id<BRKRemindersSettingDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) BRKSettings * brookSettings;                                                      //@synthesize brookSettings=_brookSettings - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                                    //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                                              //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) CLInUseAssertion * inUseAssertion;                                                //@synthesize inUseAssertion=_inUseAssertion - In the implementation block
@property (nonatomic,retain) RTRoutineManager * routineManager;                                                //@synthesize routineManager=_routineManager - In the implementation block
@property (assign,getter=isCoreRoutineAvailable,nonatomic) BOOL coreRoutineAvailable;                          //@synthesize coreRoutineAvailable=_coreRoutineAvailable - In the implementation block
@property (assign,getter=isLocationAvailable,nonatomic) BOOL locationAvailable;                                //@synthesize locationAvailable=_locationAvailable - In the implementation block
@property (assign,getter=isLocationAuthorizationValid,nonatomic) BOOL locationAuthorizationValid;              //@synthesize locationAuthorizationValid=_locationAuthorizationValid - In the implementation block
@property (getter=areRemindersAvailable,nonatomic,readonly) BOOL remindersAvailable; 
@property (getter=isMeCardAvailable,nonatomic,readonly) BOOL meCardAvailable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContactStore:(CNContactStore *)arg1 ;
-(CNContactStore *)contactStore;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(CLLocationManager *)locationManager;
-(id<BRKRemindersSettingDelegate>)delegate;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(void)setDelegate:(id<BRKRemindersSettingDelegate>)arg1 ;
-(void)update;
-(RTRoutineManager *)routineManager;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
-(void)dealloc;
-(BOOL)isLocationAvailable;
-(void)setInUseAssertion:(CLInUseAssertion *)arg1 ;
-(CLInUseAssertion *)inUseAssertion;
-(void)setLocationAvailable:(BOOL)arg1 ;
-(id)_handwashingLocationManager;
-(BOOL)isLocationAuthorizationValid;
-(id)meContactWithKeysToFetch:(id)arg1 ;
-(void)_fetchLocationAvailableStatus;
-(void)_fetchLocationAuthorizationStatus;
-(BOOL)isCoreRoutineAvailable;
-(BOOL)isMeCardAvailable;
-(void)_updateWithLocationAuthorizationStatus:(int)arg1 manager:(id)arg2 ;
-(void)setLocationAuthorizationValid:(BOOL)arg1 ;
-(void)setCoreRoutineAvailable:(BOOL)arg1 ;
-(void)_isCoreRoutineHomeAvailableWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDelegate:(id)arg1 settings:(id)arg2 ;
-(BOOL)areRemindersAvailable;
-(void)requestLocationAuthorizationIfNeeded;
-(id)remindersFooterTextAndLinkString;
-(BRKSettings *)brookSettings;
-(void)setBrookSettings:(BRKSettings *)arg1 ;
@end

