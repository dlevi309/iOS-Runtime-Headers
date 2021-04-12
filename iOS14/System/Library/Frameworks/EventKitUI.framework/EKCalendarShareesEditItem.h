/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKCalendarEditItem.h>
#import <libobjc.A.dylib/EKShareeViewControllerDelegate.h>
#import <libobjc.A.dylib/EKShareePickerViewControllerDelegate.h>

@class NSMutableArray, UITableViewHeaderFooterView, UILabel, NSString;

@interface EKCalendarShareesEditItem : EKCalendarEditItem <EKShareeViewControllerDelegate, EKShareePickerViewControllerDelegate> {

	NSMutableArray* _shareeCells;
	UITableViewHeaderFooterView* _footerView;
	UILabel* _descriptionLabel;

}

@property (nonatomic,retain) NSMutableArray * shareeCells;              //@synthesize shareeCells=_shareeCells - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)numberOfSubitems;
-(id)footerView;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)headerTitle;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(id)_shareeCellForName:(id)arg1 detailText:(id)arg2 additionalDetailText:(id)arg3 ;
-(id)_stringForShareeStatus:(unsigned long long)arg1 ;
-(id)_stringForShareeAccessLevel:(unsigned long long)arg1 ;
-(NSMutableArray *)shareeCells;
-(id)_addPersonCell;
-(void)_dismissShareePicker;
-(void)_popBackToCalendarEditor:(BOOL)arg1 ;
-(void)shareeViewControllerDidChangeAccessLevel:(id)arg1 ;
-(void)layoutForWidth:(double)arg1 ;
-(void)_applyStyleToUILabel:(id)arg1 ;
-(id)footerViewForSection;
-(double)footerHeightForSection;
-(BOOL)saveStateToCalendar:(id)arg1 ;
-(void)shareeViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(void)shareePickerViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(id)eventStoreForShareePickerViewController:(id)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 ;
-(void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(void)setShareeCells:(NSMutableArray *)arg1 ;
-(void)reset;
@end

