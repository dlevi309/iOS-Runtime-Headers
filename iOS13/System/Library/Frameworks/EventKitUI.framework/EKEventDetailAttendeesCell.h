/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)update;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 ;
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
@end

