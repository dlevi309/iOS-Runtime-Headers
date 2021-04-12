/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/


@class SCLSchoolModeManager;

@interface SCLWatchServer : NSObject {

	SCLSchoolModeManager* _schoolModeManager;

}

@property (nonatomic,readonly) SCLSchoolModeManager * schoolModeManager;              //@synthesize schoolModeManager=_schoolModeManager - In the implementation block
+(id)sharedWatchServer;
-(void)run;
-(SCLSchoolModeManager *)schoolModeManager;
@end

