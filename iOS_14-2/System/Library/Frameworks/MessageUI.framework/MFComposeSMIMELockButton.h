/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIImageView;

@interface MFComposeSMIMELockButton : UIButton {

	UIImageView* _lockedImageView;
	UIImageView* _unlockedImageView;
	BOOL _wantsEncryption;
	BOOL _canEncrypt;
	UIEdgeInsets touchInsets;

}

@property (assign,nonatomic) UIEdgeInsets touchInsets; 
@property (assign,nonatomic) BOOL wantsEncryption;                  //@synthesize wantsEncryption=_wantsEncryption - In the implementation block
@property (assign,nonatomic) BOOL canEncrypt;                       //@synthesize canEncrypt=_canEncrypt - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_openLock;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIEdgeInsets)touchInsets;
-(void)setTouchInsets:(UIEdgeInsets)arg1 ;
-(void)setWantsEncryption:(BOOL)arg1 canEncrypt:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_updateButtonAppearance;
-(void)_updateButtonAppearanceAnimated:(BOOL)arg1 ;
-(BOOL)wantsEncryption;
-(BOOL)canEncrypt;
-(void)_closeLock;
-(void)setWantsEncryption:(BOOL)arg1 ;
-(void)setCanEncrypt:(BOOL)arg1 ;
@end

