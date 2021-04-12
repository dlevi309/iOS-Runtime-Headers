/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/_MKPlaceActionButtonControllerProtocol.h>

@class NSLayoutConstraint, MKVibrantView, _MKPlaceActionButtonController, NSString;

@interface MKPlaceHeaderButton : UIButton <_MKPlaceActionButtonControllerProtocol> {

	unsigned long long _buttonType;
	BOOL _primary;
	NSLayoutConstraint* _heightConstraint;
	MKVibrantView* _vibrantView;
	BOOL _highlighted;
	_MKPlaceActionButtonController* _buttonController;

}

@property (assign,nonatomic,__weak) _MKPlaceActionButtonController * buttonController;              //@synthesize buttonController=_buttonController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(void)_contentSizeDidChange;
-(void)infoCardThemeChanged;
-(void)placeActionbuttonControllerTextDidChanged:(id)arg1 ;
-(id)initWithPrimaryType:(unsigned long long)arg1 ;
-(void)setPrimaryButtonTitle:(id)arg1 ;
-(void)setButtonController:(_MKPlaceActionButtonController *)arg1 ;
-(void)applyButtonDefaultConfiguration;
-(void)_setVibrantView;
-(void)_updateStylePrimaryButton;
-(void)_updateStyleNonPrimaryButton;
-(void)setAttributesWithTitle:(id)arg1 subTitle:(id)arg2 ;
-(BOOL)_isTintColorWhite;
-(void)buttonSelected:(id)arg1 ;
-(id)_primaryButtonTextColor;
-(id)_primaryButtonColor;
-(_MKPlaceActionButtonController *)buttonController;
@end

