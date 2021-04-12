/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <UIKitCore/UIView.h>

@class UIImageView, UIButton, UIImage;

@interface AAUIProfilePhotoView : UIView {

	UIImageView* _photoView;
	UIButton* _editButton;
	BOOL _isEditing;

}

@property (nonatomic,retain) UIImage * photo; 
@property (assign,setter=setEditing:,nonatomic) BOOL isEditing;              //@synthesize isEditing=_isEditing - In the implementation block
-(void)layoutSubviews;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(UIImage *)photo;
-(void)setPhoto:(UIImage *)arg1 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(id)initWithPhoto:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
@end

