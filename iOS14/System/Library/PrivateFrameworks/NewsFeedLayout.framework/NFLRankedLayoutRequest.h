/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)requestsWithTileInfo:(id)arg1 columnSpans:(id)arg2 cellType:(long long)arg3 showAccessoryText:(BOOL)arg4 ;
+(id)requestWithTileInfo:(id)arg1 columnSpan:(unsigned long long)arg2 cellType:(long long)arg3 showAccessoryText:(BOOL)arg4 ;
-(NSObject*<NFLFeedTileInfo>)tileInfo;
-(unsigned long long)columnSpan;
-(long long)cellType;
-(id)init;
-(BOOL)isShowingAccessoryText;
-(id)description;
-(unsigned long long)hash;
-(id)initWithTileInfo:(id)arg1 columnSpan:(unsigned long long)arg2 cellType:(long long)arg3 showAccessoryText:(BOOL)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

