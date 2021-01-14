/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentBrowseableBankAppsRequest : PKPaymentWebServiceRequest {

	NSString* _region;

}

@property (nonatomic,copy) NSString * region;              //@synthesize region=_region - In the implementation block
-(NSString *)region;
-(void)setRegion:(NSString *)arg1 ;
-(id)initWithRegion:(id)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
@end

