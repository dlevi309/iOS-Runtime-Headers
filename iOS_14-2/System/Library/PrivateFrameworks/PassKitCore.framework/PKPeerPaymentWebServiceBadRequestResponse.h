/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)errorCode;
-(id)initWithData:(id)arg1 ;
-(NSString *)serverDebugDescription;
@end

