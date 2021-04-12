/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNNavigationStateObserver.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSObject, NSString;

@interface MNNavdStateUpdater : NSObject <MNNavigationStateObserver> {

	NSHashTable* _innerObservers;
	BOOL _hasObservers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedUpdater;
-(id)initPrivate;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)stateManager:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(BOOL)isNavigatingOrPredictingDestination;
-(BOOL)isNavigatingWithETA;
@end

