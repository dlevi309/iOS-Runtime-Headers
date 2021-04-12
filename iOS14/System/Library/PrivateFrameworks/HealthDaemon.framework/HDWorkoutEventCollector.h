/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDWorkoutEventCollectorDelegate;
@class NSUUID, HDProfile;

@interface HDWorkoutEventCollector : NSObject {

	id<HDWorkoutEventCollectorDelegate> _delegate;
	NSUUID* _sessionId;
	HDProfile* _profile;

}

@property (__weak,readonly) id<HDWorkoutEventCollectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSUUID * sessionId;                                               //@synthesize sessionId=_sessionId - In the implementation block
@property (__weak,readonly) HDProfile * profile;                                       //@synthesize profile=_profile - In the implementation block
+(BOOL)isAvailableInCurrentHardware;
-(NSUUID *)sessionId;
-(id)initWithProfile:(id)arg1 delegate:(id)arg2 ;
-(id<HDWorkoutEventCollectorDelegate>)delegate;
-(void)stop;
-(HDProfile *)profile;
-(void)startWithSessionId:(id)arg1 ;
-(void)requestPendingEventsThroughDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)supportsWorkoutActivityType:(unsigned long long)arg1 ;
-(void)unitTest_setCMWorkoutManager:(id)arg1 ;
@end

