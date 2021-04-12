/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/


#import <AppSupport/AppSupport-Structs.h>
@class NSLock, NSString;

@interface _ReachabilityRequest : NSObject {

	NSLock* _lock;
	NSString* _hostname;
	SCNetworkReachabilityRef _reachability;
	unsigned _flags;
	CFDictionaryRef _observers;
	BOOL _isReachable;
	BOOL _receivedAtLeastOneCallback;

}

@property (nonatomic,readonly) NSString * hostname;              //@synthesize hostname=_hostname - In the implementation block
-(void)dealloc;
-(id)description;
-(BOOL)hasObservers;
-(void)removeObserver:(id)arg1 ;
-(void)reachabilityChangedWithFlags:(unsigned)arg1 ;
-(id)initWithHostname:(id)arg1 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 ;
-(NSString *)hostname;
@end

