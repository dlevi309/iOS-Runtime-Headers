/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSMutableDictionary, UIImage;

@interface SKUIRatingStarsCache : NSObject {

	NSMutableDictionary* _cachedImages;
	UIImage* _emptyStarImage;
	UIImage* _filledStarImage;
	UIImage* _halfStarImage;

}
+(id)cacheWithProperties:(long long)arg1 ;
-(id)initWithProperties:(long long)arg1 ;
-(id)ratingStarsImageForRating:(double)arg1 ;
@end

