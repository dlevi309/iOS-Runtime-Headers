/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@interface PKPeerPaymentPerformActionResponse : PKPeerPaymentWebServiceResponse {

	BOOL _success;
	long long _status;

}

@property (nonatomic,readonly) BOOL success;                  //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) long long status;              //@synthesize status=_status - In the implementation block
-(id)initWithData:(id)arg1 ;
-(long long)status;
-(BOOL)success;
@end

