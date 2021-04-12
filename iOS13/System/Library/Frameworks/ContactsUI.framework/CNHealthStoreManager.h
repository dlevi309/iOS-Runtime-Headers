/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNScheduler;
@class CNUIContactsEnvironment, _HKMedicalIDData, NSMutableDictionary, HKHealthStore;

@interface CNHealthStoreManager : NSObject {

	int _healthNotificationToken;
	BOOL _needsFetching;
	BOOL _isListeningToChanges;
	CNUIContactsEnvironment* _environment;
	_HKMedicalIDData* _medicalIDData;
	id<CNScheduler> _workQueue;
	NSMutableDictionary* _medicalIDDataHandlers;
	id<CNScheduler> _stateLock;
	HKHealthStore* _healthStore;

}

@property (nonatomic,retain) CNUIContactsEnvironment * environment;                      //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) _HKMedicalIDData * medicalIDData;                           //@synthesize medicalIDData=_medicalIDData - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> workQueue;                                //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) BOOL needsFetching;                                         //@synthesize needsFetching=_needsFetching - In the implementation block
@property (assign,nonatomic) BOOL isListeningToChanges;                                  //@synthesize isListeningToChanges=_isListeningToChanges - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * medicalIDDataHandlers;              //@synthesize medicalIDDataHandlers=_medicalIDDataHandlers - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> stateLock;                                //@synthesize stateLock=_stateLock - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                //@synthesize healthStore=_healthStore - In the implementation block
+(id)descriptorForRequiredKeys;
+(BOOL)shouldShowEmergencyContacts;
+(/*^block*/id)emergencyContactMatchingContact:(id)arg1 ;
+(id)identifiersForContactMatchingEmergencyContacts:(id)arg1 contactStore:(id)arg2 ;
-(void)dealloc;
-(CNUIContactsEnvironment *)environment;
-(void)setEnvironment:(CNUIContactsEnvironment *)arg1 ;
-(id<CNScheduler>)workQueue;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(id)initWithEnvironment:(id)arg1 ;
-(id<CNScheduler>)stateLock;
-(id)initWithEnvironment:(id)arg1 healthStore:(id)arg2 ;
-(id)nts_lazyHealthStore;
-(id)registerMedicalIDDataHandler:(/*^block*/id)arg1 ;
-(void)unregisterHandlerForToken:(id)arg1 ;
-(void)updateAndDispatchMedicalIDData;
-(void)startListeningForChanges;
-(id)createMedicalIDFromContact:(id)arg1 ;
-(_HKMedicalIDData *)medicalIDData;
-(void)setMedicalIDData:(_HKMedicalIDData *)arg1 ;
-(BOOL)needsFetching;
-(void)setNeedsFetching:(BOOL)arg1 ;
-(BOOL)isListeningToChanges;
-(void)setIsListeningToChanges:(BOOL)arg1 ;
-(NSMutableDictionary *)medicalIDDataHandlers;
@end

