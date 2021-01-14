/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/


@class HDProfile;

@interface ACHRemoteTemplateAvailabilityKeyProvider : NSObject {

	HDProfile* _profile;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;              //@synthesize profile=_profile - In the implementation block
-(id)availabilityStateKeyFromUniqueName:(id)arg1 creatorDevice:(unsigned char)arg2 ;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)templateAvailableOnPairedDevice:(id)arg1 error:(id*)arg2 ;
-(HDProfile *)profile;
-(BOOL)markTemplateAvailable:(id)arg1 error:(id*)arg2 ;
@end

