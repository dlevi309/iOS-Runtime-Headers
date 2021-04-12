/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKEventDetailCell.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/EKEventDetailPredictedLocationCellDelegate.h>

@protocol EKEventDetailTitleCellDelegate;
@class UILabel, NSMutableArray, EKEventDetailPredictedLocationCell, UIButton, NSObject, UIView, NSString;

@interface EKEventDetailTitleCell : EKEventDetailCell <UITextViewDelegate, EKEventDetailPredictedLocationCellDelegate> {

	UILabel* _titleView;
	NSMutableArray* _locationItems;
	EKEventDetailPredictedLocationCell* _predictedLocationView;
	UILabel* _travelTimeView;
	NSMutableArray* _dateTimeViews;
	UILabel* _recurrenceView;
	UILabel* _statusView;
	UIButton* _editButton;
	unsigned _visibleItems;
	BOOL _observingLocaleChanges;
	BOOL _rejectionReasonCell;
	BOOL _hideCellSeparator;
	int _lastPosition;
	BOOL _hasMapItemLaunchOptionFromTimeToLeaveNotification;
	BOOL _showingInlineDayView;
	NSObject*<EKEventDetailTitleCellDelegate> _delegate;
	unsigned long long _numberOfTitleLines;

}

@property (assign,nonatomic,__weak) NSObject*<EKEventDetailTitleCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification;                 //@synthesize hasMapItemLaunchOptionFromTimeToLeaveNotification=_hasMapItemLaunchOptionFromTimeToLeaveNotification - In the implementation block
@property (assign,nonatomic) BOOL showingInlineDayView;                                              //@synthesize showingInlineDayView=_showingInlineDayView - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTitleLines;                                  //@synthesize numberOfTitleLines=_numberOfTitleLines - In the implementation block
@property (nonatomic,readonly) UIView * sourceViewForPopover; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_titleFont;
+(id)_locationFont;
+(void)_invalidateCachedFonts;
+(id)_largeTitleFont;
+(void)_registerForInvalidation;
-(void)dealloc;
-(NSObject*<EKEventDetailTitleCellDelegate>)delegate;
-(void)setDelegate:(NSObject*<EKEventDetailTitleCellDelegate>)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setColor:(id)arg1 ;
-(BOOL)update;
-(void)setLocation:(id)arg1 ;
-(void)layoutSubviews;
-(void)layoutMarginsDidChange;
-(id)_titleView;
-(id)_statusView;
-(void)setStatusString:(id)arg1 ;
-(void)addLocation:(id)arg1 ;
-(id)_editButton;
-(void)setPrimaryTextColor:(id)arg1 ;
-(double)titleHeight;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 style:(long long)arg3 ;
-(double)_layoutForWidth:(double)arg1 ;
-(void)setTravelTimeString:(id)arg1 ;
-(void)setHideCellSeparator:(BOOL)arg1 ;
-(unsigned long long)numberOfTitleLines;
-(void)setNumberOfTitleLines:(unsigned long long)arg1 ;
-(BOOL)hasMapItemLaunchOptionFromTimeToLeaveNotification;
-(void)setHasMapItemLaunchOptionFromTimeToLeaveNotification:(BOOL)arg1 ;
-(UIView *)sourceViewForPopover;
-(void)eventDetailPredictedLocationCellAcceptedPrediction:(id)arg1 disambiguatedLocation:(id)arg2 ;
-(void)eventDetailPredictedLocationCellRejectedPrediction:(id)arg1 ;
-(void)setRecurrenceString:(id)arg1 ;
-(BOOL)_useLargeFonts;
-(id)_dateTimeViewForLine:(unsigned long long)arg1 ;
-(id)_travelTimeView;
-(id)_recurrenceView;
-(id)_predictedLocationView;
-(void)_setDateTimeString:(id)arg1 line:(unsigned long long)arg2 ;
-(void)_updateSeparatorInsets;
-(void)editButtonTapped;
-(void)_saveEventWithSpan:(long long)arg1 ;
-(void)_promptForSpanWithSourceView:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initAsRejectionReasonCellWithEvent:(id)arg1 ;
-(BOOL)showingInlineDayView;
-(void)setShowingInlineDayView:(BOOL)arg1 ;
@end

