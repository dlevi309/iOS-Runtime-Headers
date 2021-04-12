/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol;
@class NSString;

@interface AMSCardEnrollmentEligibilityTask : AMSTask <AMSBagConsumer> {

	id<AMSBagProtocol> _bag;
	NSString* _countryCode;

}

@property (nonatomic,retain) id<AMSBagProtocol> bag;                     //@synthesize bag=_bag - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode;              //@synthesize countryCode=_countryCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)_bagKeySet;
-(id)init;
-(NSString *)countryCode;
-(id)initWithBag:(id)arg1 ;
-(id<AMSBagProtocol>)bag;
-(id)performCanWriteBillingInfoQueryWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(unsigned long long)_cardTypeForPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
-(id)_performSilentEnrollmentCheckWithRequest:(id)arg1 ;
-(id)initWithCountryCode:(id)arg1 ;
-(id)initWithBag:(id)arg1 countryCode:(id)arg2 ;
-(void)canWriteBillingInfoWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

