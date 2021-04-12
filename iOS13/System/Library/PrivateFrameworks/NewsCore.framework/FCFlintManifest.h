/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 mainDocumentAssetHandle:(id)arg2 fontResourceIDs:(id)arg3 ;
-(id)fetchANFDocumentDataProviderWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)anfDocumentAssetHandles;
-(FCAssetHandle *)mainDocumentAssetHandle;
-(id)fetchANFDocumentDataProviderWithPriority:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isANFDocumentCached;
-(NSArray *)fontResourceIDs;
@end

