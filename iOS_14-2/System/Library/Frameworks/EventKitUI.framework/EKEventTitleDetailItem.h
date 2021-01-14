/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKEventDetailItem.h>
#import <libobjc.A.dylib/EKEventDetailTitleCellDelegate.h>

@protocol EKEventTitleDetailItemDelegate;
@class EKEventDetailTitleCell, UIColor, NSDate, NSObject, UIView;

@interface EKEventTitleDetailItem : EKEventDetailItem <EKEventDetailTitleCellDelegate> {

	EKEventDetailTitleCell* _cell;
	UIColor* _color;
	BOOL _showDot;
	BOOL _cellNeedsUpdate;
	BOOL _hidesSeparator;
	BOOL _hasMapItemLaunchOptionFromTimeToLeaveNotification;
	NSDate* _proposedTime;
	NSObject*<EKEventTitleDetailItemDelegate> _editDelegate;
	unsigned long long _numberOfTitleLines;

}

@property (assign,nonatomic) BOOL hidesSeparator;                                                        //@synthesize hidesSeparator=_hidesSeparator - In the implementation block
@property (nonatomic,retain) NSDate * proposedTime;                                                      //@synthesize proposedTime=_proposedTime - In the implementation block
@property (nonatomic,readonly) UIView * sourceViewForPopover; 
@property (assign,nonatomic,__weak) NSObject*<EKEventTitleDetailItemDelegate> editDelegate;              //@synthesize editDelegate=_editDelegate - In the implementation block
@property (assign,nonatomic) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification;                     //@synthesize hasMapItemLaunchOptionFromTimeToLeaveNotification=_hasMapItemLaunchOptionFromTimeToLeaveNotification - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTitleLines;                                      //@synthesize numberOfTitleLines=_numberOfTitleLines - In the implementation block
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(double)titleHeight;
-(void)editButtonPressed;
-(NSObject*<EKEventTitleDetailItemDelegate>)editDelegate;
-(void)predictionWasActedOn;
-(void)setEditDelegate:(NSObject*<EKEventTitleDetailItemDelegate>)arg1 ;
-(void)_updateCellIfNeededForWidth:(double)arg1 ;
-(void)setCellPosition:(int)arg1 ;
-(void)setNumberOfTitleLines:(unsigned long long)arg1 ;
-(NSDate *)proposedTime;
-(BOOL)minimalMode;
-(BOOL)shouldShowEditButtonInline;
-(void)setProposedTime:(NSDate *)arg1 ;
-(void)setHidesSeparator:(BOOL)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(unsigned long long)numberOfTitleLines;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)reset;
-(BOOL)hasMapItemLaunchOptionFromTimeToLeaveNotification;
-(void)setHasMapItemLaunchOptionFromTimeToLeaveNotification:(BOOL)arg1 ;
-(UIView *)sourceViewForPopover;
-(void)refreshCopiedEvents;
-(BOOL)hidesSeparator;
@end

