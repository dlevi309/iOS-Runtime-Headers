/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <libobjc.A.dylib/NFLFeedComponentLayout.h>

@class NFLFeedSettings, NSArray, NSDictionary, NSString;

@interface NFLSubBatchLayout : NSObject <NFLFeedComponentLayout> {

	BOOL _valid;
	NFLFeedSettings* _feedSettings;
	NSArray* _tileInfosUsed;

}

@property (nonatomic,retain) NFLFeedSettings * feedSettings;                          //@synthesize feedSettings=_feedSettings - In the implementation block
@property (nonatomic,copy) NSArray * tileInfosUsed;                                   //@synthesize tileInfosUsed=_tileInfosUsed - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;                             //@synthesize valid=_valid - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * layoutDataByTileInfo; 
@property (nonatomic,readonly) double rank; 
@property (nonatomic,readonly) unsigned long long rowSpan; 
@property (nonatomic,readonly) unsigned long long columnSpan; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)subBatchFromHeadlines:(id)arg1 feedSettings:(id)arg2 ;
-(unsigned long long)columnSpan;
-(NFLFeedSettings *)feedSettings;
-(void)setFeedSettings:(NFLFeedSettings *)arg1 ;
-(id)init;
-(NSArray *)tileInfosUsed;
-(unsigned long long)rowSpan;
-(BOOL)isValid;
-(double)rank;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4 ;
-(id)singleComponentLayouts;
-(id)initWithFeedSettings:(id)arg1 ;
-(id)layoutInfosWithFeedSettings:(id)arg1 ;
-(NSDictionary *)layoutDataByTileInfo;
-(void)setTileInfosUsed:(NSArray *)arg1 ;
@end

