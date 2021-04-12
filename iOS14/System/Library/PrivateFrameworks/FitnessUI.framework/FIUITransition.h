/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/


@class NSString, FIUIState;

@interface FIUITransition : NSObject {

	NSString* _label;
	FIUIState* _toState;
	long long _event;
	/*^block*/id _handler;
	/*^block*/id _gate;

}

@property (nonatomic,retain) NSString * label;                        //@synthesize label=_label - In the implementation block
@property (assign,nonatomic,__weak) FIUIState * toState;              //@synthesize toState=_toState - In the implementation block
@property (assign,nonatomic) long long event;                         //@synthesize event=_event - In the implementation block
@property (nonatomic,copy) id handler;                                //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) id gate;                                   //@synthesize gate=_gate - In the implementation block
-(FIUIState *)toState;
-(id)gate;
-(void)setHandler:(id)arg1 ;
-(void)setGate:(id)arg1 ;
-(void)setToState:(FIUIState *)arg1 ;
-(long long)event;
-(void)setEvent:(long long)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(id)handler;
-(NSString *)label;
@end

