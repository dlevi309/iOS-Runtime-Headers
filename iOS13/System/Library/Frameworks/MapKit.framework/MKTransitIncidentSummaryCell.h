/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKTableViewCell.h>

@class _MKUILabel, UIImageView, NSLayoutConstraint, NSDate, NSString, UIImage;

@interface MKTransitIncidentSummaryCell : MKTableViewCell {

	_MKUILabel* _titleLabel;
	_MKUILabel* _summaryLabel;
	_MKUILabel* _startedLabel;
	UIImageView* _iconImageView;
	NSLayoutConstraint* _titleToTopConstraint;
	NSLayoutConstraint* _summaryToTitleConstraint;
	NSLayoutConstraint* _startedToSummaryConstraint;
	NSDate* _startDate;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * summary; 
@property (nonatomic,retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) UIImage * icon; 
-(void)dealloc;
-(NSDate *)startDate;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(UIImage *)icon;
-(void)didMoveToWindow;
-(void)setIcon:(UIImage *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(NSString *)summary;
-(void)setSummary:(NSString *)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)setConstraints;
-(void)_updateStartLabel;
@end

