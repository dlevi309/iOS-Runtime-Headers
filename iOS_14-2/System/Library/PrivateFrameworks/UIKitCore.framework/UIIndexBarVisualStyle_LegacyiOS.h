/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)canBecomeFocused;
-(double)minLineHeight;
-(void)indexColorUpdated;
-(BOOL)updateSectionForTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)displayEntriesUpdated;
-(void)sizeUpdated;
-(void)setNonTrackingBackgroundColor:(UIColor *)arg1 ;
-(CGRect)_visibleBoundsForRect:(CGRect)arg1 stride:(double*)arg2 ;
-(UIColor *)nonTrackingBackgroundColor;
-(BOOL)overlay;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)_accessibility_indexForEntryAtPoint:(CGPoint)arg1 ;
-(id)initWithView:(id)arg1 ;
-(id)displayEntryFromEntry:(id)arg1 ;
-(id)font;
@end

