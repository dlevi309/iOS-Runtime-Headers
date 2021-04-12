/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@protocol HMFLocking;
@class NSHashTable;

@interface HMDWatchSystemState : HMFObject {

	id<HMFLocking> _lock;
	BOOL _companionReachable;
	NSHashTable* _watchSystemStateDelegates;

}

@property (nonatomic,readonly) NSHashTable * watchSystemStateDelegates;                        //@synthesize watchSystemStateDelegates=_watchSystemStateDelegates - In the implementation block
@property (assign,getter=isCompanionReachable,nonatomic) BOOL companionReachable;              //@synthesize companionReachable=_companionReachable - In the implementation block
+(id)sharedState;
-(id)init;
-(void)registerDelegate:(id)arg1 ;
-(BOOL)isCompanionReachable;
-(void)_callDidUpdateReachabilityChangeForCompanion:(BOOL)arg1 forDelegate:(id)arg2 ;
-(void)setCompanionReachable:(BOOL)arg1 ;
-(NSHashTable *)watchSystemStateDelegates;
@end

