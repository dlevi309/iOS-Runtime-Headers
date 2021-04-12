/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@interface CARButtonInfo : NSObject {

	unsigned long long _buttonType;
	unsigned long long _buttonLocation;
	unsigned long long _buttonPressDuration;

}

@property (nonatomic,readonly) unsigned long long buttonType;                       //@synthesize buttonType=_buttonType - In the implementation block
@property (nonatomic,readonly) unsigned long long buttonLocation;                   //@synthesize buttonLocation=_buttonLocation - In the implementation block
@property (nonatomic,readonly) unsigned long long buttonPressDuration;              //@synthesize buttonPressDuration=_buttonPressDuration - In the implementation block
-(id)initWithButtonType:(unsigned long long)arg1 buttonLocation:(unsigned long long)arg2 buttonPressDuration:(unsigned long long)arg3 ;
-(unsigned long long)buttonLocation;
-(unsigned long long)buttonPressDuration;
-(unsigned long long)buttonType;
@end

