/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDMediaPropertyRequest.h>

@class NSUUID;

@interface HMDMediaPropertyWriteRequest : HMDMediaPropertyRequest {

	id _value;
	NSUUID* _identifier;

}

@property (nonatomic,readonly) id value;                         //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)requestWithProperty:(id)arg1 mediaProfile:(id)arg2 ;
+(id)serializeWriteRequests:(id)arg1 ;
+(id)deserializeWriteRequests:(id)arg1 mediaProfile:(id)arg2 ;
+(id)writeRequestWithProperty:(id)arg1 value:(id)arg2 mediaProfile:(id)arg3 ;
+(id)writeRequestWithProperty:(id)arg1 value:(id)arg2 mediaProfile:(id)arg3 identifier:(id)arg4 ;
-(id)description;
-(NSUUID *)identifier;
-(id)value;
-(id)initWithProperty:(id)arg1 value:(id)arg2 mediaProfile:(id)arg3 identifier:(id)arg4 ;
@end

