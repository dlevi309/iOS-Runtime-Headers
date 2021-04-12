/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/

#import <ToneKit/ToneKit-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIView, UIColor;

@interface TKPickerDividerTableViewCell : UITableViewCell {

	UIView* _dividerView;
	long long _contentBackdropOverlayBlendMode;

}

@property (nonatomic,retain) UIColor * contentBackgroundColor; 
@property (assign,nonatomic) long long contentBackdropOverlayBlendMode;              //@synthesize contentBackdropOverlayBlendMode=_contentBackdropOverlayBlendMode - In the implementation block
-(void)layoutSubviews;
-(void)setSeparatorStyle:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setContentBackdropOverlayBlendMode:(long long)arg1 ;
-(void)setContentBackgroundColor:(UIColor *)arg1 ;
-(CGRect)_dividerViewFrame;
-(UIColor *)contentBackgroundColor;
-(long long)contentBackdropOverlayBlendMode;
@end

