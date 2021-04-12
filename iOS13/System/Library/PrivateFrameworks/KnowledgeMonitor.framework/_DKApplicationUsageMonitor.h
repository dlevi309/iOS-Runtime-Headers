/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/FBSDisplayLayoutObserver.h>

@class FBSDisplayLayoutMonitor, NSDictionary, NSString;

@interface _DKApplicationUsageMonitor : _DKMonitor <FBSDisplayLayoutObserver> {

	FBSDisplayLayoutMonitor* _monitor;
	NSDictionary* _activeApplicationEvents;

}

@property (nonatomic,retain) FBSDisplayLayoutMonitor * monitor;                 //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,copy) NSDictionary * activeApplicationEvents;              //@synthesize activeApplicationEvents=_activeApplicationEvents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)eventStream;
+(BOOL)shouldMergeUnchangedEvents;
+(id)_eventWithBundleIdentifier:(id)arg1 startDate:(id)arg2 ;
-(id)init;
-(void)stop;
-(void)start;
-(FBSDisplayLayoutMonitor *)monitor;
-(void)synchronouslyReflectCurrentValue;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(void)setMonitor:(FBSDisplayLayoutMonitor *)arg1 ;
-(void)obtainCurrentValue;
-(void)invalidateInstantState;
-(NSDictionary *)activeApplicationEvents;
-(void)updateActiveApplicationsWithLayout:(id)arg1 ;
-(void)updateActiveApplications:(id)arg1 ;
-(void)setActiveApplicationEvents:(NSDictionary *)arg1 ;
-(void)updateContextStore;
-(void)platformSpecificStart;
-(void)platformSpecificStop;
@end

