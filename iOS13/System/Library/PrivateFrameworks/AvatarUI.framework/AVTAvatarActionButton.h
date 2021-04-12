/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class AVTAvatarActionButtonBlockHandler;

@interface AVTAvatarActionButton : UIButton {

	BOOL _isDestructive;
	AVTAvatarActionButtonBlockHandler* _blockHandler;

}

@property (assign,nonatomic) BOOL isDestructive;                                            //@synthesize isDestructive=_isDestructive - In the implementation block
@property (nonatomic,retain) AVTAvatarActionButtonBlockHandler * blockHandler;              //@synthesize blockHandler=_blockHandler - In the implementation block
+(id)buttonWithTitle:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
+(id)defaultButtonWithTitle:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
+(id)destructiveButtonWithTitle:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
-(BOOL)isDestructive;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setIsDestructive:(BOOL)arg1 ;
-(void)performActionBlock;
-(AVTAvatarActionButtonBlockHandler *)blockHandler;
-(void)setBlockHandler:(AVTAvatarActionButtonBlockHandler *)arg1 ;
@end

