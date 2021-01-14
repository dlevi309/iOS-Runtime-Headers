/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPhoto:(UIImage *)arg1 ;
-(UIImage *)photo;
-(double)desiredHeightForWidth:(double)arg1 ;
-(BOOL)isEditing;
-(void)layoutSubviews;
-(void)setEditing:(BOOL)arg1 ;
-(id)initWithPhoto:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
@end

