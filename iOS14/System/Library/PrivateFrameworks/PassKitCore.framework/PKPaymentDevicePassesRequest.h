/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

