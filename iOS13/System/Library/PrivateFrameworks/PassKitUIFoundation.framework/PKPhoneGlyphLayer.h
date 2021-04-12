/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
*/

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <PassKitCore/PKMicaLayer.h>

@class CALayer, NSString;

@interface PKPhoneGlyphLayer : PKMicaLayer {

	CALayer* _highlightLayer;
	CGPoint _highlightOffscreenPosition;
	CGPoint _highlightOnscreenPosition;
	NSString* _phoneWiggleAnimationKey;

}
-(id)init;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 package:(id)arg2 ;
-(void)_restartPhoneWiggleIfNecessary;
-(void)_startPhoneWiggle;
-(void)_endPhoneWiggle;
@end

