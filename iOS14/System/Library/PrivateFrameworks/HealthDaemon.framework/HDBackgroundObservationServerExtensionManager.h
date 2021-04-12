/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSMutableDictionary, HDProfile;

@interface HDBackgroundObservationServerExtensionManager : NSObject {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _availableExtensions;
	HDProfile* _profile;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;              //@synthesize profile=_profile - In the implementation block
-(id)init;
-(id)initWithProfile:(id)arg1 ;
-(id)_lock_extensionForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(HDProfile *)profile;
-(id)extensionForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
@end

