/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@class NSArray, MKPlaceSectionRowView, MKOverallRatingHeaderView, UIStackView, NSString;

@interface MKAppleRatingsViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol> {

	NSArray* _ratingCategories;
	MKPlaceSectionRowView* _containerView;
	MKOverallRatingHeaderView* _overallHeaderView;
	UIStackView* _ratingCategoryStackView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAppleRatings:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
@end

