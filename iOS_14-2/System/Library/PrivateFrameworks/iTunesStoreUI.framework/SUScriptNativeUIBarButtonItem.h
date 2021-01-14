/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptButtonNativeObject.h>

@interface SUScriptNativeUIBarButtonItem : SUScriptButtonNativeObject {

	BOOL _isBackButton;

}
+(id)objectWithDefaultButtonForScriptButton:(id)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)setTag:(long long)arg1 ;
-(BOOL)isLoading;
-(void)setTitle:(id)arg1 ;
-(long long)tag;
-(id)image;
-(UIEdgeInsets)imageInsets;
-(id)styleString;
-(BOOL)isBackButton;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(int)buttonType;
-(id)title;
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

