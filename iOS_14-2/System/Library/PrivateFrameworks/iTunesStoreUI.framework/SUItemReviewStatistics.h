/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SUItemReviewStatistics : NSObject <NSCopying> {

	float _averageUserRating;
	long long _numberOfUserRatings;
	NSString* _numberOfUserRatingsString;
	long long _numberOfUserReviews;
	NSString* _numberOfUserReviewsString;

}

@property (assign,nonatomic) float averageUserRating;                         //@synthesize averageUserRating=_averageUserRating - In the implementation block
@property (assign,nonatomic) long long numberOfUserRatings;                   //@synthesize numberOfUserRatings=_numberOfUserRatings - In the implementation block
@property (nonatomic,copy) NSString * numberOfUserRatingsString;              //@synthesize numberOfUserRatingsString=_numberOfUserRatingsString - In the implementation block
@property (assign,nonatomic) long long numberOfUserReviews;                   //@synthesize numberOfUserReviews=_numberOfUserReviews - In the implementation block
@property (nonatomic,copy) NSString * numberOfUserReviewsString;              //@synthesize numberOfUserReviewsString=_numberOfUserReviewsString - In the implementation block
-(long long)numberOfUserRatings;
-(id)initWithDictionary:(id)arg1 ;
-(float)averageUserRating;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setAverageUserRating:(float)arg1 ;
-(void)setNumberOfUserRatings:(long long)arg1 ;
-(NSString *)numberOfUserRatingsString;
-(void)setNumberOfUserRatingsString:(NSString *)arg1 ;
-(long long)numberOfUserReviews;
-(void)setNumberOfUserReviews:(long long)arg1 ;
-(NSString *)numberOfUserReviewsString;
-(void)setNumberOfUserReviewsString:(NSString *)arg1 ;
@end

