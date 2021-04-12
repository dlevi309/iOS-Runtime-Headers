/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/ATXDuetEvent.h>

@class NSString, NSNumber;

@interface ATXAudioDuetEvent : ATXDuetEvent {

	long long _audioState;
	NSString* _deviceIdentifier;
	NSString* _portType;
	NSString* _portName;
	NSNumber* _routeChangeReason;

}

@property (nonatomic,readonly) long long audioState;                      //@synthesize audioState=_audioState - In the implementation block
@property (nonatomic,readonly) NSString * deviceIdentifier;               //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * portType;                       //@synthesize portType=_portType - In the implementation block
@property (nonatomic,readonly) NSString * portName;                       //@synthesize portName=_portName - In the implementation block
@property (nonatomic,readonly) NSNumber * routeChangeReason;              //@synthesize routeChangeReason=_routeChangeReason - In the implementation block
-(id)description;
-(id)identifier;
-(NSString *)portType;
-(NSString *)portName;
-(NSNumber *)routeChangeReason;
-(NSString *)deviceIdentifier;
-(id)initWithDKEvent:(id)arg1 ;
-(id)initWithCurrentContextStoreValues;
-(id)initWithAudioState:(long long)arg1 deviceIdentifier:(id)arg2 portType:(id)arg3 portName:(id)arg4 routeChangeReason:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 ;
-(long long)audioState;
@end

