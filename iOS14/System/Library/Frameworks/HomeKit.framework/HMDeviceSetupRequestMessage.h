/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <TouchRemote/TRRequestMessage.h>

@class NSData;

@interface HMDeviceSetupRequestMessage : TRRequestMessage {

	NSData* _payload;
	long long _qualityOfService;

}

@property (nonatomic,copy,readonly) NSData * payload;                 //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) long long qualityOfService;              //@synthesize qualityOfService=_qualityOfService - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setQualityOfService:(long long)arg1 ;
-(id)init;
-(id)initWithPayload:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)payload;
-(id)initWithCoder:(id)arg1 ;
-(long long)qualityOfService;
@end

