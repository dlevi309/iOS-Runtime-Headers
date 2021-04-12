/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EKDayOccurrenceTravelTimeViewMetricsDelegate.h>

@protocol EKDayOccurrenceViewDelegate;
@class UIImageView, EKDayOccurrenceTravelTimeView, UIView, EKDayOccurrenceState, UIColor, _UICursorInteraction, NSObject, EKEvent, NSString;

@interface EKDayOccurrenceView : UIView <_UICursorInteractionDelegate, NSCopying, EKDayOccurrenceTravelTimeViewMetricsDelegate> {

	double _visibleHeight;
	UIImageView* _eventBackgroundView;
	UIImageView* _contentView;
	UIImageView* _travelBackgroundView;
	EKDayOccurrenceTravelTimeView* _travelTimeContentView;
	BOOL _needsContentCalc;
	BOOL _needsBackgroundImageUpdate;
	UIView* _startResizeHandle;
	UIView* _endResizeHandle;
	double _originalXBeforeOffset;
	unsigned _touchKeptInsideOccurrence : 1;
	unsigned _offsetContentForLandscape : 1;
	UIEdgeInsets _padding;
	unsigned long long _bottomPinningState;
	CGRect _unpinnedEventBackgroundFrame;
	CGRect _unpinnedTravelBackgroundFrame;
	UIView* _pinFadeView;
	long long _currentRequestId;
	EKDayOccurrenceState* _currentImageState;
	unsigned long long _invalidatedRequestOptions;
	UIColor* _stagedBackgroundColor;
	_UICursorInteraction* _cursorInteraction;
	BOOL _isVibrant;
	BOOL _visibleHeightLocked;
	BOOL _selected;
	BOOL _dimmed;
	BOOL _allDayDrawingStyle;
	BOOL _drawsResizeHandles;
	BOOL _usesSmallText;
	BOOL _hideBackgroundImage;
	BOOL _hideText;
	BOOL _isSelectedCopyView;
	BOOL _isProposedTime;
	BOOL _tentative;
	BOOL _declined;
	BOOL _cancelled;
	BOOL _needsReply;
	BOOL _allDay;
	BOOL _birthday;
	BOOL _showsTravelTime;
	BOOL _reduceLayoutProcessingForAnimation;
	BOOL _pointerInteractionDisabled;
	BOOL _touchesAreBeingTracked;
	NSObject*<EKDayOccurrenceViewDelegate> _delegate;
	EKDayOccurrenceView* _selectedCopy;
	EKEvent* _occurrence;
	double _travelTimeSubviewHeightInPoints;
	long long _birthdayCount;
	double _cappedColorBarHeight;
	double _travelTime;
	long long _occurrenceBackgroundStyle;
	double _bottomPinningProximity;
	double _topYBoundaryForText;
	UIEdgeInsets _margin;

}

