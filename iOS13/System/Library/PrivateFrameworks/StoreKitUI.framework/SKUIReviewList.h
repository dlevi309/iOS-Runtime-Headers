/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SKUICacheCoding.h>

@class NSDictionary, NSMutableArray, NSArray, NSURL, NSString, NSMutableDictionary;

@interface SKUIReviewList : NSObject <SKUICacheCoding> {

	NSDictionary* _dictionary;
	NSMutableArray* _reviews;

}

@property (nonatomic,readonly) NSArray * reviews;                                      //@synthesize reviews=_reviews - In the implementation block
@property (nonatomic,readonly) long long numberOfPages; 
@property (nonatomic,readonly) long long ratingCount; 
@property (nonatomic,readonly) float userRating; 
@property (nonatomic,readonly) long long fiveStarRatingCount; 
@property (nonatomic,readonly) long long fourStarRatingCount; 
@property (nonatomic,readonly) long long oneStarRatingCount; 
@property (nonatomic,readonly) long long threeStarRatingCount; 
@property (nonatomic,readonly) long long twoStarRatingCount; 
@property (nonatomic,readonly) NSURL * writeReviewURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
-(long long)numberOfPages;
-(NSArray *)reviews;
-(float)userRating;
-(long long)ratingCount;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSMutableDictionary *)cacheRepresentation;
-(NSURL *)writeReviewURL;
-(id)initWithReviewListDictionary:(id)arg1 ;
-(void)addReviews:(id)arg1 ;
-(long long)fiveStarRatingCount;
-(long long)fourStarRatingCount;
-(long long)oneStarRatingCount;
-(long long)threeStarRatingCount;
-(long long)twoStarRatingCount;
@end

