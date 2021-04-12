/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(VSOptional *)previousState;
-(void)setPreviousState:(VSOptional *)arg1 ;
-(VSOptional *)nextState;
-(void)setNextState:(VSOptional *)arg1 ;
-(VSOptional *)triggeringEvent;
-(void)setTriggeringEvent:(VSOptional *)arg1 ;
@end

