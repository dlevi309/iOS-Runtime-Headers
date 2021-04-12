/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
*/

#import <BridgePreferences/BridgePreferences-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface BPSCheckMarkView : UIView {

	BOOL _isChecked;
	UIImageView* _imageView;

}

@property (assign,nonatomic) BOOL isChecked;                       //@synthesize isChecked=_isChecked - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(BOOL)isChecked;
-(id)uncheckedImage;
-(id)checkedImage;
-(void)setIsChecked:(BOOL)arg1 ;
@end

