/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSDOMEvent.h>

@class NSString, IKDOMNode, NSDate;

@interface IKDOMEvent : IKJSObject <IKJSDOMEvent> {

	BOOL _bubbles;
	BOOL _cancelable;
	BOOL _inUse;
	BOOL _defaultPrevented;
	NSString* _type;
	IKDOMNode* _target;
	NSDate* _timeStamp;
	NSString* _xmlAttribute;
	IKDOMNode* _currentTarget;
	long long _eventPhase;
	long long _dispatchState;

}

@property (nonatomic,retain) IKDOMNode * currentTarget;                     //@synthesize currentTarget=_currentTarget - In the implementation block
@property (assign,nonatomic) long long eventPhase;                          //@synthesize eventPhase=_eventPhase - In the implementation block
@property (assign,nonatomic) long long dispatchState;                       //@synthesize dispatchState=_dispatchState - In the implementation block
@property (assign,nonatomic) BOOL defaultPrevented;                         //@synthesize defaultPrevented=_defaultPrevented - In the implementation block
@property (nonatomic,retain) IKDOMNode * target;                            //@synthesize target=_target - In the implementation block
@property (nonatomic,retain,readonly) NSString * xmlAttribute;              //@synthesize xmlAttribute=_xmlAttribute - In the implementation block
@property (assign,getter=isInUse,nonatomic) BOOL inUse;                     //@synthesize inUse=_inUse - In the implementation block
@property (nonatomic,retain,readonly) NSString * type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL bubbles;                                //@synthesize bubbles=_bubbles - In the implementation block
@property (nonatomic,readonly) BOOL cancelable;                             //@synthesize cancelable=_cancelable - In the implementation block
@property (nonatomic,readonly) NSDate * timeStamp;                          //@synthesize timeStamp=_timeStamp - In the implementation block
-(NSString *)type;
-(void)setTarget:(IKDOMNode *)arg1 ;
-(IKDOMNode *)target;
-(NSDate *)timeStamp;
-(void)setDefaultPrevented:(BOOL)arg1 ;
-(void)setInUse:(BOOL)arg1 ;
-(BOOL)isInUse;
-(IKDOMNode *)currentTarget;
-(long long)eventPhase;
-(BOOL)bubbles;
-(BOOL)cancelable;
-(BOOL)defaultPrevented;
-(void)stopPropagation;
-(void)preventDefault;
-(void)stopImmediatePropagation;
-(BOOL)isPropagationStopped;
-(void)updateDispatchStateWithCurrentTarget:(id)arg1 phase:(long long)arg2 ;
-(NSString *)xmlAttribute;
-(BOOL)isImmediatePropagationStopped;
-(id)initWithAppContext:(id)arg1 type:(id)arg2 xmlAttribute:(id)arg3 canBubble:(BOOL)arg4 isCancelable:(BOOL)arg5 ;
-(id)initWithType:(id)arg1 eventInit:(id)arg2 ;
-(void)setCurrentTarget:(IKDOMNode *)arg1 ;
-(void)setEventPhase:(long long)arg1 ;
-(long long)dispatchState;
-(void)setDispatchState:(long long)arg1 ;
@end

