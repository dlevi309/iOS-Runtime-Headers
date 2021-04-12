/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@class HKHealthStore, _HKMedicalIDData, SOSContactsManager, WDNotificationManager, UIViewController, UIAlertController;

@interface WDContactConsolidationController : NSObject {

	HKHealthStore* _healthStore;
	_HKMedicalIDData* _medicalIDData;
	SOSContactsManager* _sosContactsManager;
	WDNotificationManager* _notificationManager;
	UIViewController* _presentingViewController;
	UIAlertController* _consolidationAlertController;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) HKHealthStore * healthStore;                                          //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) _HKMedicalIDData * medicalIDData;                                     //@synthesize medicalIDData=_medicalIDData - In the implementation block
@property (nonatomic,retain) SOSContactsManager * sosContactsManager;                              //@synthesize sosContactsManager=_sosContactsManager - In the implementation block
@property (nonatomic,retain) WDNotificationManager * notificationManager;                          //@synthesize notificationManager=_notificationManager - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                   //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic,__weak) UIAlertController * consolidationAlertController;              //@synthesize consolidationAlertController=_consolidationAlertController - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) BOOL isPresentingConsolidationAlert; 
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(WDNotificationManager *)notificationManager;
-(void)setNotificationManager:(WDNotificationManager *)arg1 ;
-(_HKMedicalIDData *)medicalIDData;
-(void)setMedicalIDData:(_HKMedicalIDData *)arg1 ;
-(id)initWithProfile:(id)arg1 presentingViewController:(id)arg2 ;
-(SOSContactsManager *)sosContactsManager;
-(void)_consolidateSOSContactsWithMedicalIDContacts;
-(UIAlertController *)consolidationAlertController;
-(void)setConsolidationAlertController:(UIAlertController *)arg1 ;
-(void)setSosContactsManager:(SOSContactsManager *)arg1 ;
-(void)checkAlertNecessity;
-(void)presentContactsConsolidationAlert;
-(void)_showLearnMoreViewController;
-(BOOL)isPresentingConsolidationAlert;
-(void)presentContactConsolidationAlertWithCompletionHandler:(/*^block*/id)arg1 ;
@end

