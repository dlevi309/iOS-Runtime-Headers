/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
*/

#import <PencilPairingUI/PencilPairingUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PNPPencilView, PNPSyntheticPencilInteractionEventSource;

@interface PNPHardwareView : UIView {

	PNPPencilView* _pencilView;
	PNPSyntheticPencilInteractionEventSource* _eventSource;
	unsigned long long _animationType;

}

@property (assign,nonatomic) unsigned long long animationType;              //@synthesize animationType=_animationType - In the implementation block
-(unsigned long long)animationType;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setAnimationType:(unsigned long long)arg1 ;
@end

