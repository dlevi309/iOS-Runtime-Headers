/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSObject;

@interface HMDWatchSystemState : HMFObject {

	BOOL _companionReachable;
	NSHashTable* _watchSystemStateDelegates;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                     //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) NSHashTable * watchSystemStateDelegates;                        //@synthesize watchSystemStateDelegates=_watchSystemStateDelegates - In the implementation block
@property (assign,getter=isCompanionReachable,nonatomic) BOOL companionReachable;              //@synthesize companionReachable=_companionReachable - In the implementation block
+(id)sharedState;
-(id)init;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)registerDelegate:(id)arg1 ;
-(BOOL)isCompanionReachable;
-(void)newIncomingMessageFromClient;
-(void)_callDidUpdateReachabilityChangeForCompanion:(BOOL)arg1 forDelegate:(id)arg2 ;
-(NSHashTable *)watchSystemStateDelegates;
-(void)_callDidReceiveNewIncomingMessageForDelegate:(id)arg1 ;
-(void)setCompanionReachable:(BOOL)arg1 ;
@end

