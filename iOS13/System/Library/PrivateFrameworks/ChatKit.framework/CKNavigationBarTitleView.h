/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/_UINavigationBarTitleView.h>

@interface CKNavigationBarTitleView : _UINavigationBarTitleView {

	BOOL _editing;

}

@property (assign,getter=isEditing,nonatomic) BOOL editing;              //@synthesize editing=_editing - In the implementation block
-(void)contentDidChange;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(void)updateIfNeeded:(BOOL)arg1 ;
-(void)_setTrailingItemsHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateTrailingBarButtonHiddenStateForTitleHeightAnimated:(BOOL)arg1 ;
@end

