/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue;
@class HDProfile, FKFriendsManager, NSObject;

@interface HDMedicalIDDataManager : NSObject {

	HDProfile* _profile;
	FKFriendsManager* _sosFriendsManager;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                        //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) FKFriendsManager * sosFriendsManager;              //@synthesize sosFriendsManager=_sosFriendsManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(id)medicalIDEmergencyContacts;
-(BOOL)_migrateMedicalIDLocationIfNecessary:(id*)arg1 ;
-(id)_medicalIDURL;
-(id)_unarchiveMedicalIDDataWithRawData:(id)arg1 ;
-(BOOL)_persistMedicalIDData:(id)arg1 syncProvenance:(id)arg2 error:(id*)arg3 ;
-(id)_fetchMedicalID;
-(id)medicalIDDataCreateIfNecessary:(BOOL)arg1 ;
-(BOOL)updateMedicalIDData:(id)arg1 syncProvenance:(long long)arg2 error:(id*)arg3 ;
-(BOOL)isDateSavedEarlierForMedicalID:(id)arg1 originalMedicalID:(id)arg2 ;
-(BOOL)_persistMedicalIDDataFileToDisk:(id)arg1 error:(id*)arg2 ;
-(void)_updateShowMedicalIdOnWatch:(BOOL)arg1 ;
-(BOOL)updateMedicalIDData:(id)arg1 error:(id*)arg2 ;
-(id)_medicalIDURLWithDirectoryPath:(id)arg1 ;
-(id)fetchMedicalIDIfExists;
-(BOOL)deleteMedicalIDDataWithError:(id*)arg1 ;
-(BOOL)obliterateMedicalIDDataWithReason:(id)arg1 error:(id*)arg2 ;
-(void)badgeHealthAppForEmergencyContactConsolidationWithCompletion:(/*^block*/id)arg1 ;
-(id)unitTest_medicalIDData;
-(BOOL)unitTest_persistMedicalIDData:(id)arg1 ;
-(FKFriendsManager *)sosFriendsManager;
-(void)setSosFriendsManager:(FKFriendsManager *)arg1 ;
@end

