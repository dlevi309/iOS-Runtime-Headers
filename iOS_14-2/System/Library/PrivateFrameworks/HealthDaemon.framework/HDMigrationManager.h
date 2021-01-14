/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)daemonReady:(id)arg1 ;
-(void)setProfile:(HDProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)setNeedsProtectedDataMigration:(BOOL)arg1 ;
-(void)_queue_performMigrationWithCompletion:(/*^block*/id)arg1 ;
-(HDProfile *)profile;
-(BOOL)needsProtectedDataMigration;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)performMigrationWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2 ;
@end

