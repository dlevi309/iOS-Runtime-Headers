/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDContentProtectionObserver.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, NSObject, NSString;

@interface HDMigrationManager : NSObject <HDContentProtectionObserver, HDHealthDaemonReadyObserver> {

	BOOL _needsProtectedDataMigration;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                      //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL needsProtectedDataMigration;                //@synthesize needsProtectedDataMigration=_needsProtectedDataMigration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2 ;
-(void)performMigrationWithCompletion:(/*^block*/id)arg1 ;
-(void)daemonReady:(id)arg1 ;
-(void)_queue_performMigrationWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)needsProtectedDataMigration;
-(void)setNeedsProtectedDataMigration:(BOOL)arg1 ;
@end

