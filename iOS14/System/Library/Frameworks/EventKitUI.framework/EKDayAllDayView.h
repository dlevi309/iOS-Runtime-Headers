/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _smallTextSettingLocked;
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
+(id)unscaledAllDayFont;
+(id)allDayLabelBoldFont;
+(id)allDayLabelFont;
-(BOOL)isAllDayLabelHighlighted;
-(id)initWithFrame:(CGRect)arg1 sizeClass:(long long)arg2 ;
-(void)setAllDayLabelHighlighted:(BOOL)arg1 ;
-(EKEvent *)dimmedOccurrence;
-(void)viewTintColorDidChangeForView:(id)arg1 toColor:(id)arg2 ;
-(id)occurrenceViews;
-(void)selectEvent:(id)arg1 ;
-(void)setAllowsOccurrenceSelection:(BOOL)arg1 ;
-(void)setDimmedOccurrence:(EKEvent *)arg1 ;
-(BOOL)allowsOccurrenceSelection;
-(id)occurrenceViewForEvent:(id)arg1 ;
-(id)selectedEvent;
-(void)configureOccurrenceViewForGestureController:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDividerLineVisualEffect:(id)arg1 ;
-(void)_setUpBirthdayCountViewIfNeeded;
-(long long)_sizeClass;
-(id<EKDayAllDayViewDelegate>)delegate;
-(double)_height;
-(void)setShowsLabel:(BOOL)arg1 ;
-(void)setOccurrences:(id)arg1 ;
-(void)setTopBorderLineHidden:(BOOL)arg1 ;
-(double)naturalHeight;
-(void)updateLabelFont;
-(void)dayOccurrenceViewSelected:(id)arg1 atPoint:(CGPoint)arg2 wasTapped:(BOOL)arg3 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setAllDayLabelColor:(id)arg1 ;
-(void)_configureOccurrenceViewMarginAndPadding:(id)arg1 ;
-(void)setDelegate:(id<EKDayAllDayViewDelegate>)arg1 ;
-(double)fixedHeight;
-(void)layoutSubviews;
-(void)setShowBirthdayCountInsteadOfEvents:(BOOL)arg1 ;
-(void)removeAllOccurrenceViews;
-(double)_allDayAreaHeightForEventCount:(long long)arg1 ;
-(void)didMoveToWindow;
-(void)_clearTemporaryViews;
-(double)nextAvailableOccurrenceViewYOrigin;
-(void)setOccurrenceInset:(double)arg1 labelInset:(double)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setFixedHeight:(double)arg1 ;
-(BOOL)containsEvent:(id)arg1 ;
-(id)_findSelectedCopySubviewOfView:(id)arg1 ;
-(void)setShowsSelection:(BOOL)arg1 ;
-(BOOL)hideOccurrenceBackground;
-(void)setForceSingleColumnLayout:(BOOL)arg1 ;
-(double)firstEventYOffset;
-(int)maxVisibleRows;
-(BOOL)showsBorderLines;
-(id)_selectedCopyView;
-(void)_smallTextSettingChanged;
-(void)setShowsBorderLines:(BOOL)arg1 ;
-(BOOL)showsLabel;
-(void)setMaxVisibleRows:(int)arg1 ;
-(double)_borderLineWidth;
-(void)_saveTemporaryViews;
-(void)lockUseOfSmallTextToState:(BOOL)arg1 ;
-(BOOL)showsSelection;
-(void)setBorderColor:(id)arg1 ;
-(BOOL)forceSingleColumnLayout;
-(BOOL)showBirthdayCountInsteadOfEvents;
-(void)setOrientation:(long long)arg1 ;
-(void)setHideOccurrenceBackground:(BOOL)arg1 ;
-(void)addViewToScroller:(id)arg1 ;
@end

