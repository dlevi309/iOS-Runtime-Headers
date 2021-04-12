/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCharacteristicRequest.h>

@class NSData, NSUUID;

@interface HMDCharacteristicWriteRequest : HMDCharacteristicRequest {

	id _value;
	NSData* _authorizationData;
	NSUUID* _identifier;
	unsigned long long _requestType;

}

@property (nonatomic,readonly) id value;                                    //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSData * authorizationData;                  //@synthesize authorizationData=_authorizationData - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long requestType;              //@synthesize requestType=_requestType - In the implementation block
+(id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 type:(unsigned long long)arg4 ;
+(id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 identifier:(id)arg4 type:(unsigned long long)arg5 ;
-(id)description;
-(NSUUID *)identifier;
-(id)value;
-(unsigned long long)requestType;
-(NSData *)authorizationData;
-(id)initWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 identifier:(id)arg4 type:(unsigned long long)arg5 ;
@end

