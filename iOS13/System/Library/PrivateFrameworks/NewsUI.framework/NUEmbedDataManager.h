/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUEmbedDataManager.h>

@protocol NUEmbedDataManager <NSObject>
@required
-(void)loadEmbedDataWithCompletion:(/*^block*/id)arg1;

@end

#import <libobjc.A.dylib/SXEmbedDataProvider.h>

@protocol NUEmbedConfigurationLoader;
@class SXJSONDictionary, NSString;

@interface NUEmbedDataManager : NSObject <NUEmbedDataManager, SXEmbedDataProvider> {

	id<NUEmbedConfigurationLoader> _embedConfigurationLoader;
	SXJSONDictionary* _embedConfiguration;

}

@property (nonatomic,readonly) id<NUEmbedConfigurationLoader> embedConfigurationLoader;              //@synthesize embedConfigurationLoader=_embedConfigurationLoader - In the implementation block
@property (nonatomic,retain) SXJSONDictionary * embedConfiguration;                                  //@synthesize embedConfiguration=_embedConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NUEmbedConfigurationLoader>)embedConfigurationLoader;
-(SXJSONDictionary *)embedConfiguration;
-(void)loadEmbedDataWithCompletion:(/*^block*/id)arg1 ;
-(id)embedForType:(id)arg1 ;
-(id)initWithEmbedConfigurationLoader:(id)arg1 ;
-(void)setEmbedConfiguration:(SXJSONDictionary *)arg1 ;
@end

