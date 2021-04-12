/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/FBSDisplayLayoutObserver.h>

@class FBSDisplayLayoutMonitor, NSMutableArray, BKSApplicationStateMonitor, NSMutableDictionary, NSSet, BMAppLaunchStream, NSString;

@interface _DKApplicationMonitor : _DKMonitor <FBSDisplayLayoutObserver> {

	FBSDisplayLayoutMonitor* _monitor;
	NSMutableArray* _previouslyForegroundServices;
	BKSApplicationStateMonitor* _bksMonitor;
	NSMutableDictionary* _activeExtensions;
	NSSet* _servicesOfInterestForWatchCommunication;
	BMAppLaunchStream* _appLaunchStream;
	NSString* _lastIdentifierSet;

}

@property (nonatomic,retain) FBSDisplayLayoutMonitor * monitor;                            //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,retain) NSMutableArray * previouslyForegroundServices;                //@synthesize previouslyForegroundServices=_previouslyForegroundServices - In the implementation block
@property (nonatomic,retain) BKSApplicationStateMonitor * bksMonitor;                      //@synthesize bksMonitor=_bksMonitor - In the implementation block
@property (retain) NSMutableDictionary * activeExtensions;                                 //@synthesize activeExtensions=_activeExtensions - In the implementation block
@property (nonatomic,retain) NSSet * servicesOfInterestForWatchCommunication;              //@synthesize servicesOfInterestForWatchCommunication=_servicesOfInterestForWatchCommunication - In the implementation block
@property (nonatomic,retain) BMAppLaunchStream * appLaunchStream;                          //@synthesize appLaunchStream=_appLaunchStream - In the implementation block
@property (nonatomic,retain) NSString * lastIdentifierSet;                                 //@synthesize lastIdentifierSet=_lastIdentifierSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entitlements;
+(id)eventStream;
+(void)setFocalApplication:(id)arg1 launchReason:(id)arg2 ;
+(id)_eventWithBundleIdentifier:(id)arg1 launchReason:(id)arg2 ;
+(void)addServicesForeground:(id)arg1 andRemoveServices:(id)arg2 ;
+(id)_defaultEvent;
+(/*^block*/id)_eventFilterBlock;
-(void)synchronouslyReflectCurrentValue;
-(BOOL)ignoreAppExtension:(id)arg1 ;
-(void)setPreviouslyForegroundServices:(NSMutableArray *)arg1 ;
-(id)init;
-(FBSDisplayLayoutMonitor *)monitor;
-(void)start;
-(void)platformSpecificStop;
-(void)stop;
-(void)deactivate;
-(void)obtainCurrentValue;
-(void)setMonitor:(FBSDisplayLayoutMonitor *)arg1 ;
-(BKSApplicationStateMonitor *)bksMonitor;
-(void)setLastIdentifierSet:(NSString *)arg1 ;
-(BMAppLaunchStream *)appLaunchStream;
-(NSString *)lastIdentifierSet;
-(id)currentActiveComplications;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(void)setServicesOfInterestForWatchCommunication:(NSSet *)arg1 ;
-(void)platformSpecificStart;
-(NSMutableDictionary *)activeExtensions;
-(void)registerForActiveComplicationChangeNotifications;
-(void)setAppLaunchStream:(BMAppLaunchStream *)arg1 ;
-(void)setBksMonitor:(BKSApplicationStateMonitor *)arg1 ;
-(void)setCurrentActiveComplications;
-(NSSet *)servicesOfInterestForWatchCommunication;
-(NSMutableArray *)previouslyForegroundServices;
-(void)dealloc;
-(void)setActiveExtensions:(NSMutableDictionary *)arg1 ;
@end

