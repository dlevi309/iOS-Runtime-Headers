/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKit/UITextViewDelegate.h>

@class EKTextViewWithLabelTextMetrics, NSURL, UITapGestureRecognizer, NSString;

@interface EKEventDetailLocationItem : NSObject <UITextViewDelegate> {

	EKTextViewWithLabelTextMetrics* _locationView;
	NSURL* _locationURL;
	UITapGestureRecognizer* _locationTapRecognizer;
	BOOL _locationIsAttendee;
	long long _locationStatus;
	NSString* _locationComment;
	BOOL _hasMapItemLaunchOptionFromTimeToLeaveNotification;
	NSString* _locationTitle;

}

@property (assign) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification;              //@synthesize hasMapItemLaunchOptionFromTimeToLeaveNotification=_hasMapItemLaunchOptionFromTimeToLeaveNotification - In the implementation block
@property (retain) NSString * locationTitle;                                            //@synthesize locationTitle=_locationTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)textViewDidChangeSelection:(id)arg1 ;
-(BOOL)hasMapItemLaunchOptionFromTimeToLeaveNotification;
-(void)setHasMapItemLaunchOptionFromTimeToLeaveNotification:(BOOL)arg1 ;
-(void)updateLocation:(id)arg1 forEvent:(id)arg2 ;
-(id)locationView;
-(void)_locationTapped;
-(NSString *)locationTitle;
-(void)setLocationTitle:(NSString *)arg1 ;
-(id)initWithLocationName:(id)arg1 forEvent:(id)arg2 ;
@end

