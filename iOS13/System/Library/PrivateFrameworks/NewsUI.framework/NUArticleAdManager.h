/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUAdContextProvider.h>
#import <libobjc.A.dylib/SXAdControllerDelegate.h>
#import <libobjc.A.dylib/SXAdProvider.h>
#import <libobjc.A.dylib/SXAdControllerFactory.h>

@protocol NUAdProvider, NUAdControllerFactory, NUAdMetadataFactory, NUDevice, NUAdLayoutOptionsFactory, NUAdContextProvider;
@class FCArticle, FCIssue, NSString;

@interface NUArticleAdManager : NSObject <NUAdContextProvider, SXAdControllerDelegate, SXAdProvider, SXAdControllerFactory> {

	FCArticle* _article;
	FCIssue* _issue;
	id<NUAdProvider> _adProvider;
	id<NUAdControllerFactory> _adControllerFactory;
	id<NUAdMetadataFactory> _adMetadataFactory;
	id<NUDevice> _device;
	id<NUAdLayoutOptionsFactory> _layoutOptionsFactory;
	id<NUAdContextProvider> _subscriptionAdContextProvider;

}

@property (nonatomic,readonly) FCArticle * article;                                                //@synthesize article=_article - In the implementation block
@property (nonatomic,readonly) FCIssue * issue;                                                    //@synthesize issue=_issue - In the implementation block
@property (nonatomic,readonly) id<NUAdProvider> adProvider;                                        //@synthesize adProvider=_adProvider - In the implementation block
@property (nonatomic,readonly) id<NUAdControllerFactory> adControllerFactory;                      //@synthesize adControllerFactory=_adControllerFactory - In the implementation block
@property (nonatomic,readonly) id<NUAdMetadataFactory> adMetadataFactory;                          //@synthesize adMetadataFactory=_adMetadataFactory - In the implementation block
@property (nonatomic,readonly) id<NUDevice> device;                                                //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) id<NUAdLayoutOptionsFactory> layoutOptionsFactory;                  //@synthesize layoutOptionsFactory=_layoutOptionsFactory - In the implementation block
@property (nonatomic,readonly) id<NUAdContextProvider> subscriptionAdContextProvider;              //@synthesize subscriptionAdContextProvider=_subscriptionAdContextProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NUDevice>)device;
-(FCArticle *)article;
-(id)adContextValueForKeyPath:(id)arg1 ;
-(id)contextProvidersForKeyPath:(id)arg1 ;
-(id<NUAdProvider>)adProvider;
-(id<NUAdControllerFactory>)adControllerFactory;
-(FCIssue *)issue;
-(id<NUAdLayoutOptionsFactory>)layoutOptionsFactory;
-(id<NUAdContextProvider>)subscriptionAdContextProvider;
-(id<NUAdMetadataFactory>)adMetadataFactory;
-(void)adController:(id)arg1 componentWithIdentifier:(id)arg2 failedToLoadBannerView:(id)arg3 error:(id)arg4 ;
-(void)adController:(id)arg1 componentWithIdentifier:(id)arg2 didLoadBannerView:(id)arg3 ;
-(void)adController:(id)arg1 componentWithIdentifier:(id)arg2 didUnloadBannerView:(id)arg3 withError:(id)arg4 ;
-(/*^block*/id)adForRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)adControllerForDocument:(id)arg1 viewport:(id)arg2 ;
-(id)initWithArticle:(id)arg1 issue:(id)arg2 adProvider:(id)arg3 adControllerFactory:(id)arg4 adMetadataFactory:(id)arg5 device:(id)arg6 layoutOptionsFactory:(id)arg7 subscriptionAdContextProvider:(id)arg8 ;
@end

