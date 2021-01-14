/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/FBProcessObserver.h>

@protocol FBProcessObserver <NSObject>
@optional
-(void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3;
-(void)processDidExit:(id)arg1;

@end

#import <libobjc.A.dylib/FBApplicationProcessObserver.h>

@protocol FBProcessObserver;
@class NSString;

@interface FBProcessObserver : NSObject <FBProcessObserver, FBApplicationProcessObserver> {

	id<FBProcessObserver> _observer;
	unsigned long long _observerAddress;
	Class _observerClass;
	BOOL _supportsDidExit;
	BOOL _supportsStateDidChange;
	BOOL _supportsApplicationDidExit;
	BOOL _supportsApplicationWillLaunch;
	BOOL _supportsApplicationDidLaunch;
	BOOL _supportsApplicationDebugState;
	int _invalidated;
	int _calledDidExit;
	int _calledWillLaunch;
	int _calledDidLaunch;

}

@property (nonatomic,__weak,readonly) id<FBProcessObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3 ;
-(void)applicationProcessDebuggingStateDidChange:(id)arg1 ;
-(void)applicationProcessWillLaunch:(id)arg1 ;
-(id<FBProcessObserver>)observer;
-(void)applicationProcessDidExit:(id)arg1 withContext:(id)arg2 ;
-(id)initWithObserver:(id)arg1 ;
-(void)processDidExit:(id)arg1 ;
-(unsigned long long)hash;
-(void)invalidate;
-(void)applicationProcessDidLaunch:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

