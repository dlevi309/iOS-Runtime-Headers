/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NFLFeedTileInfo;
@class NSObject;

@interface NFLRankedLayoutRequest : NSObject <NSCopying> {

	BOOL _showAccessoryText;
	NSObject*<NFLFeedTileInfo> _tileInfo;
	unsigned long long _columnSpan;
	long long _cellType;

}

@property (nonatomic,copy,readonly) NSObject*<NFLFeedTileInfo> tileInfo;                          //@synthesize tileInfo=_tileInfo - In the implementation block
@property (nonatomic,readonly) unsigned long long columnSpan;                                     //@synthesize columnSpan=_columnSpan - In the implementation block
@property (nonatomic,readonly) long long cellType;                                                //@synthesize cellType=_cellType - In the implementation block
@property (getter=isShowingAccessoryText,nonatomic,readonly) BOOL showAccessoryText;              //@synthesize showAccessoryText=_showAccessoryText - In the implementation block
+(id)requestWithTileInfo:(id)arg1 columnSpan:(unsigned long long)arg2 cellType:(long long)arg3 showAccessoryText:(BOOL)arg4 ;
+(id)requestsWithTileInfo:(id)arg1 columnSpans:(id)arg2 cellType:(long long)arg3 showAccessoryText:(BOOL)arg4 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)columnSpan;
-(long long)cellType;
-(BOOL)isShowingAccessoryText;
-(NSObject*<NFLFeedTileInfo>)tileInfo;
-(id)initWithTileInfo:(id)arg1 columnSpan:(unsigned long long)arg2 cellType:(long long)arg3 showAccessoryText:(BOOL)arg4 ;
@end

