/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@class VSOptional;

@interface VSStateTransition : NSObject {

	VSOptional* _previousState;
	VSOptional* _triggeringEvent;
	VSOptional* _nextState;

}

@property (nonatomic,retain) VSOptional * previousState;                //@synthesize previousState=_previousState - In the implementation block
@property (nonatomic,retain) VSOptional * triggeringEvent;              //@synthesize triggeringEvent=_triggeringEvent - In the implementation block
@property (nonatomic,retain) VSOptional * nextState;                    //@synthesize nextState=_nextState - In the implementation block
-(VSOptional *)previousState;
-(id)init;
-(VSOptional *)nextState;
-(void)setNextState:(VSOptional *)arg1 ;
-(void)setPreviousState:(VSOptional *)arg1 ;
-(VSOptional *)triggeringEvent;
-(void)setTriggeringEvent:(VSOptional *)arg1 ;
@end

