/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPStoreModelRequest.h>

@class NSURL, MPModelStoreBrowseResponse;

@interface MPModelStoreBrowseRequest : MPStoreModelRequest {

	NSURL* _loadAdditionalContentURL;
	MPModelStoreBrowseResponse* _previousRetrievedNestedResponse;
	long long _domain;
	long long _additionalContent;
	unsigned long long _options;
	long long _filteringPolicy;
	long long _subscriptionStatus;
	MPModelStoreBrowseResponse* _previousResponse;
	long long _requestEndpoint;

}

@property (nonatomic,copy) NSURL * loadAdditionalContentURL;                                            //@synthesize loadAdditionalContentURL=_loadAdditionalContentURL - In the implementation block
@property (nonatomic,retain) MPModelStoreBrowseResponse * previousRetrievedNestedResponse;              //@synthesize previousRetrievedNestedResponse=_previousRetrievedNestedResponse - In the implementation block
@property (assign,nonatomic) long long domain;                                                          //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) long long additionalContent;                                               //@synthesize additionalContent=_additionalContent - In the implementation block
@property (assign,nonatomic) BOOL flattenRadioList; 
@property (assign,nonatomic) unsigned long long options;                                                //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) long long filteringPolicy;                                                 //@synthesize filteringPolicy=_filteringPolicy - In the implementation block
@property (assign,nonatomic) long long subscriptionStatus;                                              //@synthesize subscriptionStatus=_subscriptionStatus - In the implementation block
@property (nonatomic,retain) MPModelStoreBrowseResponse * previousResponse;                             //@synthesize previousResponse=_previousResponse - In the implementation block
@property (assign,nonatomic) long long requestEndpoint;                                                 //@synthesize requestEndpoint=_requestEndpoint - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)allSupportedItemProperties;
+(id)allSupportedSectionProperties;
-(MPModelStoreBrowseResponse *)previousRetrievedNestedResponse;
-(id)init;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAdditionalContent:(long long)arg1 ;
-(unsigned long long)options;
-(void)setDomain:(long long)arg1 ;
-(void)setLoadAdditionalContentURL:(NSURL *)arg1 ;
-(long long)domain;
-(void)setOptions:(unsigned long long)arg1 ;
-(BOOL)flattenRadioList;
-(void)setPreviousResponse:(MPModelStoreBrowseResponse *)arg1 ;
-(void)setRequestEndpoint:(long long)arg1 ;
-(void)setFilteringPolicy:(long long)arg1 ;
-(void)setPreviousRetrievedNestedResponse:(MPModelStoreBrowseResponse *)arg1 ;
-(MPModelStoreBrowseResponse *)previousResponse;
-(id)initWithCoder:(id)arg1 ;
-(long long)filteringPolicy;
-(void)setFlattenRadioList:(BOOL)arg1 ;
-(void)setSubscriptionStatus:(long long)arg1 ;
-(long long)additionalContent;
-(NSURL *)loadAdditionalContentURL;
-(long long)requestEndpoint;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)subscriptionStatus;
-(void)configureWithParentSection:(id)arg1 ;
@end

