/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	CGPoint _contentLocationDuringReducedProcessing;
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
	BOOL _hasPrecedingDuration;
	BOOL _hasTrailingDuration;
	BOOL _touchesAreBeingTracked;
	NSObject*<EKDayOccurrenceViewDelegate> _delegate;
	EKDayOccurrenceView* _selectedCopy;
	EKEvent* _occurrence;
	double _travelTimeSubviewHeightInPoints;
	long long _birthdayCount;
	double _cappedColorBarHeight;
	double _travelTime;
	long long _occurrenceBackgroundStyle;
	double _topPinningProximity;
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
@property (assign,nonatomic) double topPinningProximity;                                          //@synthesize topPinningProximity=_topPinningProximity - In the implementation block
@property (assign,nonatomic) double bottomPinningProximity;                                       //@synthesize bottomPinningProximity=_bottomPinningProximity - In the implementation block
@property (nonatomic,readonly) BOOL isPinned; 
@property (assign,nonatomic) BOOL pointerInteractionDisabled;                                     //@synthesize pointerInteractionDisabled=_pointerInteractionDisabled - In the implementation block
@property (assign,nonatomic) BOOL hasPrecedingDuration;                                           //@synthesize hasPrecedingDuration=_hasPrecedingDuration - In the implementation block
@property (assign,nonatomic) BOOL hasTrailingDuration;                                            //@synthesize hasTrailingDuration=_hasTrailingDuration - In the implementation block
@property (assign,nonatomic) double topYBoundaryForText;                                          //@synthesize topYBoundaryForText=_topYBoundaryForText - In the implementation block
@property (nonatomic,readonly) EKDayOccurrenceState * currentImageState;                          //@synthesize currentImageState=_currentImageState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearCaches;
+(double)colorBarThickness;
+(double)barToBarHorizontalDistanceIncludingBarWidth;
+(id)_viewCache;
+(id)imageForExternalDragOperationFromEvent:(id)arg1 style:(long long)arg2 ;
+(CGRect)contentStretchRectForFrame:(CGRect)arg1 ;
+(UIEdgeInsets)defaultPadding;
+(double)enoughHeightForOneLineForEvent:(id)arg1 usingSmallText:(BOOL)arg2 sizeClass:(long long)arg3 ;
+(id)framePathForExternalDragOperationWithSize:(CGSize)arg1 ;
+(void)_clearViewCache;
+(id)occurrenceViewWithFrame:(CGRect)arg1 ;
+(double)minimumHeightForSizeClass:(long long)arg1 orientation:(long long)arg2 isAllDay:(BOOL)arg3 ;
+(double)barToBarGapWidth;
+(double)minNaturalTextHeightForEvent:(id)arg1 usingSmallText:(BOOL)arg2 sizeClass:(long long)arg3 ;
+(id)_color:(id)arg1 darkenedToPercentage:(double)arg2 withFinalAlpha:(double)arg3 ;
+(double)minimumHeightForSizeClass:(long long)arg1 orientation:(long long)arg2 ;
+(double)bottomShadowMargin;
+(id)_color:(id)arg1 lightenedToPercentage:(double)arg2 withFinalAlpha:(double)arg3 ;
+(double)minimumHeightForSizeClass:(long long)arg1 orientation:(long long)arg2 isAllDay:(BOOL)arg3 usesSmallText:(BOOL)arg4 ;
+(UIEdgeInsets)defaultMargin;
-(void)setVisibleHeight:(double)arg1 ;
-(void)setMargin:(UIEdgeInsets)arg1 ;
-(BOOL)isBirthday;
-(double)_verticalContentInset;
-(BOOL)isVibrant;
-(void)setIsVibrant:(BOOL)arg1 ;
-(void)setIsProposedTime:(BOOL)arg1 ;
-(BOOL)reduceLayoutProcessingForAnimation;
-(double)enoughHeightForOneLine;
-(CGRect)_computeTravelTimeContentRect;
-(void)_invalidateContentBounds;
-(void)setHasPrecedingDuration:(BOOL)arg1 ;
-(BOOL)isProposedTime;
-(void)setOccurrence:(EKEvent *)arg1 ;
-(void)_removeTravelTimeSubviews;
-(UIEdgeInsets)margin;
-(EKDayOccurrenceState *)currentImageState;
-(void)setShowsTravelTime:(BOOL)arg1 ;
-(void)_setUpInteraction;
-(double)travelTime;
-(void)setTravelTime:(double)arg1 ;
-(BOOL)isDeclined;
-(long long)birthdayCount;
-(void)setAllDayDrawingStyle:(BOOL)arg1 animated:(BOOL)arg2 ;
-(EKDayOccurrenceView *)selectedCopy;
-(void)setTopPinningProximity:(double)arg1 ;
-(BOOL)hasIcon;
-(void)setAllDay:(BOOL)arg1 ;
-(void)setUsesSmallText:(BOOL)arg1 ;
-(void)_updateColors;
-(BOOL)usesSmallText;
-(void)setNeedsReply:(BOOL)arg1 ;
-(BOOL)needsReply;
-(void)setHideText:(BOOL)arg1 animate:(BOOL)arg2 ;
-(BOOL)hideText;
-(BOOL)isTentative;
-(void)setOccurrenceBackgroundStyle:(long long)arg1 ;
-(void)setReduceLayoutProcessingForAnimation:(BOOL)arg1 ;
-(double)topPinningProximity;
-(BOOL)dimmed;
-(double)visibleHeight;
-(BOOL)isPinned;
-(void)setCancelled:(BOOL)arg1 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(id)cursorInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(BOOL)isAllDay;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setIsSelectedCopyView:(BOOL)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(long long)occurrenceBackgroundStyle;
-(void)removeFromSuperview;
-(CGRect)_frameMutatedForProximityToHourLine:(CGRect)arg1 ;
-(void)setBirthday:(BOOL)arg1 ;
-(NSObject*<EKDayOccurrenceViewDelegate>)delegate;
-(long long)routingMode;
-(void)setDeclined:(BOOL)arg1 ;
-(void)_updateCornerRadius;
-(BOOL)hasPrecedingDuration;
-(long long)_compareOccurrenceViewTopToBottom:(id)arg1 ;
-(void)setTopYBoundaryForText:(double)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(long long)_compareOccurrenceViewTopToBottomLeftToRight:(id)arg1 ;
-(void)updateAlpha;
-(void)_updateResizeHandleLocations;
-(void)didMoveToSuperview;
-(void)setPointerInteractionDisabled:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_isBelowAllDayOccurrenceView:(id)arg1 ;
-(BOOL)isSelectedCopyView;
-(void)setAllDayDrawingStyle:(BOOL)arg1 ;
-(void)_invalidateBackgroundImage;
-(CGRect)_frameForText;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)visibleHeightLocked;
-(void)prepareForReuse;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)arrayOfResizeHandles;
-(BOOL)resetContentViewToOriginalState:(BOOL)arg1 ;
-(BOOL)selected;
-(void)forceUpdateContentWithPayload:(id)arg1 ;
-(BOOL)touchesAreBeingTracked;
-(void)setBottomPinningProximity:(double)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(long long)_compareOccurrenceViewLeftToRight:(id)arg1 ;
-(void)_invalidateTextImage;
-(void)setDelegate:(NSObject*<EKDayOccurrenceViewDelegate>)arg1 ;
-(CGRect)frameOfOpaqueContent;
-(void)_invalidateCurrentRequest;
-(NSString *)description;
-(double)bottomPinningProximity;
-(long long)compareOccurrenceViewForTabOrdering:(id)arg1 ;
-(void)layoutSubviews;
-(void)_invalidateTravelTimeImage;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)_isBelowOccurrenceView:(id)arg1 overlapToIgnore:(double)arg2 ;
-(void)_updateContentImageViewIfNeeded;
-(void)setHideBackgroundImage:(BOOL)arg1 ;
-(BOOL)hasTrailingDuration;
-(id)_newResizeHandleView;
-(void)fadeInContentViewAt:(double)arg1 minWidth:(double)arg2 animated:(BOOL)arg3 ;
-(void)setHideText:(BOOL)arg1 ;
-(BOOL)drawsResizeHandles;
-(void)setHasTrailingDuration:(BOOL)arg1 ;
-(void)setTravelTimeSubviewHeightInPoints:(double)arg1 ;
-(EKEvent *)occurrence;
-(void)_resetContentViewPosition;
-(double)topYBoundaryForText;
-(double)cappedColorBarHeight;
-(void)setRoutingMode:(long long)arg1 ;
-(void)forceUpdateColors;
-(void)requestContentIfNeeded:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCappedColorBarHeight:(double)arg1 ;
-(double)viewMaxNaturalTextHeight;
-(void)_clearContent;
-(BOOL)pointerInteractionDisabled;
-(UIEdgeInsets)padding;
-(BOOL)_isTimedOccurrenceDrawingStyle;
-(void)setDrawsResizeHandles:(BOOL)arg1 ;
-(void)setTentative:(BOOL)arg1 ;
-(BOOL)showsTravelTime;
-(void)_addTravelTimeSubviews;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setSelectedCopy:(EKDayOccurrenceView *)arg1 ;
-(void)_invalidateAllImages;
-(double)travelTimeSubviewHeightInPoints;
-(BOOL)allDayDrawingStyle;
-(int)dragTypeFromPoint:(CGPoint)arg1 ;
-(BOOL)hideBackgroundImage;
-(void)setBirthdayCount:(long long)arg1 ;
-(void)animateToFrame:(CGRect)arg1 isAllDay:(BOOL)arg2 beginFromCurrentState:(BOOL)arg3 whenFinished:(/*^block*/id)arg4 ;
-(void)setDimmed:(BOOL)arg1 ;
-(long long)_compareOccurrenceViewForSelectedCopyOrdering:(id)arg1 ;
-(BOOL)_isAboveOccurrenceView:(id)arg1 overlapToIgnore:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_isAboveAllDayOccurrenceView:(id)arg1 ;
-(void)bringResizeHandlesToFront;
-(BOOL)isCancelled;
-(void)_updateContentWithPayload:(id)arg1 ;
-(void)dealloc;
-(void)setTouchesAreBeingTracked:(BOOL)arg1 ;
@end

