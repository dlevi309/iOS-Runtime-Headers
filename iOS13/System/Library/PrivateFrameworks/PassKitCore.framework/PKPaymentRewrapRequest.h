/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)bodyDictionary;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(NSString *)merchantIdentifier;
-(NSString *)hostApplicationIdentifier;
-(void)setHostApplicationIdentifier:(NSString *)arg1 ;
-(id)endpointName;
@end

