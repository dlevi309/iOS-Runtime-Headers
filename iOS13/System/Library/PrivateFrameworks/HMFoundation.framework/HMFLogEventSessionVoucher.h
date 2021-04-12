/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(id)initWithServiceName:(id)arg1 ;
-(NSString *)serviceName;
-(id)initWithUUID:(id)arg1 serviceName:(id)arg2 ;
@end

