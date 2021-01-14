/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <ProxCardKit/ProxCardKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface PRXSelectionIndicatorView : UIView {

	UIImageView* _selectedImageView;
	UIImageView* _deselectedImageView;
	BOOL _selected;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
@end

