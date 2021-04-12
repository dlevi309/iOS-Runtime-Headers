/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) unsigned long long tileInfoType; 
@property (nonatomic,copy,readonly) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL pageable; 
@property (getter=isSelectable,nonatomic,readonly) BOOL selectable; 
@property (nonatomic,readonly) unsigned long long bookmarkOffsetType; 
@property (nonatomic,readonly) NSArray * underlyingFeedElements;                              //@synthesize underlyingFeedElements=_underlyingFeedElements - In the implementation block
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
-(id)initWithIdentifier:(id)arg1 groupIdentifier:(id)arg2 underlyingFeedElements:(id)arg3 ;
-(NSString *)groupIdentifier;
-(BOOL)isSelectable;
-(id)initWithGroupIdentifier:(id)arg1 underlyingFeedElements:(id)arg2 ;
-(unsigned long long)hash;
-(NSArray *)underlyingFeedElements;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

