/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreDuetLogEvent.h>

@class NSUUID, NSString, NSArray;

@interface HMDRoomLogEvent : HMDLogEvent <HMDCoreDuetLogEvent> {

	unsigned long long _triggerSource;
	NSUUID* _roomUUID;
	NSUUID* _homeUUID;
	NSString* _serializedIdentifier;
	NSString* _roomName;
	NSString* _viewInformation;

}

@property (readonly) unsigned long long duetEventType; 
@property (copy,readonly) NSArray * eventDataToLog; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long triggerSource;                  //@synthesize triggerSource=_triggerSource - In the implementation block
@property (nonatomic,readonly) NSUUID * roomUUID;                                 //@synthesize roomUUID=_roomUUID - In the implementation block
@property (nonatomic,readonly) NSUUID * homeUUID;                                 //@synthesize homeUUID=_homeUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * serializedIdentifier;              //@synthesize serializedIdentifier=_serializedIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * roomName;                          //@synthesize roomName=_roomName - In the implementation block
@property (nonatomic,copy,readonly) NSString * viewInformation;                   //@synthesize viewInformation=_viewInformation - In the implementation block
+(id)uuid;
-(NSUUID *)homeUUID;
-(NSString *)viewInformation;
-(NSString *)roomName;
-(id)metadata;
-(id)value;
-(NSString *)serializedIdentifier;
-(NSUUID *)roomUUID;
-(unsigned long long)triggerSource;
-(id)initWithRoom:(id)arg1 source:(unsigned long long)arg2 viewInformation:(id)arg3 ;
-(unsigned long long)duetEventType;
-(NSArray *)eventDataToLog;
-(id)initWithRoomUUID:(id)arg1 roomName:(id)arg2 source:(unsigned long long)arg3 serializedIdentifier:(id)arg4 homeUUID:(id)arg5 viewInformation:(id)arg6 ;
@end

