/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LegacyGameKit.framework/LegacyGameKit
*/

#import <LegacyGameKit/LegacyGameKit-Structs.h>
#import <UIKitCore/UIAlertView.h>

@class UIView;

@interface GKAlertView : UIAlertView {

	UIView* _clipView;
	UIView* _contentView;

}
+(void)initialize;
+(CGSize)preferredContentViewSize;
-(id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
-(BOOL)_canDrawContent;
-(id)contentView;
-(void)dealloc;
-(id)initAlertView;
-(void)layoutAnimated:(BOOL)arg1 ;
-(void)_changePanelOutAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_changePanelInAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_replaceContentView:(id)arg1 animated:(BOOL)arg2 ;
-(void)layoutAnimated:(BOOL)arg1 withDuration:(double)arg2 ;
-(void)setContentView:(id)arg1 animated:(BOOL)arg2 ;
@end

