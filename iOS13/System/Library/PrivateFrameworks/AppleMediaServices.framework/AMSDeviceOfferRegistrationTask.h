/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)perform;
-(AMSProcessInfo *)clientInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(id)initWithAccount:(id)arg1 bag:(id)arg2 ;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(void)setLightweightCheckOnly:(BOOL)arg1 ;
-(id)_deviceOffersURL;
-(BOOL)lightweightCheckOnly;
-(id)_requestParameters;
-(void)_updateWithDeviceOffers:(id)arg1 ;
-(NSSet *)offerIdentifiers;
-(id)_bucketedOffers:(id)arg1 ;
-(id)_latestOffersWithFetchedDeviceOffers:(id)arg1 offersStore:(id)arg2 ;
-(void)setOfferIdentifiers:(NSSet *)arg1 ;
@end

