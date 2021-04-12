/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSeparatorStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setContentBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)contentBackgroundColor;
-(void)setContentBackdropOverlayBlendMode:(long long)arg1 ;
-(CGRect)_dividerViewFrame;
-(long long)contentBackdropOverlayBlendMode;
@end

