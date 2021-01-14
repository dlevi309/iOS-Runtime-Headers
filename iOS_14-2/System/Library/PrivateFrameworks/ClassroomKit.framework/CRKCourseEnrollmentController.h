/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKStudentDaemonProxyObserver.h>
#import <libobjc.A.dylib/CATTaskOperationNotificationDelegate.h>
#import <libobjc.A.dylib/CRKSettingsPaneInfoProvider.h>

@protocol CRKCourseEnrollmentControllerDelegate;
@class NSArray, NSSet, NSDictionary, CRKStudentDaemonProxy, CATRemoteTaskOperation, CRKSecureCodedUserDefaultsObject, CRKSettingsUIVisibleRemoteValue, NSString;

@interface CRKCourseEnrollmentController : NSObject <CRKStudentDaemonProxyObserver, CATTaskOperationNotificationDelegate, CRKSettingsPaneInfoProvider> {

	id<CRKCourseEnrollmentControllerDelegate> mDelegate;
	CRKStudentDaemonProxy* mDaemonProxy;
	CATRemoteTaskOperation* mBrowseOperation;
	CATRemoteTaskOperation* mActiveCoursesOperation;
	CRKSecureCodedUserDefaultsObject* mStoredCourses;
	BOOL mConfigurationFetched;
	CRKSettingsUIVisibleRemoteValue* mSettingsUIVisibleRemoteValue;
	NSArray* _courses;
	NSArray* _courseInvitations;
	NSSet* _acceptedInvitationIdentifiers;
	NSArray* _activeCourseIdentifiers;
	NSArray* _activeInstructorIdentifiers;
	NSDictionary* _observingInstructorIdentifiersByCourseIdentifiers;
	unsigned long long _configurationType;

}

@property (nonatomic,copy) NSArray * courses;                                                               //@synthesize courses=_courses - In the implementation block
@property (nonatomic,copy) NSArray * courseInvitations;                                                     //@synthesize courseInvitations=_courseInvitations - In the implementation block
@property (nonatomic,copy) NSSet * acceptedInvitationIdentifiers;                                           //@synthesize acceptedInvitationIdentifiers=_acceptedInvitationIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * activeCourseIdentifiers;                                               //@synthesize activeCourseIdentifiers=_activeCourseIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * activeInstructorIdentifiers;                                           //@synthesize activeInstructorIdentifiers=_activeInstructorIdentifiers - In the implementation block
@property (nonatomic,retain) NSDictionary * observingInstructorIdentifiersByCourseIdentifiers;              //@synthesize observingInstructorIdentifiersByCourseIdentifiers=_observingInstructorIdentifiersByCourseIdentifiers - In the implementation block
@property (assign,nonatomic) unsigned long long configurationType;                                          //@synthesize configurationType=_configurationType - In the implementation block
@property (nonatomic,readonly) BOOL settingsUIVisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned long long)configurationType;
-(void)setConfigurationType:(unsigned long long)arg1 ;
-(void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3 ;
-(BOOL)settingsUIVisible;
-(id)initWithDelegate:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(NSArray *)courses;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)dealloc;
-(id)initWithStudentDaemonProxy:(id)arg1 delegate:(id)arg2 ;
-(void)daemonProxyDidConnect:(id)arg1 ;
-(void)fetchStoredCourses;
-(void)daemonProxyDidDisconnect:(id)arg1 ;
-(NSArray *)courseInvitations;
-(void)fetchActiveCourses;
-(void)fetchCourses;
-(void)fetchCourseInvitations;
-(void)fetchScreenObservers;
-(void)refreshASMCourses;
-(void)startLongRunningOperations;
-(void)stopLongRunningOperations;
-(void)fetchConfiguration;
-(void)screenObserversHaveChanged:(id)arg1 ;
-(void)stopBrowsingForInvitations;
-(BOOL)canBrowseForInvitations;
-(void)startBrowsingForInvitations;
-(void)fetchConfigurationTypeOperationDidFinish:(id)arg1 ;
-(void)updateInvitationBrowsingStatus;
-(void)fetchActiveCoursesOperationDidFinish:(id)arg1 ;
-(NSArray *)activeCourseIdentifiers;
-(void)setActiveCourseIdentifiers:(NSArray *)arg1 ;
-(NSArray *)activeInstructorIdentifiers;
-(void)setActiveInstructorIdentifiers:(NSArray *)arg1 ;
-(void)fetchCoursesOperationDidFinish:(id)arg1 ;
-(void)setCourses:(NSArray *)arg1 ;
-(void)storeCourses;
-(void)fetchCourseInvitationsOperationDidFinish:(id)arg1 ;
-(void)setCourseInvitations:(NSArray *)arg1 ;
-(NSSet *)acceptedInvitationIdentifiers;
-(void)setAcceptedInvitationIdentifiers:(NSSet *)arg1 ;
-(void)fetchScreenObserversDidFinish:(id)arg1 ;
-(NSDictionary *)observingInstructorIdentifiersByCourseIdentifiers;
-(void)setObservingInstructorIdentifiersByCourseIdentifiers:(NSDictionary *)arg1 ;
-(void)refreshASMCoursesOperationDidFail:(id)arg1 ;
-(void)daemonProxy:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3 ;
-(id)courseWithIdentifier:(id)arg1 ;
-(id)invitationWithCourseIdentifier:(id)arg1 ;
-(id)coursesWithInstructorIdentifier:(id)arg1 ;
@end

