/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
*/

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <PassKitCore/PKMicaLayer.h>

@class CALayer, CAFilter, NSString;

@interface PKPhoneGlyphLayer : PKMicaLayer {

	CALayer* _QRCodeLayer;
	CAFilter* _QRCodeColorFilter;
	CALayer* _highlightLayer;
	CGPoint _highlightOffscreenPosition;
	CGPoint _highlightOnscreenPosition;
	NSString* _phoneWiggleAnimationKey;
	CGColorRef _primaryColor;
	BOOL _showQRCode;

}

@property (assign,nonatomic) BOOL showQRCode;              //@synthesize showQRCode=_showQRCode - In the implementation block
-(void)layoutSublayers;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 package:(id)arg2 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(void)setPrimaryColor:(CGColorRef)arg1 animated:(BOOL)arg2 ;
-(void)setShowQRCode:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(void)_restartPhoneWiggleIfNecessary;
-(void)_applyEffectivePrimaryColorToQRCodeAnimated:(BOOL)arg1 ;
-(void)_startPhoneWiggle;
-(void)_endPhoneWiggle;
-(BOOL)showQRCode;
@end

