/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@protocol EKEventDetailNotesCellDelegate;
@class UITableViewCell;

@interface EKEventNotesDetailItem : EKEventDetailItem {

	UITableViewCell* _cell;
	UITableViewCell* _moreButtonCell;
	BOOL _cellNeedsUpdate;
	id<EKEventDetailNotesCellDelegate> _noteDelegate;

}

@property (assign,nonatomic,__weak) id<EKEventDetailNotesCellDelegate> noteDelegate;              //@synthesize noteDelegate=_noteDelegate - In the implementation block
-(unsigned long long)numberOfSubitems;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)hasDetailViewControllerAtIndex:(unsigned long long)arg1 ;
-(void)setCellPosition:(int)arg1 ;
-(void)_updateCellIfNeeded;
-(id<EKEventDetailNotesCellDelegate>)noteDelegate;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)reset;
-(void)setNoteDelegate:(id<EKEventDetailNotesCellDelegate>)arg1 ;
-(BOOL)requiresLayoutForSubitemCount;
-(unsigned long long)maximumNumberOfSubItems;
@end

