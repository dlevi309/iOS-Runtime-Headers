/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSData, NSString, NSDictionary;

@interface PKPaymentConfigurationResponse : PKPaymentWebServiceResponse {

	NSData* _data;
	NSData* _signature;
	NSString* _version;
	NSDictionary* _configuration;

}

@property (nonatomic,copy,readonly) NSData * data;                             //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSData * signature;                        //@synthesize signature=_signature - In the implementation block
@property (nonatomic,copy,readonly) NSString * version;                        //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(NSString *)version;
-(NSDictionary *)configuration;
-(NSData *)signature;
@end

