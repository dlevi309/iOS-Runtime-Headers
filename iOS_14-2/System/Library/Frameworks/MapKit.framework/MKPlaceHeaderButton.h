/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/_MKPlaceActionControlledButton.h>

@class NSLayoutConstraint, MKVibrantView, _MKPlaceActionButtonController, NSString;

@interface MKPlaceHeaderButton : UIButton <_MKPlaceActionControlledButton> {

	unsigned long long _buttonType;
	BOOL _primary;
	NSLayoutConstraint* _heightConstraint;
	MKVibrantView* _vibrantView;
	BOOL _buttonHighlighted;
	_MKPlaceActionButtonController* _buttonController;

}

@property (assign,nonatomic,__weak) _MKPlaceActionButtonController * buttonController;              //@synthesize buttonController=_buttonController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithPrimaryType:(unsigned long long)arg1 ;
-(void)placeActionButtonControllerTextDidChange:(id)arg1 ;
-(void)applyButtonDefaultConfiguration;
-(void)_setVibrantView;
-(void)_updateStylePrimaryButton;
-(void)_updateStyleNonPrimaryButton;
-(BOOL)_isTintColorWhite;
-(id)_primaryButtonTextColor;
-(void)updateButtonWithHighlighted:(BOOL)arg1 ;
-(id)_primaryButtonColor;
-(_MKPlaceActionButtonController *)buttonController;
-(void)setPrimaryTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)buttonSelected:(id)arg1 ;
-(void)setPrimaryTitle:(id)arg1 ;
-(void)setButtonController:(_MKPlaceActionButtonController *)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(void)infoCardThemeChanged;
-(void)_contentSizeDidChange;
-(void)setHighlighted:(BOOL)arg1 ;
@end

