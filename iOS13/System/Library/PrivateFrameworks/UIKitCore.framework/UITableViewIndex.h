/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(BOOL)_accessibilityHUDGestureManagerCancelsTouchesInView:(id)arg1 ;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(CGPoint)arg2 ;
-(void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(CGPoint)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIFont *)font;
-(void)tintColorDidChange;
-(void)didMoveToWindow;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(long long)_idiom;
-(void)drawRect:(CGRect)arg1 ;
-(void)_setupAXHUDGestureIfNecessary;
-(id)_fontForIdiom:(long long)arg1 ;
-(void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setDrawingInsets:(UIEdgeInsets)arg1 ;
-(void)setTitles:(NSArray *)arg1 ;
-(void)setIndexColor:(UIColor *)arg1 ;
-(void)setIndexBackgroundColor:(UIColor *)arg1 ;
-(void)setIndexTrackingBackgroundColor:(UIColor *)arg1 ;
-(long long)selectedSection;
-(BOOL)pastTop;
-(BOOL)pastBottom;
-(NSString *)selectedSectionTitle;
-(unsigned long long)maximumNumberOfTitlesWithoutTruncationForHeight:(double)arg1 ;
-(void)_cacheAndMeasureTitles;
-(void)_setIdiom:(long long)arg1 ;
-(CGRect)_effectiveBounds;
-(double)_minLineSpacingForIdiom:(long long)arg1 ;
-(id)_displayTitles;
-(id)_dotImage;
-(UIEdgeInsets)drawingInsets;
-(CGRect)_visibleBoundsForRect:(CGRect)arg1 stride:(double*)arg2 ;
-(UIColor *)indexColor;
-(long long)_indexForEntryAtPoint:(CGPoint)arg1 ;
-(BOOL)_updateSectionForTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)_externalDotImage;
-(NSArray *)titles;
-(UIColor *)indexTrackingBackgroundColor;
-(UIColor *)indexBackgroundColor;
@end

