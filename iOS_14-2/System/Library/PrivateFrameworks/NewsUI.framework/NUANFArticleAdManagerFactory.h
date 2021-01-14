/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUArticleAdManagerFactory.h>

@protocol NUAdProvider, NUAdMetadataFactory, NUAdControllerFactory, NUDevice, NUAdLayoutOptionsFactory, NUAdContextProvider;
@class NSString;

@interface NUANFArticleAdManagerFactory : NSObject <NUArticleAdManagerFactory> {

	id<NUAdProvider> _adProvider;
	id<NUAdMetadataFactory> _adMetadataFactory;
	id<NUAdControllerFactory> _adControllerFactory;
	id<NUDevice> _device;
	id<NUAdLayoutOptionsFactory> _layoutOptionsFactory;
	id<NUAdContextProvider> _subscriptionAdContextProvider;

}

@property (nonatomic,readonly) id<NUAdProvider> adProvider;                                        //@synthesize adProvider=_adProvider - In the implementation block
@property (nonatomic,readonly) id<NUAdMetadataFactory> adMetadataFactory;                          //@synthesize adMetadataFactory=_adMetadataFactory - In the implementation block
@property (nonatomic,readonly) id<NUAdControllerFactory> adControllerFactory;                      //@synthesize adControllerFactory=_adControllerFactory - In the implementation block
@property (nonatomic,readonly) id<NUDevice> device;                                                //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) id<NUAdLayoutOptionsFactory> layoutOptionsFactory;                  //@synthesize layoutOptionsFactory=_layoutOptionsFactory - In the implementation block
@property (nonatomic,readonly) id<NUAdContextProvider> subscriptionAdContextProvider;              //@synthesize subscriptionAdContextProvider=_subscriptionAdContextProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NUDevice>)device;
-(id<NUAdLayoutOptionsFactory>)layoutOptionsFactory;
-(id<NUAdProvider>)adProvider;
-(id)createArticleAdManagerForArticle:(id)arg1 issue:(id)arg2 ;
-(id)initWithAdProvider:(id)arg1 adMetadataFactory:(id)arg2 adControllerFactory:(id)arg3 device:(id)arg4 layoutOptionsFactory:(id)arg5 subscriptionAdContextProvider:(id)arg6 ;
-(id<NUAdControllerFactory>)adControllerFactory;
-(id<NUAdContextProvider>)subscriptionAdContextProvider;
-(id<NUAdMetadataFactory>)adMetadataFactory;
@end

