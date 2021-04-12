/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>
#import <libobjc.A.dylib/EKEventDetailAttendeeCellDelegate.h>

@class NSMutableDictionary, UITableViewCell, EKEventDetailAttendeesCell, NSArray, NSString;

@interface EKEventAttendeesDetailItem : EKEventDetailItem <EKEventDetailAttendeeCellDelegate> {

	NSMutableDictionary* _attendeesCells;
	UITableViewCell* _titleCell;
	EKEventDetailAttendeesCell* _cell;
	long long _status;
	NSArray* _attendees;

}

@property (assign,nonatomic) long long status;                      //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSArray * attendees;                   //@synthesize attendees=_attendees - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)status;
-(void)reset;
-(void)setStatus:(long long)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(BOOL)hasDetailViewControllerAtIndex:(unsigned long long)arg1 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(NSArray *)attendees;
-(void)setAttendees:(NSArray *)arg1 ;
-(void)eventViewController:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(void)eventDetailAttendeeCellWantsRefreshForHeightChange;
@end

