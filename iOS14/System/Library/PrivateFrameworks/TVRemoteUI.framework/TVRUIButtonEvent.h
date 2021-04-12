/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)eventType;
-(NSDate *)timestamp;
-(id)description;
-(long long)buttonType;
-(id)_initWithButtonType:(long long)arg1 eventType:(long long)arg2 ;
@end

