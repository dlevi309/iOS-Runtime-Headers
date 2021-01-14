/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCharacteristicRequest.h>

@class NSData, NSUUID;

@interface HMDCharacteristicWriteRequest : HMDCharacteristicRequest {

	BOOL _includeResponseValue;
	id _value;
	NSData* _authorizationData;
	NSUUID* _identifier;
	unsigned long long _requestType;

}

@property (nonatomic,readonly) id value;                                    //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSData * authorizationData;                  //@synthesize authorizationData=_authorizationData - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long requestType;              //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) BOOL includeResponseValue;                   //@synthesize includeResponseValue=_includeResponseValue - In the implementation block
+(id)logCategory;
+(id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 type:(unsigned long long)arg4 ;
+(id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 identifier:(id)arg4 type:(unsigned long long)arg5 includeResponseValue:(BOOL)arg6 ;
+(id)writeRequestForTransitionStartWithLightProfile:(id)arg1 naturalLightingEnabled:(BOOL)arg2 startDate:(id)arg3 type:(unsigned long long)arg4 dataSource:(id)arg5 ;
+(id)writeRequestForTransitionStartWithLightProfile:(id)arg1 naturalLightingEnabled:(BOOL)arg2 startDate:(id)arg3 type:(unsigned long long)arg4 ;
+(id)writeRequestForTransitionFetchWithLightProfile:(id)arg1 ;
+(id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 identifier:(id)arg4 type:(unsigned long long)arg5 ;
-(unsigned long long)requestType;
-(id)attributeDescriptions;
-(NSUUID *)identifier;
-(id)value;
-(NSData *)authorizationData;
-(BOOL)includeResponseValue;
-(id)initWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 identifier:(id)arg4 type:(unsigned long long)arg5 includeResponseValue:(BOOL)arg6 ;
@end

