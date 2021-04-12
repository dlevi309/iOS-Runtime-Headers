/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <libobjc.A.dylib/NFLFeedTileInfo.h>

@class NSString, NSArray, NFLHeadlineTileInfo;

@interface NFLAggregateTileInfo : NSObject <NFLFeedTileInfo> {

	NSString* _identifier;
	unsigned long long _tileInfoType;
	NSString* _groupIdentifier;
	long long _groupType;
	NSArray* _underlyingTileInfos;

}

@property (nonatomic,copy,readonly) NSArray * underlyingTileInfos;                            //@synthesize underlyingTileInfos=_underlyingTileInfos - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupIdentifier;                               //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,readonly) long long groupType;                                           //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,readonly) unsigned long long tileInfoType;                               //@synthesize tileInfoType=_tileInfoType - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL pageable; 
@property (getter=isSelectable,nonatomic,readonly) BOOL selectable; 
@property (nonatomic,readonly) unsigned long long bookmarkOffsetType; 
@property (nonatomic,readonly) NSArray * underlyingFeedElements; 
@property (nonatomic,readonly) NFLHeadlineTileInfo * feedTileInfoForBookmarking; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)updatedTileInfoWithNewHeadline:(id)arg1 ;
-(BOOL)pageable;
-(unsigned long long)bookmarkOffsetType;
-(NFLHeadlineTileInfo *)feedTileInfoForBookmarking;
-(unsigned long long)tileInfoType;
-(NSString *)groupIdentifier;
-(id)init;
-(BOOL)isSelectable;
-(long long)groupType;
-(unsigned long long)hash;
-(NSArray *)underlyingFeedElements;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 groupIdentifier:(id)arg2 underlyingTileInfos:(id)arg3 groupType:(long long)arg4 ;
-(NSArray *)underlyingTileInfos;
-(id)underlyingTileInfoForID:(id)arg1 ;
-(id)initWithGroupIdentifier:(id)arg1 underlyingTileInfos:(id)arg2 groupType:(long long)arg3 ;
-(BOOL)underlyingTileInfosContainsTileInfoForID:(id)arg1 ;
@end

