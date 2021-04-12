/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
*/


@interface DSHardwareButtonEventHandler : NSObject {

	BOOL _preventPropagation;
	id _target;
	SEL _action;
	unsigned long long _events;

}

@property (nonatomic,retain) id target;                              //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                             //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL preventPropagation;                //@synthesize preventPropagation=_preventPropagation - In the implementation block
@property (assign,nonatomic) unsigned long long events;              //@synthesize events=_events - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(SEL)action;
-(unsigned long long)events;
-(void)setEvents:(unsigned long long)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(void)setPreventPropagation:(BOOL)arg1 ;
-(BOOL)preventPropagation;
-(BOOL)isEqualToHandler:(id)arg1 ;
@end

