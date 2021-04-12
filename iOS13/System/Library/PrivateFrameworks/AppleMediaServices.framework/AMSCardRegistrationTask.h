/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>

@class NSString;

@interface AMSCardRegistrationTask : AMSTask {

	NSString* _countryCode;
	NSString* _merchantIdentifier;

}

@property (nonatomic,copy) NSString * countryCode;                     //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * merchantIdentifier;              //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(id)_performCardRegistration;
-(NSString *)merchantIdentifier;
-(id)initWithCountryCode:(id)arg1 merchantIdentifier:(id)arg2 ;
-(id)performCardRegistration;
@end

