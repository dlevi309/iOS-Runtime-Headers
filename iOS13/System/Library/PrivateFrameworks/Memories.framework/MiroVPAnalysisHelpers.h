/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/VEiOSSharedObject.h>

@class NSCache;

@interface MiroVPAnalysisHelpers : VEiOSSharedObject {

	NSCache* _analysisInfos;

}
+(id)sharedHelpers;
+(unsigned long long)_extendedFlagsWithFlags:(unsigned long long)arg1 ;
+(int)_timeInFramesWithDictionaryRepresentation:(id)arg1 naturalFrameRate:(long long)arg2 ;
+(id)_createAnalysisInfoWithVPResultDictionary:(id)arg1 asset:(id)arg2 ;
-(id)init;
-(void)clearCaches;
-(int)fetchAnalysisInfoWithAssets:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)processResults:(id)arg1 forAssets:(id)arg2 intoInfos:(id)arg3 ;
-(int)fetchAnalysisInfoWithAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

