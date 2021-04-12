/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/


@class HDProfile;

@interface ACHBackCompatRemoteAchievementAvailabilityKeyWriter : NSObject {

	HDProfile* _profile;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;              //@synthesize profile=_profile - In the implementation block
-(HDProfile *)profile;
-(id)initWithProfile:(id)arg1 ;
-(id)companionAvailabilityStateKeyFromUniqueName:(id)arg1 ;
-(BOOL)markTemplateAvailable:(id)arg1 error:(id*)arg2 ;
@end

