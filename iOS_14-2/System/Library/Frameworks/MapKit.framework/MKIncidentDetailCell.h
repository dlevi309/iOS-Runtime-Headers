/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKTableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@class _MKUILabel, UIImageView, UITextView, NSLayoutConstraint, NSString, UIImage, NSDate;

@interface MKIncidentDetailCell : MKTableViewCell <UITextViewDelegate> {

	_MKUILabel* _titleLabel;
	UIImageView* _iconImageView;
	UITextView* _descriptionLabel;
	_MKUILabel* _lastUpdatedLabel;
	NSLayoutConstraint* _titleFirstBaselineToTopConstraint;
	NSLayoutConstraint* _descriptionLastBaselineToBottomConstraint;
	NSLayoutConstraint* _lastUpdatedFirstBaselineToDescriptionFirstBaselineConstraint;
	NSLayoutConstraint* _lastUpdatedLastBaselineToBottomConstraint;
	NSString* _title;
	UIImage* _icon;
	NSDate* _lastUpdated;

}

@property (nonatomic,copy) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * icon;                            //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * incidentDescription; 
@property (nonatomic,retain) NSDate * lastUpdated;                      //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)lastUpdated;
-(void)_contentSizeCategoryDidChange;
-(void)_setConstraints;
-(UIImage *)icon;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(void)_updateLastUpdatedLabel;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(void)updateConstraints;
-(void)didMoveToWindow;
-(void)infoCardThemeChanged;
-(void)_updateConstraintValues;
-(NSString *)incidentDescription;
-(void)setIncidentDescription:(NSString *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(NSString *)title;
-(void)dealloc;
@end

