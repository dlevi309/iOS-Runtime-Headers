/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, ICRequestContext;

@interface ICSecureKeyDeliveryRequest : NSObject <NSCopying> {

	BOOL _skippedRentalCheckout;
	BOOL _ITunesStoreRequest;
	BOOL _shouldIncludeDeviceGUID;
	NSURL* _certificateURL;
	NSString* _contentURI;
	NSURL* _keyServerURL;
	long long _leaseActionType;
	ICRequestContext* _requestContext;
	long long _rentalID;
	long long _qualityOfService;
	/*^block*/id _serverPlaybackContextDataCreationHandler;

}

@property (nonatomic,copy) NSURL * certificateURL;                                             //@synthesize certificateURL=_certificateURL - In the implementation block
@property (nonatomic,copy) NSString * contentURI;                                              //@synthesize contentURI=_contentURI - In the implementation block
@property (nonatomic,copy) NSURL * keyServerURL;                                               //@synthesize keyServerURL=_keyServerURL - In the implementation block
@property (assign,nonatomic) long long leaseActionType;                                        //@synthesize leaseActionType=_leaseActionType - In the implementation block
@property (nonatomic,copy) ICRequestContext * requestContext;                                  //@synthesize requestContext=_requestContext - In the implementation block
@property (assign,nonatomic) long long rentalID;                                               //@synthesize rentalID=_rentalID - In the implementation block
@property (assign,nonatomic) BOOL skippedRentalCheckout;                                       //@synthesize skippedRentalCheckout=_skippedRentalCheckout - In the implementation block
@property (assign,getter=isITunesStoreRequest,nonatomic) BOOL ITunesStoreRequest;              //@synthesize ITunesStoreRequest=_ITunesStoreRequest - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                       //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,copy) id serverPlaybackContextDataCreationHandler;                        //@synthesize serverPlaybackContextDataCreationHandler=_serverPlaybackContextDataCreationHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeDeviceGUID;                                     //@synthesize shouldIncludeDeviceGUID=_shouldIncludeDeviceGUID - In the implementation block
-(void)setQualityOfService:(long long)arg1 ;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(id)init;
-(NSString *)contentURI;
-(void)setContentURI:(NSString *)arg1 ;
-(long long)leaseActionType;
-(void)setServerPlaybackContextDataCreationHandler:(id)arg1 ;
-(void)configureUsingAssetResourceLoadingRequest:(id)arg1 ;
-(void)setLeaseActionType:(long long)arg1 ;
-(id)serverPlaybackContextDataCreationHandler;
-(BOOL)shouldIncludeDeviceGUID;
-(void)setShouldIncludeDeviceGUID:(BOOL)arg1 ;
-(void)setITunesStoreRequest:(BOOL)arg1 ;
-(long long)rentalID;
-(ICRequestContext *)requestContext;
-(void)setRentalID:(long long)arg1 ;
-(BOOL)skippedRentalCheckout;
-(NSURL *)certificateURL;
-(void)setCertificateURL:(NSURL *)arg1 ;
-(void)setKeyServerURL:(NSURL *)arg1 ;
-(BOOL)isITunesStoreRequest;
-(void)setSkippedRentalCheckout:(BOOL)arg1 ;
-(long long)qualityOfService;
-(void)setRequestContext:(ICRequestContext *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)keyServerURL;
@end

