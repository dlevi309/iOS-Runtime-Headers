/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)updateLocation:(id)arg1 forEvent:(id)arg2 ;
-(id)locationView;
-(void)_locationTapped;
-(id)initWithLocationName:(id)arg1 forEvent:(id)arg2 ;
-(void)updateAttributedString;
-(void)setLocationTitle:(NSString *)arg1 ;
-(NSString *)locationTitle;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(BOOL)hasMapItemLaunchOptionFromTimeToLeaveNotification;
-(void)setHasMapItemLaunchOptionFromTimeToLeaveNotification:(BOOL)arg1 ;
@end

