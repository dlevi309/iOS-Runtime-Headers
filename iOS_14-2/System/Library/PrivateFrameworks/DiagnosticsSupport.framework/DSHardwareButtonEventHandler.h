/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTarget:(id)arg1 ;
-(void)setEvents:(unsigned long long)arg1 ;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(id)target;
-(unsigned long long)events;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPreventPropagation:(BOOL)arg1 ;
-(BOOL)preventPropagation;
-(BOOL)isEqualToHandler:(id)arg1 ;
@end

