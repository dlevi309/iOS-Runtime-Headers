/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIView.h>

@protocol UIKeyCommandDiscoverabilityHUDColumnViewDelegate;
@class UIKeyCommandDiscoverabilityHUDVisualStyle, UIFont, UILayoutGuide, NSArray;

@interface UIKeyCommandDiscoverabilityHUDColumnView : UIView {

	id<UIKeyCommandDiscoverabilityHUDColumnViewDelegate> _delegate;
	UIKeyCommandDiscoverabilityHUDVisualStyle* _visualStyle;
	UIFont* _baseFont;
	UILayoutGuide* _descriptionColumnLayoutGuide;
	UILayoutGuide* _modifiersColumnLayoutGuide;
	UILayoutGuide* _inputStringColumnLayoutGuide;
	NSArray* _descriptionViews;
	NSArray* _modifierViews;
	NSArray* _inputStringViews;
	NSArray* _constraints;
	double _fontScaleFactor;

}

@property (assign,nonatomic) double fontScaleFactor;              //@synthesize fontScaleFactor=_fontScaleFactor - In the implementation block
-(id)initWithDelegate:(id)arg1 ;
-(void)setKeyCommands:(id)arg1 withVisualStyle:(id)arg2 ;
-(void)setFontScaleFactor:(double)arg1 ;
-(double)fontScaleFactor;
@end

