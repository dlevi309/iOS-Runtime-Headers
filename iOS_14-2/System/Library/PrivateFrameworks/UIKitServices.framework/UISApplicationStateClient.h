/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)badgeValue;
-(void)setBadgeValue:(NSString *)arg1 ;
-(void)setUsesBackgroundNetwork:(BOOL)arg1 ;
-(BOOL)usesBackgroundNetwork;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)_remoteTarget;
-(void)setMinimumBackgroundFetchInterval:(double)arg1 ;
-(void)invalidate;
-(void)setNextWakeIntervalSinceReferenceDate:(double)arg1 ;
-(double)nextWakeIntervalSinceReferenceDate;
-(void)dealloc;
@end

