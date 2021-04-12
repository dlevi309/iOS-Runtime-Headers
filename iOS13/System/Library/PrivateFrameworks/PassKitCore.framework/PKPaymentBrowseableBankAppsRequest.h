/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

