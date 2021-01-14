/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTTextToSpeechCacheContainer.h>

@class FTTextToSpeechCacheMetaInfo, NSArray;

@interface FTMutableTextToSpeechCacheContainer : FTTextToSpeechCacheContainer

@property (nonatomic,copy) FTTextToSpeechCacheMetaInfo * cache_meta_info; 
@property (nonatomic,copy) NSArray * cache_object; 
-(id)init;
-(FTTextToSpeechCacheMetaInfo *)cache_meta_info;
-(void)setCache_meta_info:(FTTextToSpeechCacheMetaInfo *)arg1 ;
-(NSArray *)cache_object;
-(void)setCache_object:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

