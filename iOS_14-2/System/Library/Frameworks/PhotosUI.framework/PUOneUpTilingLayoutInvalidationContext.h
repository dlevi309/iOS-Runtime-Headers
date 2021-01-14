/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUTilingLayoutInvalidationContext.h>

@interface PUOneUpTilingLayoutInvalidationContext : PUTilingLayoutInvalidationContext {

	BOOL _invalidatedContentInsets;
	BOOL _invalidatedCommentsTile;
	BOOL _invalidatedAccessoryTile;
	BOOL _invalidatedContentOffset;
	BOOL _invalidatedVideoPlaceholderTile;
	unsigned long long _options;

}

@property (assign,setter=_setInvalidatedContentInsets:,nonatomic) BOOL invalidatedContentInsets;                            //@synthesize invalidatedContentInsets=_invalidatedContentInsets - In the implementation block
@property (assign,setter=_setInvalidatedAccessoryTile:,nonatomic) BOOL invalidatedAccessoryTile;                            //@synthesize invalidatedAccessoryTile=_invalidatedAccessoryTile - In the implementation block
@property (assign,setter=_setInvalidatedContentOffset:,nonatomic) BOOL invalidatedContentOffset;                            //@synthesize invalidatedContentOffset=_invalidatedContentOffset - In the implementation block
@property (assign,setter=_setInvalidatedVideoPlaceholderTile:,nonatomic) BOOL invalidatedVideoPlaceholderTile;              //@synthesize invalidatedVideoPlaceholderTile=_invalidatedVideoPlaceholderTile - In the implementation block
@property (assign,setter=_setOptions:,nonatomic) unsigned long long options;                                                //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL invalidatedCommentsTile;                                                                //@synthesize invalidatedCommentsTile=_invalidatedCommentsTile - In the implementation block
-(void)_setOptions:(unsigned long long)arg1 ;
-(void)_setInvalidatedAccessoryTile:(BOOL)arg1 ;
-(void)_setInvalidatedContentInsets:(BOOL)arg1 ;
-(void)_setInvalidatedContentOffset:(BOOL)arg1 ;
-(BOOL)invalidatedAccessoryTile;
-(unsigned long long)options;
-(void)_setInvalidatedVideoPlaceholderTile:(BOOL)arg1 ;
-(BOOL)invalidatedVideoPlaceholderTile;
-(BOOL)invalidatedContentOffset;
-(BOOL)invalidatedContentInsets;
-(BOOL)invalidatedCommentsTile;
@end

