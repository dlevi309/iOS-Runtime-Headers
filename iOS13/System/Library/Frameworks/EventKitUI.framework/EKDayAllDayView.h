/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/EKDayOccurrenceViewDelegate.h>
#import <libobjc.A.dylib/EKUITintColorUpdateDelegate.h>

@protocol EKDayAllDayViewDelegate;
@class NSMutableArray, UILabel, UIScrollView, EKEvent, UIView, EKUIVisualEffectView, UIColor, EKDayOccurrenceView, NSMutableDictionary;

@interface EKDayAllDayView : UIView <EKDayOccurrenceViewDelegate, EKUITintColorUpdateDelegate> {

	long long _orientation;
	NSMutableArray* _occurrenceViews;
	UILabel* _allDay;
	BOOL _allDayLabelHighlighted;
	UIScrollView* _scroller;
	double _occurrenceInset;
	BOOL _allowSelection;
	BOOL _showSelection;
	EKEvent* _selectedEvent;
	BOOL _usesSmallText;
	BOOL _showBirthdayCount;
	long long _birthdayCount;
	long long _targetSizeClass;
	UIView* _dividerLineViewTop;
	UIView* _dividerLineViewBottom;
	EKUIVisualEffectView* _dividerLineSuperview;
	UIColor* _dividerLineVisualEffectColor;
	EKDayOccurrenceView* _birthdayCountOccurrenceView;
	NSMutableDictionary* _temporaryViewCache;
	BOOL _showsBorderLines;
	BOOL _showsLabel;
	BOOL _hideOccurrenceBackground;
	BOOL _forceSingleColumnLayout;
	int _maxVisibleRows;
	id<EKDayAllDayViewDelegate> _delegate;
	double _fixedHeight;
	EKEvent* _dimmedOccurrence;

}

@property (assign,nonatomic,__weak) id<EKDayAllDayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsSelection; 
@property (assign,nonatomic) BOOL allowsOccurrenceSelection; 
@property (assign,nonatomic) BOOL showsBorderLines;                                    //@synthesize showsBorderLines=_showsBorderLines - In the implementation block
@property (assign,nonatomic) BOOL showsLabel;                                          //@synthesize showsLabel=_showsLabel - In the implementation block
@property (assign,nonatomic) BOOL hideOccurrenceBackground;                            //@synthesize hideOccurrenceBackground=_hideOccurrenceBackground - In the implementation block
@property (assign,nonatomic) BOOL forceSingleColumnLayout;                             //@synthesize forceSingleColumnLayout=_forceSingleColumnLayout - In the implementation block
@property (assign,nonatomic) BOOL showBirthdayCountInsteadOfEvents; 
@property (nonatomic,readonly) double naturalHeight; 
@property (assign,nonatomic) double fixedHeight;                                       //@synthesize fixedHeight=_fixedHeight - In the implementation block
@property (assign,nonatomic) int maxVisibleRows;                                       //@synthesize maxVisibleRows=_maxVisibleRows - In the implementation block
@property (nonatomic,retain) EKEvent * dimmedOccurrence;                               //@synthesize dimmedOccurrence=_dimmedOccurrence - In the implementation block
+(id)allDayLabelBoldFont;
+(id)unscaledAllDayFont;
+(id)allDayLabelFont;
-(id<EKDayAllDayViewDelegate>)delegate;
-(void)setDelegate:(id<EKDayAllDayViewDelegate>)arg1 ;
-(double)_height;
-(void)setOrientation:(long long)arg1 ;
-(void)setBorderColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)setFixedHeight:(double)arg1 ;
-(double)naturalHeight;
-(long long)_sizeClass;
-(void)setAllowsOccurrenceSelection:(BOOL)arg1 ;
-(id)occurrenceViews;
-(void)_configureOccurrenceViewMarginAndPadding:(id)arg1 ;
-(void)dayOccurrenceViewSelected:(id)arg1 atPoint:(CGPoint)arg2 wasTapped:(BOOL)arg3 ;
-(id)selectedEvent;
-(void)selectEvent:(id)arg1 ;
-(void)setDimmedOccurrence:(EKEvent *)arg1 ;
-(id)occurrenceViewForEvent:(id)arg1 ;
-(void)configureOccurrenceViewForGestureController:(id)arg1 ;
-(void)setOccurrences:(id)arg1 ;
-(BOOL)allowsOccurrenceSelection;
-(EKEvent *)dimmedOccurrence;
-(id)initWithFrame:(CGRect)arg1 sizeClass:(long long)arg2 ;
-(void)setOccurrenceInset:(double)arg1 labelInset:(double)arg2 ;
-(void)setShowsBorderLines:(BOOL)arg1 ;
-(double)nextAvailableOccurrenceViewYOrigin;
-(void)updateLabelFont;
-(double)firstEventYOffset;
-(void)setAllDayLabelHighlighted:(BOOL)arg1 ;
-(BOOL)isAllDayLabelHighlighted;
-(void)addViewToScroller:(id)arg1 ;
-(void)setShowsLabel:(BOOL)arg1 ;
-(void)viewTintColorDidChangeForView:(id)arg1 toColor:(id)arg2 ;
-(id)_findSelectedCopySubviewOfView:(id)arg1 ;
-(double)_allDayAreaHeightForEventCount:(long long)arg1 ;
-(id)_selectedCopyView;
-(BOOL)forceSingleColumnLayout;
-(double)_borderLineWidth;
-(BOOL)containsEvent:(id)arg1 ;
-(BOOL)showsBorderLines;
-(void)_saveTemporaryViews;
-(void)removeAllOccurrenceViews;
-(BOOL)hideOccurrenceBackground;
-(void)_clearTemporaryViews;
-(void)_setUpBirthdayCountViewIfNeeded;
-(double)fixedHeight;
-(void)setShowBirthdayCountInsteadOfEvents:(BOOL)arg1 ;
-(BOOL)showBirthdayCountInsteadOfEvents;
-(void)setShowsSelection:(BOOL)arg1 ;
-(BOOL)showsSelection;
-(void)setAllDayLabelColor:(id)arg1 ;
-(void)setTopBorderLineHidden:(BOOL)arg1 ;
-(void)setDividerLineVisualEffect:(id)arg1 ;
-(BOOL)showsLabel;
-(void)setHideOccurrenceBackground:(BOOL)arg1 ;
-(void)setForceSingleColumnLayout:(BOOL)arg1 ;
-(int)maxVisibleRows;
-(void)setMaxVisibleRows:(int)arg1 ;
@end

