/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString;

@interface PKPaymentRequestPassUpdateResponse : PKPaymentWebServiceResponse {

	NSString* _passURL;
	unsigned long long _appletState;

}

@property (nonatomic,copy,readonly) NSString * passURL;                     //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,readonly) unsigned long long appletState;              //@synthesize appletState=_appletState - In the implementation block
-(NSString *)passURL;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)appletState;
@end

