/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/


#import <ActivityAchievementsDaemon/ActivityAchievementsDaemon-Structs.h>
@class HDDatabaseTransactionContext, HDProfile, NSCalendar, HDKeyValueDomain;

@interface ACHSyncingMonthlyChallengeTemplateCache : NSObject {

	os_unfair_lock_s _lock;
	HDDatabaseTransactionContext* _databaseContext;
	HDProfile* _profile;
	NSCalendar* _gregorianCalendar;
	HDKeyValueDomain* _keyValueDomain;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy) NSCalendar * gregorianCalendar;                              //@synthesize gregorianCalendar=_gregorianCalendar - In the implementation block
@property (nonatomic,retain) HDKeyValueDomain * keyValueDomain;                         //@synthesize keyValueDomain=_keyValueDomain - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                                     //@synthesize lock=_lock - In the implementation block
@property (nonatomic,copy) HDDatabaseTransactionContext * databaseContext;              //@synthesize databaseContext=_databaseContext - In the implementation block
-(os_unfair_lock_s)lock;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(NSCalendar *)gregorianCalendar;
-(HDDatabaseTransactionContext *)databaseContext;
-(HDKeyValueDomain *)keyValueDomain;
-(void)setKeyValueDomain:(HDKeyValueDomain *)arg1 ;
-(BOOL)cacheTemplate:(id)arg1 error:(id*)arg2 ;
-(id)allCachedTemplatesWithError:(id*)arg1 ;
-(id)templateForDateComponents:(id)arg1 error:(id*)arg2 ;
-(void)setDatabaseContext:(HDDatabaseTransactionContext *)arg1 ;
-(void)setGregorianCalendar:(NSCalendar *)arg1 ;
@end

