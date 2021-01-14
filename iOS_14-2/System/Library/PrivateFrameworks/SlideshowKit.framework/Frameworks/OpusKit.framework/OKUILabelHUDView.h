/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBounds:(CGRect)arg1 ;
-(void)updateShadowPath;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)sizeToFit;
-(UILabel *)label;
-(void)dealloc;
@end

