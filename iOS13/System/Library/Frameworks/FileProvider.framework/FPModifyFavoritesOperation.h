/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPTransformOperation.h>

@class NSArray;

@interface FPModifyFavoritesOperation : FPTransformOperation {

	NSArray* _ranks;
	BOOL _isUnfavorite;

}
-(id)fp_prettyDescription;
-(id)replicateForItems:(id)arg1 ;
-(unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithItems:(id)arg1 favoriteRanks:(id)arg2 isUnfavorite:(BOOL)arg3 ;
-(id)initWithItemsToFavorite:(id)arg1 favoriteRanks:(id)arg2 ;
-(id)initWithItemsToUnfavorite:(id)arg1 ;
@end

