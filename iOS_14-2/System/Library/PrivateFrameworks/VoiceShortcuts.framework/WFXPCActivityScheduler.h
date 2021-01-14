/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@class NSString;

@interface WFXPCActivityScheduler : NSObject {

	NSString* _activityIdentifier;

}

@property (nonatomic,readonly) NSString * activityIdentifier;              //@synthesize activityIdentifier=_activityIdentifier - In the implementation block
+(id)activatedSchedulerWithActivityIdentifier:(id)arg1 checkInHandler:(/*^block*/id)arg2 runHandler:(/*^block*/id)arg3 ;
+(id)activatedSchedulerWithActivityIdentifier:(id)arg1 runHandler:(/*^block*/id)arg2 ;
-(NSString *)activityIdentifier;
-(void)invalidate;
-(id)initWithActivityIdentifier:(id)arg1 ;
-(void)scheduleWithCheckInHandler:(/*^block*/id)arg1 runHandler:(/*^block*/id)arg2 ;
-(void)scheduleWithRunHandler:(/*^block*/id)arg1 ;
@end

