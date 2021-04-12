/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)countryCode;
-(id)_performCardRegistration;
-(NSString *)merchantIdentifier;
-(id)performCardRegistration;
-(id)initWithCountryCode:(id)arg1 merchantIdentifier:(id)arg2 ;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
@end

