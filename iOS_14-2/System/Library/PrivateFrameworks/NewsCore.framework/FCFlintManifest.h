/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, NSArray, FCAssetHandle;

@interface FCFlintManifest : NSObject {

	NSString* _identifier;
	NSArray* _fontResourceIDs;
	FCAssetHandle* _mainDocumentAssetHandle;

}

@property (nonatomic,readonly) FCAssetHandle * mainDocumentAssetHandle;              //@synthesize mainDocumentAssetHandle=_mainDocumentAssetHandle - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * fontResourceIDs;                            //@synthesize fontResourceIDs=_fontResourceIDs - In the implementation block
@property (nonatomic,readonly) NSArray * anfDocumentAssetHandles; 
@property (nonatomic,readonly) BOOL isANFDocumentCached; 
-(id)initWithIdentifier:(id)arg1 mainDocumentAssetHandle:(id)arg2 fontResourceIDs:(id)arg3 ;
-(NSArray *)anfDocumentAssetHandles;
-(FCAssetHandle *)mainDocumentAssetHandle;
-(NSArray *)fontResourceIDs;
-(id)fetchANFDocumentDataProviderWithPriority:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)identifier;
-(BOOL)isANFDocumentCached;
-(id)fetchANFDocumentDataProviderWithCompletion:(/*^block*/id)arg1 ;
@end

