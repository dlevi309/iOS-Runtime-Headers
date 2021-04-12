/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface OKUILabelHUDView : UIView {

	UILabel* _label;

}

@property (retain,readonly) UILabel * label;              //@synthesize label=_label - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(UILabel *)label;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)sizeToFit;
-(void)updateShadowPath;
@end

