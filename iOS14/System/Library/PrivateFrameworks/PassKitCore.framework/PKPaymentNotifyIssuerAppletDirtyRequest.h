/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentNotifyIssuerAppletDirtyRequest : PKPaymentWebServiceRequest {

	NSString* _passSerialNumber;
	NSString* _deviceAccountIdentifier;

}
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)initWithPassSerialNumber:(id)arg1 deviceAccountIdentifier:(id)arg2 ;
@end

