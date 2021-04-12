/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(long long)event;
-(void)setEvent:(long long)arg1 ;
-(FIUIState *)toState;
-(void)setToState:(FIUIState *)arg1 ;
-(id)gate;
-(void)setGate:(id)arg1 ;
@end

