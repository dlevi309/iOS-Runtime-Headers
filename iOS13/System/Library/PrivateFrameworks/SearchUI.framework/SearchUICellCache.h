/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)cellViewsForResults:(id)arg1 ;
-(void)setCells:(id)arg1 forResults:(id)arg2 ;
-(void)setCellCache:(NSCache *)arg1 ;
-(void)setLastCacheClearTime:(NSDate *)arg1 ;
-(NSDate *)lastCacheClearTime;
-(NSCache *)cellCache;
-(id)identifierForResults:(id)arg1 ;
@end

