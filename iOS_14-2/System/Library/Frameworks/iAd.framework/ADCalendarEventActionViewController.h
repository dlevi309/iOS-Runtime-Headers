/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)dismiss;
-(void)clientApplicationDidEnterBackground;
-(void)didSetAdSpace;
-(void)setCalendarEvent:(EKEvent *)arg1 ;
-(void)setEventKitEditViewController:(ADEventEditViewController *)arg1 ;
-(ADEventEditViewController *)eventKitEditViewController;
-(EKEvent *)calendarEvent;
@end

