/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


@class NSCache, NSDate;

@interface SearchUICellCache : NSObject {

	NSCache* _cellCache;
	NSDate* _lastCacheClearTime;

}

@property (nonatomic,retain) NSCache * cellCache;                      //@synthesize cellCache=_cellCache - In the implementation block
@property (nonatomic,retain) NSDate * lastCacheClearTime;              //@synthesize lastCacheClearTime=_lastCacheClearTime - In the implementation block
+(id)sharedCache;
-(id)init;
-(void)setCellCache:(NSCache *)arg1 ;
-(void)setLastCacheClearTime:(NSDate *)arg1 ;
-(NSDate *)lastCacheClearTime;
-(NSCache *)cellCache;
-(id)identifierForResults:(id)arg1 ;
-(id)cellViewsForResults:(id)arg1 ;
-(void)setCells:(id)arg1 forResults:(id)arg2 ;
@end

