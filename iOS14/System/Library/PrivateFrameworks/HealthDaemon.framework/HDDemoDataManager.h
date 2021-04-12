/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, HDProfile, HDDemoDataGenerator, NSString;

@interface HDDemoDataManager : NSObject <HDHealthDaemonReadyObserver> {

	NSObject*<OS_dispatch_queue> _demoDataQueue;
	HDProfile* _profile;
	HDDemoDataGenerator* _generator;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;                   //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HDDemoDataGenerator * generator;              //@synthesize generator=_generator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonReady:(id)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)_queue_generateDemoDataIfNeeded;
-(HDProfile *)profile;
-(HDDemoDataGenerator *)generator;
@end

