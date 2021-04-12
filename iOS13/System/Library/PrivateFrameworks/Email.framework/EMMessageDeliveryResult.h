/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(long long)status;
-(id)initWithStatus:(long long)arg1 error:(id)arg2 ;
@end

