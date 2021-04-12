/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
*/


@class NSMutableDictionary;

@interface AXPidSuspensionInfo : NSObject {

	NSMutableDictionary* _suspendsPids;
	NSMutableDictionary* _probationPids;
	NSMutableDictionary* _tentativeSuspendedPids;
	NSMutableDictionary* _associatedRemotePidCache;
	NSMutableDictionary* _associatedRemotePids;

}
+(id)shared;
-(id)init;
-(id)timeoutProbationPidsForDisplay:(int)arg1 ;
-(id)suspendedPidsForDisplay:(int)arg1 ;
-(id)associatedRemotePidCacheForDisplay:(int)arg1 ;
-(id)tentativeSuspendedPidsForDisplay:(int)arg1 ;
-(id)associatedRemotePidsForDisplay:(int)arg1 ;
@end

