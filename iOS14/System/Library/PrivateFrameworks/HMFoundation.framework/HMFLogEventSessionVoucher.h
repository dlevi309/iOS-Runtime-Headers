/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface HMFLogEventSessionVoucher : NSObject <NSSecureCoding> {

	NSString* _serviceName;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) NSString * serviceName;              //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                       //@synthesize uuid=_uuid - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)uuid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(NSString *)serviceName;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUUID:(id)arg1 serviceName:(id)arg2 ;
@end

