/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/FBSDisplayLayoutObserver.h>

@class FBSDisplayLayoutMonitor, NSDictionary, NSString;

@interface _DKApplicationUsageMonitor : _DKMonitor <FBSDisplayLayoutObserver> {

	FBSDisplayLayoutMonitor* _monitor;
	NSDictionary* _inUseApplicationEvents;

}

@property (nonatomic,retain) FBSDisplayLayoutMonitor * monitor;                //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,copy) NSDictionary * inUseApplicationEvents;              //@synthesize inUseApplicationEvents=_inUseApplicationEvents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)eventStream;
+(BOOL)shouldMergeUnchangedEvents;
+(id)_eventWithBundleIdentifier:(id)arg1 startDate:(id)arg2 usageType:(long long)arg3 usageTrusted:(BOOL)arg4 ;
-(void)synchronouslyReflectCurrentValue;
-(void)clearAppWebAndMediaUsageInContextStoreMatchingBundleIDs:(id)arg1 ;
-(id)init;
-(FBSDisplayLayoutMonitor *)monitor;
-(void)start;
-(void)platformSpecificStop;
-(void)setInUseApplicationEvents:(NSDictionary *)arg1 ;
-(void)stop;
-(NSDictionary *)inUseApplicationEvents;
-(void)obtainCurrentValue;
-(void)updateInUseApplications:(id)arg1 activeApplications:(id)arg2 ;
-(void)setMonitor:(FBSDisplayLayoutMonitor *)arg1 ;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(void)invalidateInstantState;
-(void)platformSpecificStart;
-(void)updateActiveApplicationsWithLayout:(id)arg1 ;
-(void)updateAppDataInContextStore;
@end

