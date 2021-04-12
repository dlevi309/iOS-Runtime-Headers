/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, BSServiceConnection;

@interface UISApplicationStateClient : NSObject <BSInvalidatable> {

	NSString* _bundleIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _queue_invalidated;
	BSServiceConnection* _queue_connection;

}

@property (nonatomic,copy) NSString * badgeValue; 
@property (assign,nonatomic) BOOL usesBackgroundNetwork; 
@property (assign,nonatomic) double nextWakeIntervalSinceReferenceDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBadgeValue:(NSString *)arg1 ;
-(NSString *)badgeValue;
-(void)setUsesBackgroundNetwork:(BOOL)arg1 ;
-(BOOL)usesBackgroundNetwork;
-(void)setMinimumBackgroundFetchInterval:(double)arg1 ;
-(id)_remoteTarget;
-(double)nextWakeIntervalSinceReferenceDate;
-(void)setNextWakeIntervalSinceReferenceDate:(double)arg1 ;
@end

