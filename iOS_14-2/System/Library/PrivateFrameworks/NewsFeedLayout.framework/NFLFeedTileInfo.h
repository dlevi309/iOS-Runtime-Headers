/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

@class NSString, NSArray, NFLHeadlineTileInfo;


@protocol NFLFeedTileInfo <NSObject,NFCopying>
@property (nonatomic,readonly) unsigned long long tileInfoType; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL pageable; 
@property (getter=isSelectable,nonatomic,readonly) BOOL selectable; 
@property (nonatomic,readonly) unsigned long long bookmarkOffsetType; 
@property (nonatomic,readonly) NSArray * underlyingFeedElements; 
@property (nonatomic,readonly) NFLHeadlineTileInfo * feedTileInfoForBookmarking; 
@property (nonatomic,copy,readonly) NSString * groupIdentifier; 
@required
-(id)updatedTileInfoWithNewHeadline:(id)arg1;
-(BOOL)pageable;
-(unsigned long long)bookmarkOffsetType;
-(NFLHeadlineTileInfo *)feedTileInfoForBookmarking;
-(unsigned long long)tileInfoType;
-(NSString *)groupIdentifier;
-(BOOL)isSelectable;
-(NSArray *)underlyingFeedElements;
-(NSString *)identifier;

@end

