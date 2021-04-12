/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

