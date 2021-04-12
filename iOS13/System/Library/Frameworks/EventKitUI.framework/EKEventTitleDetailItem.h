/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)reset;
-(void)editButtonPressed;
-(double)titleHeight;
-(void)setCellPosition:(int)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(NSDate *)proposedTime;
-(void)setProposedTime:(NSDate *)arg1 ;
-(NSObject*<EKEventTitleDetailItemDelegate>)editDelegate;
-(void)setEditDelegate:(NSObject*<EKEventTitleDetailItemDelegate>)arg1 ;
-(void)_updateCellIfNeededForWidth:(double)arg1 ;
-(unsigned long long)numberOfTitleLines;
-(void)setNumberOfTitleLines:(unsigned long long)arg1 ;
-(BOOL)hidesSeparator;
-(BOOL)hasMapItemLaunchOptionFromTimeToLeaveNotification;
-(void)setHasMapItemLaunchOptionFromTimeToLeaveNotification:(BOOL)arg1 ;
-(BOOL)shouldShowEditButtonInline;
-(BOOL)minimalMode;
-(UIView *)sourceViewForPopover;
-(void)predictionWasActedOn;
-(void)setHidesSeparator:(BOOL)arg1 ;
@end

