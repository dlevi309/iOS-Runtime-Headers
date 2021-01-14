/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <libobjc.A.dylib/AnalyticsWorkspaceHealthDelegate.h>
#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, AWDAgent, NSMutableDictionary, NSString;

@interface AnalyticsLaunchpad : NSObject <AnalyticsWorkspaceHealthDelegate, ConfigurableObjectProtocol> {

	NSObject*<OS_dispatch_queue> launch_queue;
	NSObject*<OS_dispatch_queue> flows_queue;
	NSObject*<OS_dispatch_queue> nets_queue;
	NSObject*<OS_dispatch_queue> nois_queue;
	NSObject*<OS_dispatch_queue> service_queue;
	AWDAgent* awd;
	NSMutableDictionary* _launchParams;

}

@property (nonatomic,retain) NSMutableDictionary * launchParams;              //@synthesize launchParams=_launchParams - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearDestroyPersistentStoreBreadcrumb;
+(void)leaveBreadcrumbForInitialWorkspaceSave;
+(id)sharedInstance;
+(void)appendLaunchTime;
+(BOOL)launchHealthCheck:(id)arg1 ;
+(void)leaveBreadcrumbForDestroyPersistentStore;
+(id)symptomEvaluatorDatabaseContainerPath;
+(id)configureClass:(id)arg1 ;
+(BOOL)foundInitialWorkspaceSaveBreadcrumb;
+(BOOL)foundIntegrityCheckBreadcrumbAboveThreshold:(BOOL)arg1 ;
+(void)clearIntegrityCheckBreadcrumb;
+(void)clearInitialWorkspaceSaveBreadcrumb;
+(unsigned long long)integrityCheckBreadcrumbCount;
+(void)leaveBreadcrumbForIntegrityCheck;
+(BOOL)foundDestroyPersistentStoreBreadcrumb;
+(void)postLaunchIntervalMetricWithPreviousLaunchTime:(unsigned long long)arg1 ;
+(BOOL)foundBreadcrumb:(id)arg1 ;
-(int)configureInstance:(id)arg1 ;
-(void)destroyPersistentStoreStarted;
-(id)init;
-(void)integrityCheckCompleted:(BOOL)arg1 error:(id)arg2 ;
-(void)destroyPersistentStoreCompleted:(BOOL)arg1 error:(id)arg2 ;
-(void)integrityCheckStarted;
-(void)deleteDatabaseCompleted:(BOOL)arg1 error:(id)arg2 ;
-(void)setLaunchParams:(NSMutableDictionary *)arg1 ;
-(void)launchSequence;
-(NSMutableDictionary *)launchParams;
-(void)_launchSequence:(id)arg1 ;
@end

