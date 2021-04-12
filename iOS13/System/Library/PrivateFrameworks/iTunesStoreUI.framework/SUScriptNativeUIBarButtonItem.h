/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptButtonNativeObject.h>

@interface SUScriptNativeUIBarButtonItem : SUScriptButtonNativeObject {

	BOOL _isBackButton;

}
+(id)objectWithDefaultButtonForScriptButton:(id)arg1 ;
-(id)title;
-(void)setTitle:(id)arg1 ;
-(long long)tag;
-(id)image;
-(void)setImage:(id)arg1 ;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)imageInsets;
-(int)buttonType;
-(BOOL)isBackButton;
-(void)setTag:(long long)arg1 ;
-(id)styleString;
-(BOOL)isLoading;
-(void)setLoading:(BOOL)arg1 ;
-(BOOL)isShowingConfirmation;
-(void)destroyNativeObject;
-(void)setupNativeObject;
-(void)hideConfirmationAnimated:(BOOL)arg1 ;
-(void)disconnectButtonAction;
-(void)connectButtonAction;
-(void)setStyleFromString:(id)arg1 ;
-(void)showConfirmationWithTitle:(id)arg1 animated:(BOOL)arg2 ;
-(id)systemItemString;
@end

