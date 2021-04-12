/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue;
@class HDProfile, NSUUID, NSObject;

@interface HDStaticSyncTask : NSObject {

	HDProfile* _profile;
	unsigned long long _options;
	NSUUID* _storeIdentifier;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;                      //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                      //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSUUID * storeIdentifier;                        //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned long long)options;
-(HDProfile *)profile;
-(id)runWithCompletion:(/*^block*/id)arg1 ;
-(NSUUID *)storeIdentifier;
-(id)initWithProfile:(id)arg1 options:(unsigned long long)arg2 storeIdentifier:(id)arg3 ;
@end

