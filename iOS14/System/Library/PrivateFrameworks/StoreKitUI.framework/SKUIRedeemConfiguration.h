/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class SKUIClientContext, UIImage, SKUIITunesPassConfiguration, NSOperationQueue;

@interface SKUIRedeemConfiguration : NSObject {

	long long _category;
	SKUIClientContext* _clientContext;
	UIImage* _inputImage;
	SKUIITunesPassConfiguration* _itunesPassConfiguration;
	UIImage* _landingImage;
	NSOperationQueue* _operationQueue;
	UIImage* _successImage;

}

@property (nonatomic,readonly) long long category;                                                 //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) SKUIClientContext * clientContext;                                  //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                                  //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) UIImage * inputImage;                                               //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,readonly) UIImage * landingImage;                                             //@synthesize landingImage=_landingImage - In the implementation block
@property (nonatomic,readonly) UIImage * successImage;                                             //@synthesize successImage=_successImage - In the implementation block
@property (nonatomic,readonly) SKUIITunesPassConfiguration * ITunesPassConfiguration;              //@synthesize itunesPassConfiguration=_itunesPassConfiguration - In the implementation block
-(NSOperationQueue *)operationQueue;
-(SKUIClientContext *)clientContext;
-(long long)category;
-(UIImage *)inputImage;
-(id)initWithOperationQueue:(id)arg1 category:(long long)arg2 clientContext:(id)arg3 ;
-(void)loadConfigurationWithCompletionBlock:(/*^block*/id)arg1 ;
-(SKUIITunesPassConfiguration *)ITunesPassConfiguration;
-(UIImage *)landingImage;
-(UIImage *)successImage;
-(void)_loadConfigurationWithURLBagDictionary:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_setLandingImage:(id)arg1 ;
-(void)_setSuccessImage:(id)arg1 ;
-(void)_setInputImage:(id)arg1 ;
-(void)_loadDefaultImages;
-(id)_redeemPreflightRequestBodyData;
-(void)_didLoadWithResponseDictionary:(id)arg1 ;
@end

