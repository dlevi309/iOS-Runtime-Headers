/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <libobjc.A.dylib/HDPeriodicActivityDelegate.h>

@protocol OS_dispatch_queue;
@class HDHealthRecordsProfileExtension, HDProfile, HDClinicalOptInStudy, NSObject, HDPeriodicActivity, NSString;

@interface HDClinicalOptInDataUploadManager : NSObject <HDPeriodicActivityDelegate> {

	HDHealthRecordsProfileExtension* _profileExtension;
	HDProfile* _profile;
	HDClinicalOptInStudy* _study;
	NSObject*<OS_dispatch_queue> _queue;
	HDPeriodicActivity* _periodicActivity;

}

@property (nonatomic,__weak,readonly) HDHealthRecordsProfileExtension * profileExtension;              //@synthesize profileExtension=_profileExtension - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                                             //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HDClinicalOptInStudy * study;                                           //@synthesize study=_study - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) HDPeriodicActivity * periodicActivity;                                  //@synthesize periodicActivity=_periodicActivity - In the implementation block
@property (nonatomic,readonly) BOOL collectsClinicalOptInData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)queue;
-(HDProfile *)profile;
-(void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2 ;
-(void)performPeriodicActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)periodicActivityRequiresProtectedData:(id)arg1 ;
-(HDPeriodicActivity *)periodicActivity;
-(void)triggerClinicalOptInDataUploadWithCompletion:(/*^block*/id)arg1 ;
-(HDHealthRecordsProfileExtension *)profileExtension;
-(id)initWithProfileExtension:(id)arg1 ;
-(BOOL)collectsClinicalOptInData;
-(HDClinicalOptInStudy *)study;
-(void)_queue_triggerClinicalOptInDataUploadWithCompletion:(/*^block*/id)arg1 ;
@end

