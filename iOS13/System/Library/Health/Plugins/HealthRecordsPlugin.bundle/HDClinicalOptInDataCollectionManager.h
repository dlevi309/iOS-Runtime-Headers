/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <libobjc.A.dylib/HDPeriodicActivityDelegate.h>

@protocol OS_dispatch_queue;
@class NSNumber, HDPeriodicActivity, NSObject, HDDaemonTransaction, HDHealthRecordsProfileExtension, HDProfile, HDClinicalOptInStudy, NSString;

@interface HDClinicalOptInDataCollectionManager : NSObject <HDPeriodicActivityDelegate> {

	NSNumber* _overriddenCollectsClinicalOptInData;
	HDPeriodicActivity* _periodicActivity;
	NSObject*<OS_dispatch_queue> _queue;
	HDDaemonTransaction* _transaction;
	HDHealthRecordsProfileExtension* _profileExtension;
	HDProfile* _profile;
	HDClinicalOptInStudy* _study;

}

@property (nonatomic,__weak,readonly) HDHealthRecordsProfileExtension * profileExtension;              //@synthesize profileExtension=_profileExtension - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                                             //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HDClinicalOptInStudy * study;                                           //@synthesize study=_study - In the implementation block
@property (nonatomic,readonly) BOOL collectsClinicalOptInData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_optInJSONForBuild:(id)arg1 extractionRulesVersion:(id)arg2 FHIRVersion:(id)arg3 resource:(id)arg4 ;
-(HDProfile *)profile;
-(void)triggerClinicalOptInDataCollectionForReason:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetClinicalOptInDataCollectionAnchorsWithCompletion:(/*^block*/id)arg1 ;
-(void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2 ;
-(void)performPeriodicActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)periodicActivityRequiresProtectedData:(id)arg1 ;
-(HDHealthRecordsProfileExtension *)profileExtension;
-(id)initWithProfileExtension:(id)arg1 ;
-(void)_queue_triggerClinicalOptInDataCollectionWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)collectsClinicalOptInData;
-(void)_queue_submitOptInResourcesForAccounts:(id)arg1 batchCountLimit:(long long)arg2 batchSizeLimit:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_queue_updateSubmittedAnchors:(id)arg1 accounts:(id)arg2 error:(id*)arg3 ;
-(void)_queue_submitFetchedResources:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_submitAnalyticsForResult:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)enableHealthCloudStudy;
-(HDClinicalOptInStudy *)study;
-(void)setCollectsClinicalOptInData:(BOOL)arg1 ;
@end
