/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <libobjc.A.dylib/NFLFeedTileInfo.h>

@class NSString, NSArray, NFLHeadlineTileInfo;

@interface NFLGapTileInfo : NSObject <NFLFeedTileInfo> {

	NSString* _identifier;
	NSArray* _underlyingFeedElements;
	NSString* _groupIdentifier;

}

@property (nonatomic,copy,readonly) NSString * groupIdentifier;                               //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long tileInfoType; 
@property (nonatomic,copy,readonly) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL pageable; 
@property (getter=isSelectable,nonatomic,readonly) BOOL selectable; 
@property (nonatomic,readonly) unsigned long long bookmarkOffsetType; 
@property (nonatomic,readonly) NSArray * underlyingFeedElements;                              //@synthesize underlyingFeedElements=_underlyingFeedElements - In the implementation block
@property (nonatomic,readonly) NFLHeadlineTileInfo * feedTileInfoForBookmarking; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSString *)groupIdentifier;
-(BOOL)isSelectable;
-(unsigned long long)tileInfoType;
-(id)updatedTileInfoWithNewHeadline:(id)arg1 ;
-(BOOL)pageable;
-(unsigned long long)bookmarkOffsetType;
-(NSArray *)underlyingFeedElements;
-(NFLHeadlineTileInfo *)feedTileInfoForBookmarking;
-(id)initWithIdentifier:(id)arg1 groupIdentifier:(id)arg2 underlyingFeedElements:(id)arg3 ;
-(id)initWithGroupIdentifier:(id)arg1 underlyingFeedElements:(id)arg2 ;
@end

