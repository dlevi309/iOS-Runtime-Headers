/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKCalendarEditItem.h>
#import <libobjc.A.dylib/CalendarPublishingActivityDelegate.h>

@class UITableViewHeaderFooterView, UIActivityIndicatorView, UIView, NSString;

@interface EKCalendarPublishingEditItem : EKCalendarEditItem <CalendarPublishingActivityDelegate> {

	BOOL _published;
	UITableViewHeaderFooterView* _footerView;
	UIActivityIndicatorView* _spinner;

}

@property (assign,nonatomic) BOOL published;                        //@synthesize published=_published - In the implementation block
@property (nonatomic,readonly) UIView * footerView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)numberOfSubitems;
-(UIView *)footerView;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)pubishURL;
-(void)setPublished:(BOOL)arg1 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)published;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(void)_applyStyleToUILabel:(id)arg1 ;
-(id)footerViewForSection;
-(double)footerHeightForSection;
-(id)calendarTitle;
-(void)_publishChanged:(id)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 ;
-(void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(void)reset;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
@end

