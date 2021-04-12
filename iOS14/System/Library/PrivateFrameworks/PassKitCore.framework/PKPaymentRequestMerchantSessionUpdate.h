/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPaymentMerchantSession;

@interface PKPaymentRequestMerchantSessionUpdate : NSObject <NSSecureCoding> {

	long long _status;
	PKPaymentMerchantSession* _session;

}

@property (assign,nonatomic) long long status;                                //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) PKPaymentMerchantSession * session;              //@synthesize session=_session - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithStatus:(long long)arg1 merchantSession:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(PKPaymentMerchantSession *)session;
-(void)setSession:(PKPaymentMerchantSession *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(long long)status;
@end

