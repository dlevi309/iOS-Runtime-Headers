/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface _UIDatePickerCalendarTimeLabelStateMachineContext : NSObject {

	unsigned long long _currentState;
	/*^block*/id _updateHandler;
	BOOL _isFirstResponder;
	unsigned long long _lastDistinctState;
	unsigned long long _previousState;

}

@property (nonatomic,readonly) unsigned long long lastDistinctState;              //@synthesize lastDistinctState=_lastDistinctState - In the implementation block
@property (nonatomic,readonly) unsigned long long previousState;                  //@synthesize previousState=_previousState - In the implementation block
@property (nonatomic,readonly) unsigned long long currentState;                   //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,readonly) unsigned long long* currentStateRef; 
@property (assign,nonatomic) BOOL isFirstResponder;                               //@synthesize isFirstResponder=_isFirstResponder - In the implementation block
-(unsigned long long)previousState;
-(BOOL)isFirstResponder;
-(unsigned long long)currentState;
-(BOOL)currentSateCanTransitionWithEvents:(id)arg1 ;
-(unsigned long long*)currentStateRef;
-(void)_updateFromState:(unsigned long long)arg1 ;
-(void)setIsFirstResponder:(BOOL)arg1 ;
-(unsigned long long)lastDistinctState;
-(id)initWithUpdateHandler:(/*^block*/id)arg1 ;
@end

