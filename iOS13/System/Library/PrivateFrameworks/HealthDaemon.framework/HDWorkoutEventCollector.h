/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<HDWorkoutEventCollectorDelegate>)delegate;
-(void)stop;
-(HDProfile *)profile;
-(NSUUID *)sessionId;
-(void)startWithSessionId:(id)arg1 ;
-(void)requestPendingEventsThroughDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithProfile:(id)arg1 delegate:(id)arg2 ;
-(BOOL)supportsWorkoutActivityType:(unsigned long long)arg1 ;
@end

