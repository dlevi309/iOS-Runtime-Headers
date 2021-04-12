/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUEmbedConfigurationLoader.h>

@protocol FCNewsAppConfigurationManager;
@class SXJSONDictionary, FCFlintResourceManager, FCAsyncOnceOperation, NSString;

@interface NUANFEmbedConfigurationLoader : NSObject <NUEmbedConfigurationLoader> {

	SXJSONDictionary* _embedConfiguration;
	id<FCNewsAppConfigurationManager> _appConfigurationManager;
	FCFlintResourceManager* _flintResourceManager;
	FCAsyncOnceOperation* _asyncOnceOperation;

}

@property (nonatomic,retain) id<FCNewsAppConfigurationManager> appConfigurationManager;              //@synthesize appConfigurationManager=_appConfigurationManager - In the implementation block
@property (nonatomic,retain) FCFlintResourceManager * flintResourceManager;                          //@synthesize flintResourceManager=_flintResourceManager - In the implementation block
@property (nonatomic,retain) FCAsyncOnceOperation * asyncOnceOperation;                              //@synthesize asyncOnceOperation=_asyncOnceOperation - In the implementation block
@property (nonatomic,readonly) SXJSONDictionary * embedConfiguration;                                //@synthesize embedConfiguration=_embedConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FCFlintResourceManager *)flintResourceManager;
-(void)setAppConfigurationManager:(id<FCNewsAppConfigurationManager>)arg1 ;
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(SXJSONDictionary *)embedConfiguration;
-(FCAsyncOnceOperation *)asyncOnceOperation;
-(void)setAsyncOnceOperation:(FCAsyncOnceOperation *)arg1 ;
-(id)loadEmbededConfigurationWithCompletion:(/*^block*/id)arg1 ;
-(id)asyncLoadEmbedConfigurationOnceWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithAppConfigManager:(id)arg1 flintResourceManager:(id)arg2 ;
-(void)setFlintResourceManager:(FCFlintResourceManager *)arg1 ;
@end

