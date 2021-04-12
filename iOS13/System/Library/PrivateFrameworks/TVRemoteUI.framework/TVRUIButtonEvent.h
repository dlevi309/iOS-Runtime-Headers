/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/


@class NSDate;

@interface TVRUIButtonEvent : NSObject {

	NSDate* _timestamp;
	long long _buttonType;
	long long _eventType;

}

@property (nonatomic,copy,readonly) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long buttonType;                 //@synthesize buttonType=_buttonType - In the implementation block
@property (nonatomic,readonly) long long eventType;                  //@synthesize eventType=_eventType - In the implementation block
+(id)createButtonEvent:(long long)arg1 buttonType:(long long)arg2 ;
-(id)description;
-(NSDate *)timestamp;
-(long long)eventType;
-(long long)buttonType;
-(id)_initWithButtonType:(long long)arg1 eventType:(long long)arg2 ;
@end

