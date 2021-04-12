/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)_invalidateCachedFonts;
+(id)_titleFont;
+(id)_locationFont;
+(id)_largeTitleFont;
+(void)_registerForInvalidation;
-(void)addLocation:(id)arg1 ;
-(double)titleHeight;
-(id)_statusView;
-(void)layoutMarginsDidChange;
-(id)_recurrenceView;
-(void)setShowingInlineDayView:(BOOL)arg1 ;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 style:(long long)arg3 ;
-(NSObject*<EKEventDetailTitleCellDelegate>)delegate;
-(void)eventDetailPredictedLocationCellRejectedPrediction:(id)arg1 ;
-(void)_setDateTimeString:(id)arg1 line:(unsigned long long)arg2 ;
-(double)_layoutForWidth:(double)arg1 ;
-(void)setNumberOfTitleLines:(unsigned long long)arg1 ;
-(void)_promptForSpanWithSourceView:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setTitle:(id)arg1 ;
-(void)setRecurrenceString:(id)arg1 ;
-(void)setLocation:(id)arg1 ;
-(unsigned long long)numberOfTitleLines;
-(void)eventDetailPredictedLocationCellAcceptedPrediction:(id)arg1 disambiguatedLocation:(id)arg2 ;
-(void)setDelegate:(NSObject*<EKEventDetailTitleCellDelegate>)arg1 ;
-(BOOL)update;
-(BOOL)showingInlineDayView;
-(id)_travelTimeView;
-(void)layoutSubviews;
-(BOOL)_useLargeFonts;
-(void)setPrimaryTextColor:(id)arg1 ;
-(void)setColor:(id)arg1 ;
-(void)_updateSeparatorInsets;
-(id)_titleView;
-(id)_editButton;
-(id)_predictedLocationView;
-(void)setTravelTimeString:(id)arg1 ;
-(void)contentSizeCategoryChanged:(id)arg1 ;
-(BOOL)hasMapItemLaunchOptionFromTimeToLeaveNotification;
-(id)_dateTimeViewForLine:(unsigned long long)arg1 ;
-(void)setHasMapItemLaunchOptionFromTimeToLeaveNotification:(BOOL)arg1 ;
-(void)editButtonTapped;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(void)_saveEventWithSpan:(long long)arg1 ;
-(UIView *)sourceViewForPopover;
-(void)setStatusString:(id)arg1 ;
-(void)setHideCellSeparator:(BOOL)arg1 ;
-(void)dealloc;
-(id)initAsRejectionReasonCellWithEvent:(id)arg1 ;
@end

