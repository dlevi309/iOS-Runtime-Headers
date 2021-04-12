/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIIndexBarVisualStyle_Base.h>

@class NSArray, UIFont, UIColor;

@interface UIIndexBarVisualStyle_LegacyiOS : UIIndexBarVisualStyle_Base {

	NSArray* _titles;
	UIFont* _font;
	long long _selectedSection;
	BOOL _pastTop;
	BOOL _pastBottom;
	CGSize _cachedSize;
	CGSize _cachedSizeToFit;
	double _topPadding;
	double _bottomPadding;
	double _verticalTextHeightEstimate;
	UIColor* _nonTrackingBackgroundColor;

}

@property (nonatomic,copy) UIColor * nonTrackingBackgroundColor;              //@synthesize nonTrackingBackgroundColor=_nonTrackingBackgroundColor - In the implementation block
-(BOOL)overlay;
-(BOOL)canBecomeFocused;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)font;
-(id)initWithView:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGRect)_visibleBoundsForRect:(CGRect)arg1 stride:(double*)arg2 ;
-(void)displayEntriesUpdated;
-(void)sizeUpdated;
-(double)minLineHeight;
-(id)displayEntryFromEntry:(id)arg1 ;
-(BOOL)updateSectionForTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)indexColorUpdated;
-(long long)_accessibility_indexForEntryAtPoint:(CGPoint)arg1 ;
-(UIColor *)nonTrackingBackgroundColor;
-(void)setNonTrackingBackgroundColor:(UIColor *)arg1 ;
@end

