/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <UIKitCore/UIBarButtonItem.h>

@class UIImage;

@interface MFBarButtonItem : UIBarButtonItem {

	UIImage* _enabledImage;
	UIImage* _disabledImage;

}

@property (nonatomic,retain) UIImage * enabledImage;               //@synthesize enabledImage=_enabledImage - In the implementation block
@property (nonatomic,retain) UIImage * disabledImage;              //@synthesize disabledImage=_disabledImage - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(UIImage *)disabledImage;
-(void)setDisabledImage:(UIImage *)arg1 ;
-(UIImage *)enabledImage;
-(id)initWithImage:(id)arg1 disabledImage:(id)arg2 style:(long long)arg3 target:(id)arg4 action:(SEL)arg5 ;
-(void)setEnabledImage:(UIImage *)arg1 ;
@end