@property (assign,nonatomic) BOOL touchesAreBeingTracked;                                         //@synthesize touchesAreBeingTracked=_touchesAreBeingTracked - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<EKDayOccurrenceViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) EKDayOccurrenceView * selectedCopy;                           //@synthesize selectedCopy=_selectedCopy - In the implementation block
@property (assign,nonatomic) BOOL isVibrant;                                                      //@synthesize isVibrant=_isVibrant - In the implementation block
@property (nonatomic,readonly) BOOL visibleHeightLocked;                                          //@synthesize visibleHeightLocked=_visibleHeightLocked - In the implementation block
@property (assign,nonatomic) double visibleHeight;                                                //@synthesize visibleHeight=_visibleHeight - In the implementation block
@property (nonatomic,retain) EKEvent * occurrence;                                                //@synthesize occurrence=_occurrence - In the implementation block
@property (assign,nonatomic) BOOL selected;                                                       //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL dimmed;                                                         //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,nonatomic) BOOL allDayDrawingStyle;                                             //@synthesize allDayDrawingStyle=_allDayDrawingStyle - In the implementation block
@property (assign,nonatomic) BOOL drawsResizeHandles;                                             //@synthesize drawsResizeHandles=_drawsResizeHandles - In the implementation block
@property (assign,nonatomic) BOOL usesSmallText;                                                  //@synthesize usesSmallText=_usesSmallText - In the implementation block
@property (assign,nonatomic) BOOL hideBackgroundImage;                                            //@synthesize hideBackgroundImage=_hideBackgroundImage - In the implementation block
@property (assign,nonatomic) BOOL hideText;                                                       //@synthesize hideText=_hideText - In the implementation block
@property (assign,nonatomic) UIEdgeInsets margin;                                                 //@synthesize margin=_margin - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding; 
@property (assign,nonatomic) BOOL isSelectedCopyView;                                             //@synthesize isSelectedCopyView=_isSelectedCopyView - In the implementation block
@property (assign,nonatomic) double travelTimeSubviewHeightInPoints;                              //@synthesize travelTimeSubviewHeightInPoints=_travelTimeSubviewHeightInPoints - In the implementation block
@property (assign,nonatomic) BOOL isProposedTime;                                                 //@synthesize isProposedTime=_isProposedTime - In the implementation block
@property (assign,nonatomic) long long birthdayCount;                                             //@synthesize birthdayCount=_birthdayCount - In the implementation block
@property (assign,getter=isTentative,nonatomic) BOOL tentative;                                   //@synthesize tentative=_tentative - In the implementation block
@property (assign,getter=isDeclined,nonatomic) BOOL declined;                                     //@synthesize declined=_declined - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                                   //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) BOOL needsReply;                                                     //@synthesize needsReply=_needsReply - In the implementation block
@property (assign,getter=isAllDay,nonatomic) BOOL allDay;                                         //@synthesize allDay=_allDay - In the implementation block
@property (assign,getter=isBirthday,nonatomic) BOOL birthday;                                     //@synthesize birthday=_birthday - In the implementation block
@property (assign,nonatomic) double cappedColorBarHeight;                                         //@synthesize cappedColorBarHeight=_cappedColorBarHeight - In the implementation block
@property (assign,nonatomic) BOOL showsTravelTime;                                                //@synthesize showsTravelTime=_showsTravelTime - In the implementation block
@property (assign,nonatomic) double travelTime;                                                   //@synthesize travelTime=_travelTime - In the implementation block
@property (assign,nonatomic) long long routingMode; 
@property (assign,nonatomic) long long occurrenceBackgroundStyle;                                 //@synthesize occurrenceBackgroundStyle=_occurrenceBackgroundStyle - In the implementation block
@property (assign,nonatomic) BOOL reduceLayoutProcessingForAnimation;                             //@synthesize reduceLayoutProcessingForAnimation=_reduceLayoutProcessingForAnimation - In the implementation block
@property (assign,nonatomic) double bottomPinningProximity;                                       //@synthesize bottomPinningProximity=_bottomPinningProximity - In the implementation block
@property (nonatomic,readonly) BOOL isPinned; 
@property (assign,nonatomic) BOOL pointerInteractionDisabled;                                     //@synthesize pointerInteractionDisabled=_pointerInteractionDisabled - In the implementation block
@property (assign,nonatomic) double topYBoundaryForText;                                          //@synthesize topYBoundaryForText=_topYBoundaryForText - In the implementation block
@property (nonatomic,readonly) EKDayOccurrenceState * currentImageState;                          //@synthesize currentImageState=_currentImageState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearCaches;
+(double)enoughHeightForOneLineForEvent:(id)arg1 usingSmallText:(BOOL)arg2 sizeClass:(long long)arg3 ;
+(double)minNaturalTextHeightForEvent:(id)arg1 usingSmallText:(BOOL)arg2 sizeClass:(long long)arg3 ;
+(double)barToBarHorizontalDistanceIncludingBarWidth;
+(double)barToBarGapWidth;
+(UIEdgeInsets)defaultPadding;
+(id)occurrenceViewWithFrame:(CGRect)arg1 ;
+(double)colorBarThickness;
+(id)_color:(id)arg1 darkenedToPercentage:(double)arg2 withFinalAlpha:(double)arg3 ;
+(double)minimumHeightForSizeClass:(long long)arg1 orientation:(long long)arg2 isAllDay:(BOOL)arg3 ;
+(double)bottomShadowMargin;
+(double)minimumHeightForSizeClass:(long long)arg1 orientation:(long long)arg2 ;
+(id)_viewCache;
+(double)minimumHeightForSizeClass:(long long)arg1 orientation:(long long)arg2 isAllDay:(BOOL)arg3 usesSmallText:(BOOL)arg4 ;
+(id)_color:(id)arg1 lightenedToPercentage:(double)arg2 withFinalAlpha:(double)arg3 ;
+(id)framePathForExternalDragOperationWithSize:(CGSize)arg1 ;
+(UIEdgeInsets)defaultMargin;
+(void)_clearViewCache;
+(CGRect)contentStretchRectForFrame:(CGRect)arg1 ;
+(id)imageForExternalDragOperationFromEvent:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<EKDayOccurrenceViewDelegate>)delegate;
-(void)setDelegate:(NSObject*<EKDayOccurrenceViewDelegate>)arg1 ;
-(BOOL)isCancelled;
-(void)prepareForReuse;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)removeFromSuperview;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)didMoveToSuperview;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)setMargin:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)margin;
-(BOOL)isPinned;
-(id)cursorInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(UIEdgeInsets)padding;
-(void)setCancelled:(BOOL)arg1 ;
-(void)_updateColors;
-(double)visibleHeight;
-(void)setVisibleHeight:(double)arg1 ;
-(BOOL)hasIcon;
-(double)travelTime;
-(void)setTravelTime:(double)arg1 ;
-(void)setBirthday:(BOOL)arg1 ;
-(void)setAllDay:(BOOL)arg1 ;
-(BOOL)isAllDay;
-(void)setBottomPinningProximity:(double)arg1 ;
-(void)setTravelTimeSubviewHeightInPoints:(double)arg1 ;
-(EKDayOccurrenceState *)currentImageState;
-(void)forceUpdateContentWithPayload:(id)arg1 ;
-(BOOL)usesSmallText;
-(double)viewMaxNaturalTextHeight;
-(double)travelTimeSubviewHeightInPoints;
-(double)enoughHeightForOneLine;
-(BOOL)visibleHeightLocked;
-(void)setUsesSmallText:(BOOL)arg1 ;
-(BOOL)isProposedTime;
-(void)setIsProposedTime:(BOOL)arg1 ;
-(double)bottomPinningProximity;
-(void)setReduceLayoutProcessingForAnimation:(BOOL)arg1 ;
-(EKEvent *)occurrence;
-(void)setDimmed:(BOOL)arg1 ;
-(void)setIsVibrant:(BOOL)arg1 ;
-(void)setOccurrence:(EKEvent *)arg1 ;
-(void)setIsSelectedCopyView:(BOOL)arg1 ;
-(long long)occurrenceBackgroundStyle;
-(void)setOccurrenceBackgroundStyle:(long long)arg1 ;
-(BOOL)reduceLayoutProcessingForAnimation;
-(long long)routingMode;
-(void)setRoutingMode:(long long)arg1 ;
-(void)setTentative:(BOOL)arg1 ;
-(void)setDeclined:(BOOL)arg1 ;
-(void)setNeedsReply:(BOOL)arg1 ;
-(long long)compareOccurrenceViewForTabOrdering:(id)arg1 ;
-(BOOL)isSelectedCopyView;
-(void)_setUpInteraction;
-(void)setTopYBoundaryForText:(double)arg1 ;
-(void)forceUpdateColors;
-(BOOL)isDeclined;
-(BOOL)isTentative;
-(BOOL)needsReply;
-(BOOL)isVibrant;
-(BOOL)isBirthday;
-(long long)birthdayCount;
-(double)_verticalContentInset;
-(double)topYBoundaryForText;
-(BOOL)dimmed;
-(void)setBirthdayCount:(long long)arg1 ;
-(void)requestContentIfNeeded:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAllDayDrawingStyle:(BOOL)arg1 ;
-(void)setHideBackgroundImage:(BOOL)arg1 ;
-(BOOL)hideText;
-(void)setHideText:(BOOL)arg1 ;
-(BOOL)drawsResizeHandles;
-(void)setDrawsResizeHandles:(BOOL)arg1 ;
-(BOOL)allDayDrawingStyle;
-(BOOL)showsTravelTime;
-(void)setShowsTravelTime:(BOOL)arg1 ;
-(EKDayOccurrenceView *)selectedCopy;
-(void)setSelectedCopy:(EKDayOccurrenceView *)arg1 ;
-(void)setCappedColorBarHeight:(double)arg1 ;
-(void)setPointerInteractionDisabled:(BOOL)arg1 ;
-(void)_clearContent;
-(void)_invalidateCurrentRequest;
-(void)updateAlpha;
-(void)_invalidateAllImages;
-(void)_addTravelTimeSubviews;
-(void)_removeTravelTimeSubviews;
-(void)_invalidateTravelTimeImage;
-(void)_invalidateBackgroundImage;
-(void)_invalidateTextImage;
-(void)_invalidateContentBounds;
-(void)setAllDayDrawingStyle:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isTimedOccurrenceDrawingStyle;
-(id)arrayOfResizeHandles;
-(void)_updateResizeHandleLocations;
-(id)_newResizeHandleView;
-(CGRect)_frameMutatedForProximityToHourLine:(CGRect)arg1 ;
-(void)_updateContentImageViewIfNeeded;
-(CGRect)_computeTravelTimeContentRect;
-(void)_updateContentWithPayload:(id)arg1 ;
-(void)setTouchesAreBeingTracked:(BOOL)arg1 ;
-(BOOL)touchesAreBeingTracked;
-(void)_resetContentViewPosition;
-(long long)_compareOccurrenceViewTopToBottomLeftToRight:(id)arg1 ;
-(long long)_compareOccurrenceViewForSelectedCopyOrdering:(id)arg1 ;
-(long long)_compareOccurrenceViewTopToBottom:(id)arg1 ;
-(long long)_compareOccurrenceViewLeftToRight:(id)arg1 ;
-(BOOL)_isBelowOccurrenceView:(id)arg1 overlapToIgnore:(double)arg2 ;
-(BOOL)_isAboveOccurrenceView:(id)arg1 overlapToIgnore:(double)arg2 ;
-(BOOL)_isAboveAllDayOccurrenceView:(id)arg1 ;
-(BOOL)_isBelowAllDayOccurrenceView:(id)arg1 ;
-(void)animateToFrame:(CGRect)arg1 isAllDay:(BOOL)arg2 beginFromCurrentState:(BOOL)arg3 whenFinished:(/*^block*/id)arg4 ;
-(CGRect)frameOfOpaqueContent;
-(int)dragTypeFromPoint:(CGPoint)arg1 ;
-(void)bringResizeHandlesToFront;
-(void)fadeInContentViewAt:(double)arg1 minWidth:(double)arg2 animated:(BOOL)arg3 ;
-(BOOL)resetContentViewToOriginalState:(BOOL)arg1 ;
-(void)setHideText:(BOOL)arg1 animate:(BOOL)arg2 ;
-(BOOL)hideBackgroundImage;
-(double)cappedColorBarHeight;
-(BOOL)pointerInteractionDisabled;
@end

