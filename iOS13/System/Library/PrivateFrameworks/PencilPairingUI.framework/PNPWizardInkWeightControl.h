/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
*/

#import <PencilPairingUI/PencilPairingUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PNPPencilInteractionEventDestination.h>

@class PNPGradientView, UIView, NSString;

@interface PNPWizardInkWeightControl : UIView <PNPPencilInteractionEventDestination> {

	double _value;
	PNPGradientView* _gradient;
	UIView* _knob;

}

@property (nonatomic,readonly) double value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)value;
-(void)setValue:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_knobColor;
-(void)eventSource:(id)arg1 hadPencilDoubleTapped:(/*^block*/id)arg2 ;
@end

