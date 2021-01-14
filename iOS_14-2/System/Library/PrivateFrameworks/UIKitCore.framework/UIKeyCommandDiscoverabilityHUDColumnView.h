/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

