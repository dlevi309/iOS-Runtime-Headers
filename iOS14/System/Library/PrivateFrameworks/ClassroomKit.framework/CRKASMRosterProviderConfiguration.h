/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKClassKitRosterRequirements;
@class NSString, NSObject, CRKASMCredentialStore;

@interface CRKASMRosterProviderConfiguration : NSObject {

	NSString* _userCommonNamePrefix;
	NSString* _trustedUserCommonNamePrefix;
	NSObject*<CRKClassKitRosterRequirements> _rosterRequirements;
	CRKASMCredentialStore* _credentialStore;
	long long _maxCourseUsersCount;
	long long _maxCourseTrustedUsersCount;
	double _rosterMutationTimeout;

}

@property (nonatomic,copy,readonly) NSString * userCommonNamePrefix;                                     //@synthesize userCommonNamePrefix=_userCommonNamePrefix - In the implementation block
@property (nonatomic,copy,readonly) NSString * trustedUserCommonNamePrefix;                              //@synthesize trustedUserCommonNamePrefix=_trustedUserCommonNamePrefix - In the implementation block
@property (nonatomic,readonly) NSObject*<CRKClassKitRosterRequirements> rosterRequirements;              //@synthesize rosterRequirements=_rosterRequirements - In the implementation block
@property (nonatomic,readonly) CRKASMCredentialStore * credentialStore;                                  //@synthesize credentialStore=_credentialStore - In the implementation block
@property (nonatomic,readonly) long long maxCourseUsersCount;                                            //@synthesize maxCourseUsersCount=_maxCourseUsersCount - In the implementation block
@property (nonatomic,readonly) long long maxCourseTrustedUsersCount;                                     //@synthesize maxCourseTrustedUsersCount=_maxCourseTrustedUsersCount - In the implementation block
@property (nonatomic,readonly) double rosterMutationTimeout;                                             //@synthesize rosterMutationTimeout=_rosterMutationTimeout - In the implementation block
+(id)makeStudentClassKitFacade;
+(id)makeStandardClassKitFacade;
+(BOOL)currentPlatformRequiresPersonaAdoption;
+(id)studentRosterConfiguration;
+(id)instructorRosterConfiguration;
-(CRKASMCredentialStore *)credentialStore;
-(NSObject*<CRKClassKitRosterRequirements>)rosterRequirements;
-(id)initWithUserCommonNamePrefix:(id)arg1 trustedUserCommonNamePrefix:(id)arg2 rosterRequirements:(id)arg3 credentialStore:(id)arg4 maxCourseUsersCount:(long long)arg5 maxCourseTrustedUsersCount:(long long)arg6 rosterMutationTimeout:(double)arg7 ;
-(NSString *)userCommonNamePrefix;
-(NSString *)trustedUserCommonNamePrefix;
-(long long)maxCourseUsersCount;
-(long long)maxCourseTrustedUsersCount;
-(double)rosterMutationTimeout;
@end

