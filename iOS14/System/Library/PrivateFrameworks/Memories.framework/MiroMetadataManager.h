/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)clearStaticCache;
+(void)purgeSharedInstance;
-(void)clearCaches;
-(NSSet *)suggestions;
-(void)setSuggestions:(NSSet *)arg1 ;
-(id)init;
-(void)analyzeLoudnessForRanges:(id)arg1 ofAssets:(id)arg2 ;
-(id)metadataForAssetID:(id)arg1 ;
-(void)setMetadata:(id)arg1 forAssetID:(id)arg2 ;
-(void)analyzeLoudnessForRanges:(id)arg1 ofAssets:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)analyzeAssets:(id)arg1 ranges:(id)arg2 types:(unsigned long long)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)analyzeAsset:(id)arg1 ranges:(id)arg2 types:(unsigned long long)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)analyzeColorForAsset:(id)arg1 ;
-(void)analyzeColorForAsset:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)clipSuggestionRangesForAsset:(id)arg1 ;
@end

