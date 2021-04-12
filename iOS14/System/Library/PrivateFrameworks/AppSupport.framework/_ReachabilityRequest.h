/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)reachabilityChangedWithFlags:(unsigned)arg1 ;
-(id)initWithHostname:(id)arg1 ;
-(BOOL)hasObservers;
-(id)description;
-(NSString *)hostname;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)dealloc;
@end

