/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIButton.h>

@interface AVTAvatarActionButton : UIButton {

	BOOL _isDestructive;

}

@property (assign,nonatomic) BOOL isDestructive;              //@synthesize isDestructive=_isDestructive - In the implementation block
+(id)buttonWithAction:(id)arg1 ;
+(id)destructiveButtonWithAction:(id)arg1 ;
+(id)defaultButtonWithAction:(id)arg1 ;
-(BOOL)isDestructive;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setIsDestructive:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

