/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
*/


#import <IMSharedUI/IMSharedUI-Structs.h>
@class NSMutableArray;

@interface IMTranscriptBubbleSizeCache : NSObject {

	NSMutableArray* _sizeCache;

}

@property (retain) NSMutableArray * sizeCache;              //@synthesize sizeCache=_sizeCache - In the implementation block
-(id)init;
-(void)flush;
-(void)setSizeCache:(NSMutableArray *)arg1 ;
-(NSMutableArray *)sizeCache;
-(id)_cacheEntryForMaximumWidth:(double)arg1 getEffectiveIndex:(unsigned long long*)arg2 ;
-(void)_insertCacheEntry:(id)arg1 ;
-(CGSize)sizeForMaximumWidth:(double)arg1 ;
-(void)setSize:(CGSize)arg1 forMaximumWidth:(double)arg2 ;
@end

