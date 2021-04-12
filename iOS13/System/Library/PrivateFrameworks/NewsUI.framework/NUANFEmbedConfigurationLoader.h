/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXJSONDictionary * embedConfiguration;                                //@synthesize embedConfiguration=_embedConfiguration - In the implementation block
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(FCFlintResourceManager *)flintResourceManager;
-(FCAsyncOnceOperation *)asyncOnceOperation;
-(void)setAsyncOnceOperation:(FCAsyncOnceOperation *)arg1 ;
-(id)loadEmbededConfigurationWithCompletion:(/*^block*/id)arg1 ;
-(SXJSONDictionary *)embedConfiguration;
-(id)asyncLoadEmbedConfigurationOnceWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithAppConfigManager:(id)arg1 flintResourceManager:(id)arg2 ;
-(void)setAppConfigurationManager:(id<FCNewsAppConfigurationManager>)arg1 ;
-(void)setFlintResourceManager:(FCFlintResourceManager *)arg1 ;
@end

