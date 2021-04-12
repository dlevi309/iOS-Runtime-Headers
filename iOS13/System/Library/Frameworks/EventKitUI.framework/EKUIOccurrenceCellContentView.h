/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKUICellContentViewWithPrimaryAndSecondaryFonts.h>

@protocol OS_dispatch_source;
@class EKUIOccurrenceCellLabel, EKUICellColorBarView, UIImageView, NSArray, NSMutableArray, NSLayoutConstraint, UIColor, NSDate, EKCalendarDate, NSString, NSDictionary, NSObject, UIView, UIVisualEffect;

@interface EKUIOccurrenceCellContentView : EKUICellContentViewWithPrimaryAndSecondaryFonts {

	EKUIOccurrenceCellLabel* _travelTextLabel;
	EKUIOccurrenceCellLabel* _primaryLabel;
	EKUIOccurrenceCellLabel* _secondaryLabel;
	EKUIOccurrenceCellLabel* _travelDepartureTimeLabel;
	EKUIOccurrenceCellLabel* _topTimeLabel;
	EKUIOccurrenceCellLabel* _bottomTimeLabel;
	EKUIOccurrenceCellLabel* _countdownLabel;
	EKUICellColorBarView* _colorBarView;
	EKUICellColorBarView* _travelTimeColorBarView;
	UIImageView* _angleStripeBackgroundView;
	UIImageView* _accessoryImageView;
	NSArray* _ekUIOccurrenceCellConstraints;
	NSMutableArray* _primaryVisualEffectViews;
	NSMutableArray* _secondaryVisualEffectViews;
	BOOL _travelTimeTemplate;
	BOOL _invitationTemplate;
	NSLayoutConstraint* _contentTop_to_travelTextBaseline_Constraint;
	NSLayoutConstraint* _contentTop_to_primaryTextBaseline_Constraint;
	NSLayoutConstraint* _contentBottom_to_secondaryTextBaseline_Constraint;
	NSLayoutConstraint* _primaryTextBaseline_to_secondaryTextBaseline_Constraint;
	NSLayoutConstraint* _travelTextBaseline_to_primaryTextBaseLine_Constraint;
	NSLayoutConstraint* _horizontalDividerBarBottom_to_colorBarTop_Constraint;
	NSLayoutConstraint* _contentTop_to_colorBarTop_Constraint;
	NSLayoutConstraint* _timeTextWidthConstraint;
	NSLayoutConstraint* _timeTextLeftMarginConstraint;
	NSLayoutConstraint* _timeTextRightMarginConstraint;
	NSLayoutConstraint* _countdownLabelRightMarginConstraint;
	NSLayoutConstraint* _countdownLabelBaseling_to_contentBottom_Constraint;
	double _travelTime;
	UIColor* _eventCalendarColor;
	UIColor* _selectedBackGroundColor;
	NSDate* _eventStartDateIncludingTravelTime;
	EKCalendarDate* _eventStartDate;
	EKCalendarDate* _eventEndDate;
	NSString* _eventTitle;
	NSString* _eventLocation;
	NSString* _topTimeString;
	NSString* _bottomTimeString;
	NSString* _countdownLabelString;
	NSString* _travelTextLabelString;
	NSString* _travelAddressString;
	NSString* _travelDepartureTimeString;
	NSDictionary* _secondaryStringDrawingAttributes;
	NSDictionary* _topTimeStringDrawingAttributes;
	NSDictionary* _bottomTimeStringDrawingAttributes;
	NSDictionary* _travelTextLabelStringDrawingAttributes;
	NSDictionary* _travelAddressStringDrawingAttributes;
	NSDictionary* _travelDepartureTimeStringDrawingAttributes;
	BOOL _isPast;
	BOOL _isAllDay;
	BOOL _isRecurring;
	BOOL _isBirthday;
	BOOL _tentative;
	BOOL _declined;
	BOOL _needsReply;
	BOOL _cancelled;
	BOOL _opaque;
	NSObject*<OS_dispatch_source> _countdownLabelUpdateTimer;
	BOOL _selected;
	BOOL _doesNotUseTemplate;
	BOOL _isTemplateCell;
	BOOL _isFakeInvitation;
	UIColor* _selectionTintColor;
	UIView* _selectedBackgroundView;
	UIVisualEffect* _primaryVisualEffect;
	UIVisualEffect* _secondaryVisualEffect;

}

