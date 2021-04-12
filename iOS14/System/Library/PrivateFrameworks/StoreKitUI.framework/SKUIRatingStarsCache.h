/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

