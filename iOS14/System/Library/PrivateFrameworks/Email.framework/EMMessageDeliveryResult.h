/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError;

@interface EMMessageDeliveryResult : NSObject <NSSecureCoding> {

	long long _status;
	NSError* _error;

}

@property (nonatomic,readonly) long long status;              //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSError * error;               //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSError *)error;
-(id)initWithStatus:(long long)arg1 error:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)status;
@end

