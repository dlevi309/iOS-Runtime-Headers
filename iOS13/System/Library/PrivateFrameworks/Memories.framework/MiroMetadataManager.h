/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/VEiOSSharedObject.h>

@class NSCache, NSSet;

@interface MiroMetadataManager : VEiOSSharedObject {

	NSCache* _assetMetadataCache;
	NSSet* _suggestions;

}

@property (assign,nonatomic,__weak) NSSet * suggestions;              //@synthesize suggestions=_suggestions - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)clearCaches;
-(NSSet *)suggestions;
-(void)setSuggestions:(NSSet *)arg1 ;
-(void)analyzeLoudnessForRanges:(id)arg1 ofAssets:(id)arg2 ;
-(id)metadataForAssetID:(id)arg1 ;
-(void)setMetadata:(id)arg1 forAssetID:(id)arg2 ;
-(void)analyzeLoudnessForRanges:(id)arg1 ofAssets:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)analyzeAssets:(id)arg1 ranges:(id)arg2 types:(unsigned long long)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)analyzeAsset:(id)arg1 ranges:(id)arg2 types:(unsigned long long)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)analyzeColorForAsset:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)clipSuggestionRangesForAsset:(id)arg1 ;
-(id)analyzeColorForAsset:(id)arg1 ;
@end

