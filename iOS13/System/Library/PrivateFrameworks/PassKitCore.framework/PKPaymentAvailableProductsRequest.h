/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentAvailableProductsRequest : PKPaymentWebServiceRequest {

	BOOL _ignoreCache;
	NSString* _type;

}

@property (nonatomic,copy) NSString * type;                 //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL ignoreCache;              //@synthesize ignoreCache=_ignoreCache - In the implementation block
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(id)initWithType:(id)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(BOOL)ignoreCache;
-(void)setIgnoreCache:(BOOL)arg1 ;
@end

