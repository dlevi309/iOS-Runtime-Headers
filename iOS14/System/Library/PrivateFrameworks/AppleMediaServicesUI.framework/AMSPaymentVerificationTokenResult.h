/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface AMSPaymentVerificationTokenResult : NSObject <NSSecureCoding> {

	NSData* _tokenData;

}

@property (nonatomic,readonly) NSData * tokenData;              //@synthesize tokenData=_tokenData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)tokenData;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTokenData:(id)arg1 ;
@end

