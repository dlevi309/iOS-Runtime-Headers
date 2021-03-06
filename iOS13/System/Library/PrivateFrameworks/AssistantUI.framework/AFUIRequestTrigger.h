/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/


@class SASRequestOptions, NSMapTable;

@interface AFUIRequestTrigger : NSObject {

	SASRequestOptions* _options;
	long long _state;
	NSMapTable* _observers;

}

@property (nonatomic,readonly) SASRequestOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) long long state;                          //@synthesize state=_state - In the implementation block
-(SASRequestOptions *)options;
-(long long)state;
-(void)_updateState:(long long)arg1 ;
-(id)initWithRequestOptions:(id)arg1 updateHandle:(/*^block*/id*)arg2 ;
-(void)addTriggerTarget:(id)arg1 action:(SEL)arg2 ;
-(void)removeTriggerTarget:(id)arg1 ;
@end

