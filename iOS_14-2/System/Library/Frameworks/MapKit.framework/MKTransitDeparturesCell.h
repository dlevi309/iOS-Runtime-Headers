/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKCustomSeparatorTableViewCell.h>

@protocol MKTransitDeparturesCellDelegate;
@class NSMutableDictionary, NSArray, UIImageView, _MKUILabel, MKThemeMultiPartLabel, UIButton, UIStackView, NSLayoutConstraint, NSMapTable, NSDate, NSTimeZone, NSString;

@interface MKTransitDeparturesCell : MKCustomSeparatorTableViewCell {

	unsigned long long _cellStyle;
	NSMutableDictionary* _constraintsByCellStyle;
	NSArray* _currentCellStyleConstraints;
	UIImageView* _lineImageView;
	UIImageView* _incidentIconImageView;
	_MKUILabel* _primaryLabel;
	MKThemeMultiPartLabel* _secondaryLabel;
	MKThemeMultiPartLabel* _tertiaryLabel;
	UIButton* _incidentButton;
	_MKUILabel* _departureLabel;
	_MKUILabel* _departureDetailLabel;
	UIStackView* _departureStackView;
	UIStackView* _secondaryTextStackView;
	NSLayoutConstraint* _labelLeadingMarginConstraint;
	BOOL _enforceMinimumDepartureLabelWidth;
	NSLayoutConstraint* _minimumDepartureLabelWidthConstraint;
	NSMapTable* _departureDependentConstraintsByView;
	double _lineImageCenteringValue;
	NSLayoutConstraint* _lineImageToContainerTrailingConstraint;
	NSLayoutConstraint* _lineImageViewTopConstraint;
	NSLayoutConstraint* _lineImageViewToBottomConstraint;
	NSLayoutConstraint* _primaryToTopConstraint;
	NSLayoutConstraint* _departureStackViewToBottomConstraint;
	NSLayoutConstraint* _departureLabelToTopConstraint;
	NSLayoutConstraint* _departureLabelToPrimaryBaselineConstraint;
	NSLayoutConstraint* _lineImageViewCenteringConstraint;
	NSLayoutConstraint* _lineImageViewCenteringVerticalPaddingConstraint;
	NSLayoutConstraint* _incidentIconHorizontalConstraint;
	NSLayoutConstraint* _primaryToBottomConstraint;
	NSLayoutConstraint* _secondaryStackToPrimaryConstraint;
	NSLayoutConstraint* _secondaryStackToBottomConstraint;
	NSLayoutConstraint* _lineImageToTextGutterConstraint;
	NSLayoutConstraint* _lineImageLeadingConstraint;
	NSLayoutConstraint* _lineImageCompressedLeadingConstraint;
	UIImageView* _disclosureArrowImageView;
	NSLayoutConstraint* _labelToDisclosureArrowConstraint;
	BOOL _showNoConnectionEmDash;
	BOOL _showIncidentIcon;
	BOOL _inactive;
	BOOL _useCompressedGutter;
	BOOL _useCompressedLeading;
	double _lineImageViewSize;
	NSArray* _departures;
	unsigned long long _departureStyle;
	NSDate* _countdownReferenceDate;
	NSTimeZone* _departureTimeZone;
	NSString* _incidentTitle;
	id<MKTransitDeparturesCellDelegate> _delegate;
	NSDate* _departureCutoffDate;

}

