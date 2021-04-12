/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUArticleDataProviderFactory.h>

@protocol FCContentContext, NUFontRegistration, SXHost, NUEmbedDataManager;
@class NSString;

@interface NUANFArticleDataProviderFactory : NSObject <NUArticleDataProviderFactory> {

	id<FCContentContext> _contentContext;
	id<NUFontRegistration> _fontRegistration;
	id<SXHost> _host;
	id<NUEmbedDataManager> _embedDataManager;

}

@property (nonatomic,readonly) id<FCContentContext> contentContext;                  //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,readonly) id<NUFontRegistration> fontRegistration;              //@synthesize fontRegistration=_fontRegistration - In the implementation block
@property (nonatomic,readonly) id<SXHost> host;                                      //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) id<NUEmbedDataManager> embedDataManager;              //@synthesize embedDataManager=_embedDataManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXHost>)host;
-(id<FCContentContext>)contentContext;
-(id)createArticleDataProviderWithArticle:(id)arg1 ;
-(id<NUFontRegistration>)fontRegistration;
-(id)initWithContentContext:(id)arg1 fontRegistration:(id)arg2 host:(id)arg3 embedDataManager:(id)arg4 ;
-(id<NUEmbedDataManager>)embedDataManager;
@end

