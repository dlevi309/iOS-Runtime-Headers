/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionItemView.h>

@class UILabel, GEOAppleRating, NSAttributedString, NSString;

@interface MKOverallRatingHeaderView : MKPlaceSectionItemView {

	UILabel* _overallPercentageLabel;
	UILabel* _thumbsRecommendedLabel;
	UILabel* _numberOfPeopleLabel;
	GEOAppleRating* _overallRating;

}

@property (nonatomic,readonly) NSAttributedString * overallPercentageString; 
@property (nonatomic,readonly) NSString * numberOfPeopleString; 
@property (nonatomic,retain) GEOAppleRating * overallRating;                              //@synthesize overallRating=_overallRating - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(NSAttributedString *)overallPercentageString;
-(id)recommendedString;
-(NSString *)numberOfPeopleString;
-(GEOAppleRating *)overallRating;
-(void)_updateContent;
-(void)_contentSizeDidChange;
-(void)setOverallRating:(GEOAppleRating *)arg1 ;
@end

