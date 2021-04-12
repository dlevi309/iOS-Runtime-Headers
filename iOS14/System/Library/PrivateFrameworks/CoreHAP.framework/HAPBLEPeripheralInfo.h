/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSNumber, NSString, NSData;

@interface HAPBLEPeripheralInfo : HMFObject <NSSecureCoding> {

	NSUUID* _peripheralUUID;
	unsigned long long _advertisedProtocolVersion;
	unsigned long long _previousProtocolVersion;
	unsigned long long _resumeSessionId;
	double _lastSeen;
	NSNumber* _statusFlags;
	NSNumber* _stateNumber;
	NSNumber* _configNumber;
	NSNumber* _categoryIdentifier;
	NSString* _accessoryName;
	NSData* _broadcastKey;
	double _keyUpdatedTime;
	NSNumber* _keyUpdatedStateNumber;

}

@property (assign,nonatomic) unsigned long long advertisedProtocolVersion;              //@synthesize advertisedProtocolVersion=_advertisedProtocolVersion - In the implementation block
@property (assign,nonatomic) unsigned long long previousProtocolVersion;                //@synthesize previousProtocolVersion=_previousProtocolVersion - In the implementation block
@property (assign,nonatomic) unsigned long long resumeSessionId;                        //@synthesize resumeSessionId=_resumeSessionId - In the implementation block
@property (nonatomic,retain) NSNumber * stateNumber;                                    //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,retain) NSString * accessoryName;                                  //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,retain) NSData * broadcastKey;                                     //@synthesize broadcastKey=_broadcastKey - In the implementation block
@property (assign,nonatomic) double keyUpdatedTime;                                     //@synthesize keyUpdatedTime=_keyUpdatedTime - In the implementation block
@property (nonatomic,retain) NSNumber * keyUpdatedStateNumber;                          //@synthesize keyUpdatedStateNumber=_keyUpdatedStateNumber - In the implementation block
@property (nonatomic,readonly) NSUUID * peripheralUUID;                                 //@synthesize peripheralUUID=_peripheralUUID - In the implementation block
@property (nonatomic,readonly) double lastSeen;                                         //@synthesize lastSeen=_lastSeen - In the implementation block
@property (nonatomic,readonly) NSNumber * statusFlags;                                  //@synthesize statusFlags=_statusFlags - In the implementation block
@property (nonatomic,readonly) NSNumber * configNumber;                                 //@synthesize configNumber=_configNumber - In the implementation block
@property (nonatomic,readonly) NSNumber * categoryIdentifier;                           //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)accessoryName;
-(NSNumber *)categoryIdentifier;
-(double)lastSeen;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)statusFlags;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setAccessoryName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)peripheralUUID;
-(NSNumber *)stateNumber;
-(void)setStateNumber:(NSNumber *)arg1 ;
-(NSNumber *)configNumber;
-(NSData *)broadcastKey;
-(double)keyUpdatedTime;
-(NSNumber *)keyUpdatedStateNumber;
-(void)setBroadcastKey:(NSData *)arg1 ;
-(void)setKeyUpdatedStateNumber:(NSNumber *)arg1 ;
-(void)setKeyUpdatedTime:(double)arg1 ;
-(unsigned long long)advertisedProtocolVersion;
-(void)setPreviousProtocolVersion:(unsigned long long)arg1 ;
-(void)setAdvertisedProtocolVersion:(unsigned long long)arg1 ;
-(void)setResumeSessionId:(unsigned long long)arg1 ;
-(unsigned long long)previousProtocolVersion;
-(unsigned long long)resumeSessionId;
-(id)initWithPeripheralInfo:(id)arg1 advertisedProtocolVersion:(unsigned long long)arg2 previousProtocolVersion:(long long)arg3 resumeSessionId:(unsigned long long)arg4 lastSeen:(double)arg5 statusFlags:(id)arg6 stateNumber:(id)arg7 configNumber:(id)arg8 categoryIdentifier:(id)arg9 accessoryName:(id)arg10 ;
-(void)updateProtocolVersion:(unsigned long long)arg1 ;
-(void)updateResumeSessionId:(unsigned long long)arg1 ;
-(void)updateStateNumber:(id)arg1 ;
-(void)saveBroadcastKey:(id)arg1 keyUpdatedStateNumber:(id)arg2 updatedTime:(double)arg3 ;
-(void)updateBroadcastKey:(id)arg1 ;
-(void)updateAccessoryName:(id)arg1 ;
@end

