/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <TouchRemote/TRResponseMessage.h>

@class NSData;

@interface HMDeviceSetupResponseMessage : TRResponseMessage {

	NSData* _payload;

}

@property (nonatomic,copy,readonly) NSData * payload;              //@synthesize payload=_payload - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithPayload:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)payload;
-(id)initWithCoder:(id)arg1 ;
@end

