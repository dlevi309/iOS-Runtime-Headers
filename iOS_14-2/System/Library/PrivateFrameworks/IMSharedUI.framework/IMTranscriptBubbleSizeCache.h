/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
*/


#import <IMSharedUI/IMSharedUI-Structs.h>
@class NSMutableArray;

@interface IMTranscriptBubbleSizeCache : NSObject {

	NSMutableArray* _sizeCache;

}

@property (retain) NSMutableArray * sizeCache;              //@synthesize sizeCache=_sizeCache - In the implementation block
-(void)flush;
-(id)init;
-(NSMutableArray *)sizeCache;
-(void)setSizeCache:(NSMutableArray *)arg1 ;
-(id)_cacheEntryForMaximumWidth:(double)arg1 getEffectiveIndex:(unsigned long long*)arg2 ;
-(void)_insertCacheEntry:(id)arg1 ;
-(CGSize)sizeForMaximumWidth:(double)arg1 ;
-(void)setSize:(CGSize)arg1 forMaximumWidth:(double)arg2 ;
@end

