/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentDevicePassesRequest : PKPaymentWebServiceRequest {

	NSString* _updatedSince;

}

@property (nonatomic,copy) NSString * updatedSince;              //@synthesize updatedSince=_updatedSince - In the implementation block
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(NSString *)updatedSince;
-(void)setUpdatedSince:(NSString *)arg1 ;
@end

