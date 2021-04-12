/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionItemView.h>

@class MKBarView, _MKUILabel, UIView, NSArray, NSString;

@interface MKRatingPlatterView : MKPlaceSectionItemView {

	MKBarView* _ratingCategoryBarView;
	_MKUILabel* _categoryLabel;
	UIView* _containerView;
	NSArray* _constraints;
	double _score;
	double _scale;

}

@property (nonatomic,copy) NSString * categoryName; 
@property (assign,nonatomic) double score;                       //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) double scale;                       //@synthesize scale=_scale - In the implementation block
-(void)_setupConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)score;
-(double)scale;
-(void)setScore:(double)arg1 ;
-(void)_setupInitialAppearance;
-(void)_setupSubviews;
-(void)_updateAppearance;
-(void)setScale:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)categoryName;
-(void)setCategoryName:(NSString *)arg1 ;
-(void)_contentSizeChanged;
@end

