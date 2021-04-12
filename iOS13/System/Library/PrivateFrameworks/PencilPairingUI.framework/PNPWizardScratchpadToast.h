/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
*/

#import <PencilPairingUI/PencilPairingUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UILabel, NSString;

@interface PNPWizardScratchpadToast : UIView {

	UIVisualEffectView* _background;
	UILabel* _label;
	NSString* _text;

}

@property (nonatomic,copy) NSString * text;              //@synthesize text=_text - In the implementation block
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
@end

