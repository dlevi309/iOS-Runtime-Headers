/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol;
@class ACAccount, AMSProcessInfo, NSSet, NSString;

@interface AMSDeviceOfferRegistrationTask : AMSTask <AMSBagConsumer> {

	BOOL _lightweightCheckOnly;
	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	AMSProcessInfo* _clientInfo;
	NSSet* _offerIdentifiers;

}

@property (nonatomic,retain) ACAccount * account;                      //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) id<AMSBagProtocol> bag;                   //@synthesize bag=_bag - In the implementation block
@property (assign,nonatomic) BOOL lightweightCheckOnly;                //@synthesize lightweightCheckOnly=_lightweightCheckOnly - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;              //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,retain) NSSet * offerIdentifiers;                 //@synthesize offerIdentifiers=_offerIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id)perform;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)initWithAccount:(id)arg1 bag:(id)arg2 ;
-(void)setLightweightCheckOnly:(BOOL)arg1 ;
-(id)_deviceOffersURL;
-(id)_requestParameters;
-(id)_urlRequestWithBagURL:(id)arg1 ;
-(void)_updateWithDeviceOffers:(id)arg1 ;
-(BOOL)lightweightCheckOnly;
-(NSSet *)offerIdentifiers;
-(id)_bucketedOffers:(id)arg1 ;
-(id)_latestOffersWithFetchedDeviceOffers:(id)arg1 offersStore:(id)arg2 ;
-(id)_urlRequestMethod;
-(void)setOfferIdentifiers:(NSSet *)arg1 ;
@end

