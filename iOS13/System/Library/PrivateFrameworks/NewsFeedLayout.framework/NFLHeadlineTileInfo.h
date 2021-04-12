/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <libobjc.A.dylib/NFLFeedTileInfo.h>

@protocol FCHeadlineProviding;
@class NSString, NSArray;

@interface NFLHeadlineTileInfo : NSObject <NFLFeedTileInfo> {

	BOOL _aggregated;
	NSString* _groupIdentifier;
	id<FCHeadlineProviding> _headline;
	NSString* _bookmarkableIdentifier;
	NSString* _namespacedIdentifier;

}

@property (nonatomic,copy) id<FCHeadlineProviding> headline;                                  //@synthesize headline=_headline - In the implementation block
@property (nonatomic,copy) NSString * namespacedIdentifier;                                   //@synthesize namespacedIdentifier=_namespacedIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupIdentifier;                               //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * bookmarkableIdentifier;                        //@synthesize bookmarkableIdentifier=_bookmarkableIdentifier - In the implementation block
@property (getter=isAggregated,nonatomic,readonly) BOOL aggregated;                           //@synthesize aggregated=_aggregated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long tileInfoType; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL pageable; 
@property (getter=isSelectable,nonatomic,readonly) BOOL selectable; 
@property (nonatomic,readonly) unsigned long long bookmarkOffsetType; 
@property (nonatomic,readonly) NSArray * underlyingFeedElements; 
@property (nonatomic,readonly) NFLHeadlineTileInfo * feedTileInfoForBookmarking; 
+(id)identifierWithBookmarkableIdentifier:(id)arg1 groupIdentifier:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSString *)groupIdentifier;
-(BOOL)isSelectable;
-(void)setHeadline:(id<FCHeadlineProviding>)arg1 ;
-(id<FCHeadlineProviding>)headline;
-(unsigned long long)tileInfoType;
-(id)updatedTileInfoWithNewHeadline:(id)arg1 ;
-(BOOL)pageable;
-(unsigned long long)bookmarkOffsetType;
-(NSArray *)underlyingFeedElements;
-(NFLHeadlineTileInfo *)feedTileInfoForBookmarking;
-(id)initWithHeadline:(id)arg1 groupIdentifier:(id)arg2 aggregated:(BOOL)arg3 ;
-(BOOL)isAggregated;
-(NSString *)namespacedIdentifier;
-(id)initWithHeadline:(id)arg1 groupIdentifier:(id)arg2 ;
-(NSString *)bookmarkableIdentifier;
-(void)setNamespacedIdentifier:(NSString *)arg1 ;
@end

