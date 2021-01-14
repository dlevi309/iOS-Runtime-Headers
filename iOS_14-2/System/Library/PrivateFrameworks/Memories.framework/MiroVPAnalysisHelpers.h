/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/VEiOSSharedObject.h>

@class NSCache;

@interface MiroVPAnalysisHelpers : VEiOSSharedObject {

	NSCache* _analysisInfos;

}
+(void)clearStaticCache;
+(id)sharedHelpers;
+(void)purgeSharedInstance;
+(unsigned long long)_extendedFlagsWithFlags:(unsigned long long)arg1 ;
+(int)_timeInFramesWithDictionaryRepresentation:(id)arg1 naturalFrameRate:(long long)arg2 ;
+(id)_createAnalysisInfoWithVPResultDictionary:(id)arg1 asset:(id)arg2 ;
-(void)clearCaches;
-(id)init;
-(int)fetchAnalysisInfoWithAssets:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)processResults:(id)arg1 forAssets:(id)arg2 intoInfos:(id)arg3 ;
-(int)fetchAnalysisInfoWithAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

