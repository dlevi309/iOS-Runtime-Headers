/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSNumber, NSString;

@interface PKPeerPaymentWebServiceBadRequestResponse : PKPeerPaymentWebServiceResponse {

	NSNumber* _errorCode;
	NSString* _serverDebugDescription;

}

@property (nonatomic,copy,readonly) NSNumber * errorCode;                           //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverDebugDescription;              //@synthesize serverDebugDescription=_serverDebugDescription - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSNumber *)errorCode;
-(NSString *)serverDebugDescription;
@end

