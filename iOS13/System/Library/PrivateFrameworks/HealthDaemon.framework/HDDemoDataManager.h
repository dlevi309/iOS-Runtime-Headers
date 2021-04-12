/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(HDProfile *)profile;
-(id)initWithProfile:(id)arg1 ;
-(HDDemoDataGenerator *)generator;
-(void)daemonReady:(id)arg1 ;
-(void)_queue_generateDemoDataIfNeeded;
@end

