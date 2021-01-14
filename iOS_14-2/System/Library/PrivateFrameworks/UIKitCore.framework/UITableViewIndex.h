/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIAccessibilityHUDGestureDelegate.h>

@class NSArray, UIFont, UIColor, UIAccessibilityHUDGestureManager, NSString;

@interface UITableViewIndex : UIControl <UIAccessibilityHUDGestureDelegate> {

	NSArray* _titles;
	UIFont* _font;
	long long _selectedSection;
	BOOL _pastTop;
	BOOL _pastBottom;
	CGSize _cachedSize;
	CGSize _cachedSizeToFit;
	UIColor* _indexColor;
	UIColor* _indexBackgroundColor;
	UIColor* _indexTrackingBackgroundColor;
	double _topPadding;
	double _bottomPadding;
	double _verticalTextHeightEstimate;
	NSArray* _entries;
	long long _idiom;
	UIAccessibilityHUDGestureManager* _axHUDGestureManager;
	UIEdgeInsets _drawingInsets;

}

@property (nonatomic,retain) NSArray * titles; 
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) UIEdgeInsets drawingInsets;                          //@synthesize drawingInsets=_drawingInsets - In the implementation block
@property (nonatomic,retain) UIColor * indexColor; 
@property (nonatomic,retain) UIColor * indexBackgroundColor; 
@property (nonatomic,retain) UIColor * indexTrackingBackgroundColor; 
@property (nonatomic,readonly) long long selectedSection;                         //@synthesize selectedSection=_selectedSection - In the implementation block
@property (nonatomic,readonly) NSString * selectedSectionTitle; 
@property (nonatomic,readonly) BOOL pastTop;                                      //@synthesize pastTop=_pastTop - In the implementation block
@property (nonatomic,readonly) BOOL pastBottom;                                   //@synthesize pastBottom=_pastBottom - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(CGPoint)arg2 ;
-(BOOL)canBecomeFocused;
-(id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(CGPoint)arg2 ;
-(void)setDrawingInsets:(UIEdgeInsets)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2 ;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)_cacheAndMeasureTitles;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)pastTop;
-(void)setFont:(UIFont *)arg1 ;
-(long long)_indexForEntryAtPoint:(CGPoint)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)maximumNumberOfTitlesWithoutTruncationForHeight:(double)arg1 ;
-(id)_dotImage;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(UIColor *)indexColor;
-(UIColor *)indexTrackingBackgroundColor;
-(void)setTitles:(NSArray *)arg1 ;
-(long long)_idiom;
-(BOOL)pastBottom;
-(CGRect)_effectiveBounds;
-(id)_displayTitles;
-(UIColor *)indexBackgroundColor;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)_accessibilityHUDGestureManagerCancelsTouchesInView:(id)arg1 ;
-(UIEdgeInsets)drawingInsets;
-(id)_externalDotImage;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)_visibleBoundsForRect:(CGRect)arg1 stride:(double*)arg2 ;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)_minLineSpacingForIdiom:(long long)arg1 ;
-(NSString *)selectedSectionTitle;
-(void)setIndexBackgroundColor:(UIColor *)arg1 ;
-(NSArray *)titles;
-(long long)selectedSection;
-(void)_setupAXHUDGestureIfNecessary;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)_updateSectionForTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setIndexColor:(UIColor *)arg1 ;
-(id)_fontForIdiom:(long long)arg1 ;
-(void)setIndexTrackingBackgroundColor:(UIColor *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_largeContentViewerEnabledStatusDidChange:(id)arg1 ;
-(UIFont *)font;
-(void)_setIdiom:(long long)arg1 ;
@end

