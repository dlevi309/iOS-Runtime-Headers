/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDRating, NSString;

@interface GEOAppleRating : NSObject {

	GEOPDRating* _pdRating;

}

@property (nonatomic,readonly) long long ratingType; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) double percentage; 
@property (nonatomic,readonly) double score; 
@property (nonatomic,readonly) double maxScore; 
@property (nonatomic,readonly) int numberOfRatingsUsedForScore; 
@property (nonatomic,readonly) BOOL isRecommended; 
-(NSString *)localizedTitle;
-(double)score;
-(BOOL)isRecommended;
-(double)maxScore;
-(long long)ratingType;
-(id)initWithRating:(id)arg1 ;
-(int)numberOfRatingsUsedForScore;
-(double)percentage;
@end

