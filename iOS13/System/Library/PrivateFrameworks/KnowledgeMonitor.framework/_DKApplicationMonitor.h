/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/FBSDisplayLayoutObserver.h>

@class FBSDisplayLayoutMonitor, NSMutableArray, BKSApplicationStateMonitor, NSMutableDictionary, NSSet, NSString;

@interface _DKApplicationMonitor : _DKMonitor <FBSDisplayLayoutObserver> {

	FBSDisplayLayoutMonitor* _monitor;
	NSMutableArray* _previouslyForegroundServices;
	BKSApplicationStateMonitor* _bksMonitor;
	NSMutableDictionary* _activeExtensions;
	NSSet* _servicesOfInterestForWatchCommunication;
	NSString* _lastIdentifierSet;

}

@property (nonatomic,retain) FBSDisplayLayoutMonitor * monitor;                            //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,retain) NSMutableArray * previouslyForegroundServices;                //@synthesize previouslyForegroundServices=_previouslyForegroundServices - In the implementation block
@property (nonatomic,retain) BKSApplicationStateMonitor * bksMonitor;                      //@synthesize bksMonitor=_bksMonitor - In the implementation block
@property (retain) NSMutableDictionary * activeExtensions;                                 //@synthesize activeExtensions=_activeExtensions - In the implementation block
@property (nonatomic,retain) NSSet * servicesOfInterestForWatchCommunication;              //@synthesize servicesOfInterestForWatchCommunication=_servicesOfInterestForWatchCommunication - In the implementation block
@property (nonatomic,retain) NSString * lastIdentifierSet;                                 //@synthesize lastIdentifierSet=_lastIdentifierSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entitlements;
+(id)eventStream;
+(/*^block*/id)_eventFilterBlock;
+(id)_defaultEvent;
+(void)setFocalApplication:(id)arg1 launchReason:(id)arg2 ;
+(id)_eventWithBundleIdentifier:(id)arg1 launchReason:(id)arg2 ;
+(void)addServicesForeground:(id)arg1 andRemoveServices:(id)arg2 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(FBSDisplayLayoutMonitor *)monitor;
-(void)synchronouslyReflectCurrentValue;
-(void)deactivate;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(void)setMonitor:(FBSDisplayLayoutMonitor *)arg1 ;
-(BKSApplicationStateMonitor *)bksMonitor;
-(void)setBksMonitor:(BKSApplicationStateMonitor *)arg1 ;
-(void)obtainCurrentValue;
-(void)platformSpecificStart;
-(void)platformSpecificStop;
-(id)currentActiveComplications;
-(void)setCurrentActiveComplications;
-(void)registerForActiveComplicationChangeNotifications;
-(NSSet *)servicesOfInterestForWatchCommunication;
-(NSMutableArray *)previouslyForegroundServices;
-(BOOL)ignoreAppExtension:(id)arg1 ;
-(void)setPreviouslyForegroundServices:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)activeExtensions;
-(void)setActiveExtensions:(NSMutableDictionary *)arg1 ;
-(void)setServicesOfInterestForWatchCommunication:(NSSet *)arg1 ;
-(NSString *)lastIdentifierSet;
-(void)setLastIdentifierSet:(NSString *)arg1 ;
@end

