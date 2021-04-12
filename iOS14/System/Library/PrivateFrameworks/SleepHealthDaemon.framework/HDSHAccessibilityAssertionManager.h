/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthDaemon.framework/SleepHealthDaemon
*/

#import <libobjc.A.dylib/HDContentProtectionObserver.h>

@protocol OS_dispatch_queue;
@class HDAssertion, NSObject, HDProfile, NSString;

@interface HDSHAccessibilityAssertionManager : NSObject <HDContentProtectionObserver> {

	HDAssertion* _accessibilityAssertion;
	NSObject*<OS_dispatch_queue> _queue;
	HDProfile* _profile;

}

@property (assign,nonatomic) BOOL shouldBeObservingContentProtectionState; 
@property (nonatomic,readonly) HDAssertion * accessibilityAssertion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProfile:(id)arg1 ;
-(void)dealloc;
-(void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2 ;
-(HDAssertion *)accessibilityAssertion;
-(void)_restoreContentProtectionObservingState;
-(BOOL)shouldBeObservingContentProtectionState;
-(void)setShouldBeObservingContentProtectionState:(BOOL)arg1 ;
-(void)_queue_takeAccessibilityAssertion;
-(void)beginObservingContentProtectionState;
-(void)stopObservingContentProtectionState;
-(void)invalidateAccessibilityAssertion;
@end

