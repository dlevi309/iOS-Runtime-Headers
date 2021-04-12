/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString, AWDHomeKitValue;

@interface HMDWHASettingEvent : HMDLogEvent <HMDAWDLogEvent> {

	NSString* _keyPath;
	AWDHomeKitValue* _value;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * keyPath;                      //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,copy) AWDHomeKitValue * value;                 //@synthesize value=_value - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)eventWithKeyPath:(id)arg1 value:(id)arg2 ;
-(void)setValue:(AWDHomeKitValue *)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(NSString *)keyPath;
-(AWDHomeKitValue *)value;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
@end

