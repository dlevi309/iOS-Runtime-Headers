/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(id)checkedImage;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isChecked;
-(id)uncheckedImage;
-(void)setIsChecked:(BOOL)arg1 ;
@end

