/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/FBSDisplayLayoutObserver.h>

@protocol HDWatchAppStateMonitorDelegate;
@class NSString;

@interface HDWatchAppStateMonitor : NSObject <FBSDisplayLayoutObserver> {

	BOOL _appIsActive;
	id<HDWatchAppStateMonitorDelegate> _delegate;
	NSString* _bundleIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * bundleIdentifier;                                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL appIsActive;                                              //@synthesize appIsActive=_appIsActive - In the implementation block
@property (assign,nonatomic,__weak) id<HDWatchAppStateMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)launchWorkoutAppIfNeededWithFitnessMachineSessionUUID:(id)arg1 ;
-(void)dealloc;
-(id<HDWatchAppStateMonitorDelegate>)delegate;
-(void)setDelegate:(id<HDWatchAppStateMonitorDelegate>)arg1 ;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(id)initWithFirstPartyWorkoutApp;
-(BOOL)appIsActive;
@end

