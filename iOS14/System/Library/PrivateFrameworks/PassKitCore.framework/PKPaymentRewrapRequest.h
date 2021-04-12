/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentRewrapRequestBase.h>

@class NSString;

@interface PKPaymentRewrapRequest : PKPaymentRewrapRequestBase {

	NSString* _merchantIdentifier;
	NSString* _hostApplicationIdentifier;

}

@property (nonatomic,copy) NSString * merchantIdentifier;                     //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * hostApplicationIdentifier;              //@synthesize hostApplicationIdentifier=_hostApplicationIdentifier - In the implementation block
-(id)endpointName;
-(void)setHostApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)merchantIdentifier;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(NSString *)hostApplicationIdentifier;
-(id)bodyDictionary;
@end

