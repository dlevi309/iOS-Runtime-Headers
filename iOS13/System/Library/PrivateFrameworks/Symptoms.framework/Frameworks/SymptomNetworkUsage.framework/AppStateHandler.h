/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
*/

#import <libobjc.A.dylib/NWAppStateEventListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableSet, NWEntityMapper, NSString;

@interface AppStateHandler : NSObject <NWAppStateEventListenerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _appPidState;
	NSMutableDictionary* _appBundlesMonitored;
	NSMutableDictionary* _appsWithStates;
	NSMutableSet* _foregroundApps;
	NWEntityMapper* _entityMapper;
	BOOL _hasAnyForegroundApp;
	BOOL _handlesRnf;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getAppsWithStates;
-(void)configure:(id)arg1 ;
-(unsigned)currentStateForProcessWithPid:(int)arg1 ;
-(id)_getAppsWithStates;
-(BOOL)_trackerSetHasForeground:(id)arg1 ;
-(void)handleApplicationStateChangeForDisplayName:(id)arg1 UUID:(id)arg2 pid:(int)arg3 state:(unsigned)arg4 ;
-(void)purgeInvalidPidState;
-(void)_removeStateTracker:(id)arg1 hadForeground:(BOOL*)arg2 hasForeground:(BOOL*)arg3 ;
-(id)foregroundAppKeys;
-(BOOL)hasAnyForegroundApp;
-(id)initWithMapper:(id)arg1 ;
@end

