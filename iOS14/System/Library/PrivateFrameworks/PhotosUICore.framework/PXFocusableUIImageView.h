/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UIView;

@interface PXFocusableUIImageView : UIImageView {

	UIView* _overlayView;
	BOOL _allowsFocus;

}

@property (assign,nonatomic) BOOL allowsFocus;              //@synthesize allowsFocus=_allowsFocus - In the implementation block
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)allowsFocus;
-(id)initWithCoder:(id)arg1 ;
-(void)setAllowsFocus:(BOOL)arg1 ;
@end

