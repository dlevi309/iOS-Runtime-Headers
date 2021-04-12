/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithData:(id)arg1 ;
-(NSString *)passURL;
-(unsigned long long)appletState;
@end