@property (assign,nonatomic) double lineImageViewSize;                                                    //@synthesize lineImageViewSize=_lineImageViewSize - In the implementation block
@property (nonatomic,readonly) double labelMargin; 
@property (nonatomic,retain) NSDate * countdownReferenceDate;                                             //@synthesize countdownReferenceDate=_countdownReferenceDate - In the implementation block
@property (nonatomic,retain) NSDate * departureCutoffDate;                                                //@synthesize departureCutoffDate=_departureCutoffDate - In the implementation block
@property (nonatomic,retain) NSArray * departures;                                                        //@synthesize departures=_departures - In the implementation block
@property (assign,nonatomic) unsigned long long departureStyle;                                           //@synthesize departureStyle=_departureStyle - In the implementation block
@property (nonatomic,retain) NSTimeZone * departureTimeZone;                                              //@synthesize departureTimeZone=_departureTimeZone - In the implementation block
@property (assign,getter=isShowingNoConnectionEmDash,nonatomic) BOOL showNoConnectionEmDash;              //@synthesize showNoConnectionEmDash=_showNoConnectionEmDash - In the implementation block
@property (assign,getter=isShowingIncidentIcon,nonatomic) BOOL showIncidentIcon;                          //@synthesize showIncidentIcon=_showIncidentIcon - In the implementation block
@property (nonatomic,copy) NSString * incidentTitle;                                                      //@synthesize incidentTitle=_incidentTitle - In the implementation block
@property (assign,nonatomic,__weak) id<MKTransitDeparturesCellDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL useCompressedGutter;                                                    //@synthesize useCompressedGutter=_useCompressedGutter - In the implementation block
@property (assign,nonatomic) BOOL useCompressedLeading;                                                   //@synthesize useCompressedLeading=_useCompressedLeading - In the implementation block
@property (assign,getter=isInactive,nonatomic) BOOL inactive;                                             //@synthesize inactive=_inactive - In the implementation block
+(double)maxLineImageWidthforWidth:(double)arg1 ;
+(id)displayableCountdowDepartureDatesFromDates:(id)arg1 withReferenceDate:(id)arg2 ;
+(id)strongSecondaryFont;
+(id)_nowString;
+(id)defaultSecondaryFont;
+(double)_maxExpectedDepartureLabelWidth;
+(id)_primaryFont;
+(void)useCompressedGutter:(out BOOL*)arg1 compressedLeading:(out BOOL*)arg2 forImageWidth:(double)arg3 inWidth:(double)arg4 ;
+(id)_departureLabelFont;
+(double)labelMarginWithLineImageViewWidth:(double)arg1 ;
+(id)_departureDetailLabelFont;
+(id)_attributedStringForCountdownDepartures:(id)arg1 referenceDate:(id)arg2 isShowingNoConnectionEmDash:(BOOL)arg3 ;
+(id)_stringFromTimestampDate:(id)arg1 departureTimeZone:(id)arg2 ;
+(void)_addEmDashAttributes:(id)arg1 ;
+(void)_enumerateMinutesUntilDepartureDates:(id)arg1 withReferenceDate:(id)arg2 block:(/*^block*/id)arg3 ;
+(BOOL)_needsUpdateMaxLabelWidths;
+(void)_calculateMaxLabelWidths;
+(double)_minTextWidth;
-(void)setInactive:(BOOL)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(double)labelMargin;
-(BOOL)isInactive;
-(BOOL)isOpaque;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(double)_separatorHeight;
-(NSTimeZone *)departureTimeZone;
-(NSDate *)departureCutoffDate;
-(void)setDepartureCutoffDate:(NSDate *)arg1 ;
-(id<MKTransitDeparturesCellDelegate>)delegate;
-(void)setDepartures:(NSArray *)arg1 ;
-(void)setDelegate:(id<MKTransitDeparturesCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)setCountdownReferenceDate:(NSDate *)arg1 ;
-(void)setDepartureTimeZone:(NSTimeZone *)arg1 ;
-(void)setLineImageViewSize:(double)arg1 ;
-(void)setShowNoConnectionEmDash:(BOOL)arg1 ;
-(void)setTertiaryText:(id)arg1 ;
-(void)setShowDisclosureArrow:(BOOL)arg1 ;
-(void)refreshDeparturesDisplay;
-(NSString *)incidentTitle;
-(void)setAccessibilityOrder;
-(void)setPrimaryText:(id)arg1 ;
-(void)infoCardThemeChanged;
-(void)_commonInit;
-(void)_updateConstraintValues;
-(void)setSecondaryText:(id)arg1 ;
-(void)_updateLabelFonts;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)_setCellStyle:(unsigned long long)arg1 ;
-(void)_incidentButtonPressed;
-(id)_constraintsForCellStyle:(unsigned long long)arg1 ;
-(BOOL)useCompressedGutter;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(unsigned long long)_bestCellStyleForCurrentState;
-(BOOL)_shouldEnforceMinimumDepartureLabelWidth;
-(void)_getDepartureDependentConstraintsToActivate:(id*)arg1 toDeactivate:(id*)arg2 ;
-(double)lineImageViewSize;
-(void)setUseCompressedLeading:(BOOL)arg1 ;
-(void)setUseCompressedGutter:(BOOL)arg1 ;
-(id)_startEndDatesForSequence:(id)arg1 date:(id)arg2 mapItem:(id)arg3 ;
-(void)setDepartureStyle:(unsigned long long)arg1 ;
-(void)setIncidentTitle:(NSString *)arg1 ;
-(id)_operatingHoursDescriptionForSequence:(id)arg1 mapItem:(id)arg2 ;
-(NSDate *)countdownReferenceDate;
-(id)multipartStringSeparator;
-(void)setLineImage:(id)arg1 ;
-(void)setShowIncidentIcon:(BOOL)arg1 ;
-(void)configureLeadingWithTableViewContentMargin:(double)arg1 width:(double)arg2 ;
-(double)_baselineSpacingAboveView:(id)arg1 ;
-(BOOL)_shouldPinSecondaryStackViewToBottom;
-(void)_updateDepartureDependentConstraintsForCurrentState;
-(void)configureCellForRowIndex:(long long)arg1 withMapItem:(id)arg2 sectionController:(id)arg3 outNextLineIsSame:(BOOL*)arg4 ;
-(void)_updateLineImageViewConstraintConstants;
-(id)_fontForView:(id)arg1 ;
-(BOOL)_isDisplayingDepartureInfo;
-(BOOL)_shouldEnforceDepartureDependentConstraints;
-(unsigned long long)departureStyle;
-(unsigned long long)_displayableDeparturesCount;
-(id)_departureDates;
-(BOOL)isShowingNoConnectionEmDash;
-(id)_incidentIcon;
-(void)_addIncidentIcon;
-(void)_removeIncidentIcon;
-(void)setIncidentButtonHidden:(BOOL)arg1 ;
-(void)setShowNoConnectionEnDash:(BOOL)arg1 ;
-(BOOL)isShowingIncidentIcon;
-(BOOL)useCompressedLeading;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
-(NSArray *)departures;
@end

