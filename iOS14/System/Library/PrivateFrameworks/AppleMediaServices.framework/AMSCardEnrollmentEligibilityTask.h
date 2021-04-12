/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>

@protocol AMSBagProtocol;
@class NSString;

@interface AMSCardEnrollmentEligibilityTask : AMSTask {

	id<AMSBagProtocol> _bag;
	NSString* _countryCode;

}

@property (nonatomic,retain) id<AMSBagProtocol> bag;                     //@synthesize bag=_bag - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode;              //@synthesize countryCode=_countryCode - In the implementation block
-(NSString *)countryCode;
-(id)init;
-(id<AMSBagProtocol>)bag;
-(id)initWithBag:(id)arg1 ;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)initWithBag:(id)arg1 countryCode:(id)arg2 ;
-(id)initWithCountryCode:(id)arg1 ;
-(id)performCanWriteBillingInfoQueryWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
-(unsigned long long)_cardTypeForPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
-(id)_performSilentEnrollmentCheckWithRequest:(id)arg1 ;
-(void)canWriteBillingInfoWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

