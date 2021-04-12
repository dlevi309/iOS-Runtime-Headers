/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUArtworkCellContext.h>

@interface SUItemCellContext : SUArtworkCellContext {

	CFDictionaryRef _cachedRatingImages;
	SCD_Struct_SU7* _stringSizeCacheKeyCallBacks;
	CFDictionaryRef _stringSizes;

}

@property (assign,nonatomic) SCD_Struct_SU7* stringSizeCacheKeyCallBacks;              //@synthesize stringSizeCacheKeyCallBacks=_stringSizeCacheKeyCallBacks - In the implementation block
-(id)init;
-(void)dealloc;
-(void)resetLayoutCaches;
-(id)ratingImageForRating:(float)arg1 style:(long long)arg2 ;
-(CGSize)sizeForString:(id)arg1 font:(id)arg2 constrainedToSize:(CGSize)arg3 ;
-(SCD_Struct_SU7*)stringSizeCacheKeyCallBacks;
-(void)setStringSizeCacheKeyCallBacks:(SCD_Struct_SU7*)arg1 ;
@end

