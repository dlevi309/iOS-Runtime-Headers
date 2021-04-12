/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UIButton.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@class UIPointerInteraction, UIImageView, SFToggleBackgroundView, UIView, UIImage, UIColor, UIImageSymbolConfiguration, NSString;

@interface SFNavigationBarToggleButton : UIButton <UIPointerInteractionDelegate> {

	BOOL _liftedForCursor;
	UIPointerInteraction* _pointerInteraction;
	UIImageView* _defaultStateImageView;
	UIImageView* _selectedStateImageView;
	SFToggleBackgroundView* _selectedStateMaskView;
	UIView* _selectedStateFillView;
	unsigned long long _inputMode;
	BOOL _drawsLightGlyph;
	BOOL _usesInsetFromBackground;
	BOOL _highlightsBackground;
	UIImage* _image;
	double _resizableBackgroundCornerRadius;
	UIColor* _glyphTintColor;
	UIImageSymbolConfiguration* _preferredSymbolConfiguration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3 ;
-(void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