@property (nonatomic,retain) UIColor * selectionTintColor;                        //@synthesize selectionTintColor=_selectionTintColor - In the implementation block
@property (nonatomic,retain) UIView * selectedBackgroundView;                     //@synthesize selectedBackgroundView=_selectedBackgroundView - In the implementation block
@property (assign,nonatomic) BOOL selected;                                       //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL doesNotUseTemplate;                             //@synthesize doesNotUseTemplate=_doesNotUseTemplate - In the implementation block
@property (assign,nonatomic) BOOL isTemplateCell;                                 //@synthesize isTemplateCell=_isTemplateCell - In the implementation block
@property (assign,nonatomic) BOOL isFakeInvitation;                               //@synthesize isFakeInvitation=_isFakeInvitation - In the implementation block
@property (nonatomic,retain) UIVisualEffect * primaryVisualEffect;                //@synthesize primaryVisualEffect=_primaryVisualEffect - In the implementation block
@property (nonatomic,retain) UIVisualEffect * secondaryVisualEffect;              //@synthesize secondaryVisualEffect=_secondaryVisualEffect - In the implementation block
+(void)initialize;
+(BOOL)requiresConstraintBasedLayout;
+(id)normalBackgroundColor;
+(void)_clearCaches;
+(id)needsReplyStripeColor;
+(double)needsReplyStripeBackgroundAlpha;
+(id)tentativeStripeColor;
+(double)tentativeStripeBackgroundAlpha;
+(id)cancelledDeclinedColorBarColor;
+(BOOL)vibrant;
+(id)_allDayLocalizedString;
+(double)_rightImageSpacing;
+(id)_needsReplyAngledStripeBackground;
+(id)_tentativeAngledStripeBackground;
+(double)cellHeightForWidth:(double)arg1 ;
+(id)_nowLocalizedString;
-(void)dealloc;
-(BOOL)isCancelled;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)imageView;
-(void)updateConstraints;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)setSelectionTintColor:(UIColor *)arg1 ;
-(UIColor *)selectionTintColor;
-(id)textLabel;
-(void)setSelectedBackgroundView:(UIView *)arg1 ;
-(UIView *)selectedBackgroundView;
-(id)detailTextLabel;
-(id)normalBackgroundColor;
-(void)_updateAccessoryImage;
-(id)accessoryImage;
-(BOOL)isAllDay;
-(id)primaryTextColor;
-(id)secondaryTextColor;
-(void)_setUpConstraints;
-(void)_createViews;
-(id)needsReplyStripeColor;
-(double)needsReplyStripeBackgroundAlpha;
-(id)tentativeStripeColor;
-(double)tentativeStripeBackgroundAlpha;
-(id)cancelledDeclinedColorBarColor;
-(id)invitationPrimaryTextColor;
-(void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 opaque:(BOOL)arg4 drawsDimmedForPast:(BOOL)arg5 ;
-(void)_updateContentForSizeCategoryChange:(id)arg1 ;
-(double)_verticalSpacingTopToBaselineForTopLabel;
-(double)_verticalSpacingTopToBaselineForBottomLabel;
-(double)_verticalSpacingBottomToBaselineForBottomLabel;
-(id)prefixTextColor;
-(id)primaryStrikethroughTextColor;
-(id)primaryPastTextColor;
-(id)secondaryStrikethroughTextColor;
-(id)secondaryPastTextColor;
-(void)setCalendarColor:(id)arg1 ;
-(BOOL)isDeclined;
-(BOOL)isTentative;
-(BOOL)needsReply;
-(BOOL)isBirthday;
-(id)colorBarColor;
-(void)setDoesNotUseTemplate:(BOOL)arg1 ;
-(void)_uninstallCountdownTimer;
-(void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 opaque:(BOOL)arg4 drawsDimmedForPast:(BOOL)arg5 includingTravelTime:(BOOL)arg6 ;
-(void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 opaque:(BOOL)arg4 drawsDimmedForPast:(BOOL)arg5 includingTravelTime:(BOOL)arg6 includingCountdown:(BOOL)arg7 ;
-(void)_updateSecondaryTextLabel;
-(void)_updateTravelTimeLabel;
-(BOOL)doesNotUseTemplate;
-(BOOL)isTemplateCell;
-(BOOL)isFakeInvitation;
-(void)forceUpdateOfAllElements;
-(void)_updatePrimaryTextLabel;
-(void)_updateCountdownLabel;
-(void)_updateTopTimeLabel;
-(void)_updateBottomTimeLabel;
-(void)_updateTravelDepartureTimeLabel;
-(void)_updateColorBarColor;
-(void)_updateAngleBackgroundColor;
-(id)_birthdayIcon;
-(id)_needsReplyDot;
-(void)contentCategorySizeChanged;
-(void)_addVibrantSubview:(id)arg1 usingPrimaryEffect:(BOOL)arg2 ;
-(UIVisualEffect *)primaryVisualEffect;
-(UIVisualEffect *)secondaryVisualEffect;
-(id)_createParentVisualEffectViewWithVisualEffect:(id)arg1 ;
-(double)_widthForTimeViews;
-(double)_leftMarginForTimeViewsFromTimeWidth:(double)arg1 ;
-(double)_rightMarginForTimeViewsFromTimeWidth:(double)arg1 ;
-(id)_textForCountdownLabelWithCurrentDate:(id)arg1 ;
-(void)_installCountdownTimerWithFireDate:(id)arg1 ;
-(void)_countdownTimerFired;
-(BOOL)_eventIsNow;
-(void)_resetCountdownTimerBasedOnCurrentDateForStringGeneration:(id)arg1 ;
-(id)_textForTopTimeLabel;
-(id)_textForBottomTimeLabel;
-(id)_textForDepartureTimeLabel;
-(id)_selectedBackgroundViewWithColor:(id)arg1 ;
-(void)setPrimaryVisualEffect:(UIVisualEffect *)arg1 ;
-(void)setSecondaryVisualEffect:(UIVisualEffect *)arg1 ;
-(void)setColorBarLayerFilter:(id)arg1 ;
-(BOOL)isPast;
-(id)_sharedNumberFormatter;
-(void)setIsTemplateCell:(BOOL)arg1 ;
-(void)setIsFakeInvitation:(BOOL)arg1 ;
@end

