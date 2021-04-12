/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUEmbedDataManager.h>

@protocol NUEmbedDataManager <SXEmbedDataProvider>
@property (nonatomic,readonly) BOOL hasLoaded; 
@required
-(BOOL)hasLoaded;
-(void)loadEmbedDataWithCompletion:(/*^block*/id)arg1;

@end


@protocol NUEmbedConfigurationLoader;
@class SXJSONDictionary, NSString;

@interface NUEmbedDataManager : NSObject <NUEmbedDataManager> {

	BOOL _hasLoaded;
	id<NUEmbedConfigurationLoader> _embedConfigurationLoader;
	SXJSONDictionary* _embedConfiguration;

}

@property (nonatomic,readonly) id<NUEmbedConfigurationLoader> embedConfigurationLoader;              //@synthesize embedConfigurationLoader=_embedConfigurationLoader - In the implementation block
@property (nonatomic,retain) SXJSONDictionary * embedConfiguration;                                  //@synthesize embedConfiguration=_embedConfiguration - In the implementation block
@property (nonatomic,readonly) BOOL hasLoaded;                                                       //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasLoaded;
-(id)embedForType:(id)arg1 ;
-(SXJSONDictionary *)embedConfiguration;
-(void)setEmbedConfiguration:(SXJSONDictionary *)arg1 ;
-(id<NUEmbedConfigurationLoader>)embedConfigurationLoader;
-(void)loadEmbedDataWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithEmbedConfigurationLoader:(id)arg1 ;
@end

