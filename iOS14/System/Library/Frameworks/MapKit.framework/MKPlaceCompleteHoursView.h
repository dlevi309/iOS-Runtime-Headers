/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MKPlaceHoursViewDelegate.h>

@class GEOLinkedService, NSArray, UIView, UIImageView, _MKUILabel, NSLayoutConstraint, NSString;

@interface MKPlaceCompleteHoursView : UIView <MKPlaceHoursViewDelegate> {

	GEOLinkedService* _linkedService;
	NSArray* _sortedBusinessHours;
	UIView* _containerViewForHoursAndCategoryName;
	UIImageView* _categoryIconView;
	_MKUILabel* _localizedCategoryNameLabel;
	NSLayoutConstraint* _hoursTopLabelBaselineToCategoryName;
	NSArray* _placeHoursViews;

}

@property (nonatomic,retain) NSArray * placeHoursViews;              //@synthesize placeHoursViews=_placeHoursViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setUpConstraints;
-(void)commonInit;
-(id)initWithLinkedService:(id)arg1 showTodaysHoursOnly:(BOOL)arg2 ;
-(NSArray *)placeHoursViews;
-(void)setPlaceHoursViews:(NSArray *)arg1 ;
-(void)_contentSizeDidChange;
-(void)hoursViewDidUpdate:(id)arg1 ;
@end

