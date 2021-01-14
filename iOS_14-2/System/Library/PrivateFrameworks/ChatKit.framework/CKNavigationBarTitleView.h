/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/_UINavigationBarTitleView.h>

@interface CKNavigationBarTitleView : _UINavigationBarTitleView {

	BOOL _editing;

}

@property (assign,getter=isEditing,nonatomic) BOOL editing;              //@synthesize editing=_editing - In the implementation block
-(void)contentDidChange;
-(void)_updateTrailingBarButtonHiddenStateForTitleHeightAnimated:(BOOL)arg1 ;
-(BOOL)isEditing;
-(void)_setTrailingItemsHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateIfNeeded:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
@end

