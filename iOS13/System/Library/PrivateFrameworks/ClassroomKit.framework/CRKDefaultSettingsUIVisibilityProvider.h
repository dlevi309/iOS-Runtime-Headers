/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKCourseEnrollmentControllerDelegate.h>
#import <libobjc.A.dylib/CRKSettingsUIVisibilityProvider.h>

@class CRKUserDefaultsObject, CRKCourseEnrollmentController, NSString;

@interface CRKDefaultSettingsUIVisibilityProvider : NSObject <CRKCourseEnrollmentControllerDelegate, CRKSettingsUIVisibilityProvider> {

	CRKUserDefaultsObject* mUIPreviouslyVisible;
	CRKCourseEnrollmentController* mEnrollmentController;
	BOOL _settingsUIVisible;

}

@property (assign) BOOL settingsUIVisible;                          //@synthesize settingsUIVisible=_settingsUIVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)connectToDaemon;
-(BOOL)settingsUIVisible;
-(void)setSettingsUIVisible:(BOOL)arg1 ;
-(void)enrollmentControllerDidUpdateSettingsUIVisibility:(id)arg1 ;
-(void)migrateOldUserDefaultsValues;
-(void)updateVisibilityState;
-(void)updatePreviouslyVisibleDefaultWithValue:(BOOL)arg1 ;
@end

