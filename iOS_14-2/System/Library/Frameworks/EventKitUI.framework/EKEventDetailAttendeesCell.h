/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKEventDetailCell.h>

@protocol EKEventDetailAttendeeCellDelegate;
@class UILabel, UIImageView, NSLayoutConstraint, EKEventDetailAttendeesListView, NSArray, UIViewController, NSObject;

@interface EKEventDetailAttendeesCell : EKEventDetailCell {

	UILabel* _titleLabel;
	UILabel* _countLabel;
	UIImageView* _disclosure;
	NSLayoutConstraint* _listHeight;
	EKEventDetailAttendeesListView* _attendeesListView;
	NSArray* _cachedAttendeesWithoutOrganizerAndLocations;
	UIViewController* _viewController;
	NSObject*<EKEventDetailAttendeeCellDelegate> _attendeeCellDelegate;

}

@property (__weak) UIViewController * viewController;                                              //@synthesize viewController=_viewController - In the implementation block
@property (__weak) NSObject*<EKEventDetailAttendeeCellDelegate> attendeeCellDelegate;              //@synthesize attendeeCellDelegate=_attendeeCellDelegate - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)setViewController:(UIViewController *)arg1 ;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 ;
-(BOOL)update;
-(UIViewController *)viewController;
-(id)_attendeesListView;
-(double)headerInset;
-(double)listToTitle;
-(double)footerInset;
-(id)_attendeesWithoutOrganizerAndLocations;
-(void)_setAttendees:(id)arg1 ;
-(double)displayHeight;
-(void)_attendeesDidFinishLoadingForTest;
-(NSObject*<EKEventDetailAttendeeCellDelegate>)attendeeCellDelegate;
-(void)setAttendeeCellDelegate:(NSObject*<EKEventDetailAttendeeCellDelegate>)arg1 ;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
@end

