/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) unsigned long long tileInfoType; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL pageable; 
@property (getter=isSelectable,nonatomic,readonly) BOOL selectable; 
@property (nonatomic,readonly) unsigned long long bookmarkOffsetType; 
@property (nonatomic,readonly) NSArray * underlyingFeedElements; 
@property (nonatomic,readonly) NFLHeadlineTileInfo * feedTileInfoForBookmarking; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifierWithBookmarkableIdentifier:(id)arg1 groupIdentifier:(id)arg2 ;
-(id)updatedTileInfoWithNewHeadline:(id)arg1 ;
-(BOOL)pageable;
-(unsigned long long)bookmarkOffsetType;
-(NFLHeadlineTileInfo *)feedTileInfoForBookmarking;
-(unsigned long long)tileInfoType;
-(id<FCHeadlineProviding>)headline;
-(NSString *)groupIdentifier;
-(id)init;
-(void)setHeadline:(id<FCHeadlineProviding>)arg1 ;
-(BOOL)isSelectable;
-(id)initWithHeadline:(id)arg1 groupIdentifier:(id)arg2 aggregated:(BOOL)arg3 ;
-(NSString *)description;
-(id)initWithHeadline:(id)arg1 groupIdentifier:(id)arg2 ;
-(BOOL)isAggregated;
-(unsigned long long)hash;
-(NSArray *)underlyingFeedElements;
-(NSString *)namespacedIdentifier;
-(void)setNamespacedIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)bookmarkableIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

