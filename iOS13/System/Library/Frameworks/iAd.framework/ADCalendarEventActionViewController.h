/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <iAd/ADActionViewController.h>
#import <libobjc.A.dylib/EKEventEditViewDelegate.h>

@class EKEvent, ADEventEditViewController, NSString;

@interface ADCalendarEventActionViewController : ADActionViewController <EKEventEditViewDelegate> {

	EKEvent* _calendarEvent;
	ADEventEditViewController* _eventKitEditViewController;

}

@property (nonatomic,retain) EKEvent * calendarEvent;                                             //@synthesize calendarEvent=_calendarEvent - In the implementation block
@property (nonatomic,retain) ADEventEditViewController * eventKitEditViewController;              //@synthesize eventKitEditViewController=_eventKitEditViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismiss;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(void)clientApplicationDidEnterBackground;
-(void)didSetAdSpace;
-(void)setCalendarEvent:(EKEvent *)arg1 ;
-(void)setEventKitEditViewController:(ADEventEditViewController *)arg1 ;
-(ADEventEditViewController *)eventKitEditViewController;
-(EKEvent *)calendarEvent;
@end

