/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKNavigationBarTitleControllerDelegate;
@class CKConversation, CKAvatarPickerViewController, _UINavigationBarTitleView, NSArray, UIBarButtonItem;

@interface CKNavigationBarTitleController : NSObject {

	BOOL _editing;
	CKConversation* _conversation;
	CKAvatarPickerViewController* _avatarPickerViewController;
	_UINavigationBarTitleView* _titleView;
	id<CKNavigationBarTitleControllerDelegate> _delegate;

}

@property (nonatomic,readonly) CKConversation * conversation;                                          //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,readonly) CKAvatarPickerViewController * avatarPickerViewController;              //@synthesize avatarPickerViewController=_avatarPickerViewController - In the implementation block
@property (nonatomic,readonly) _UINavigationBarTitleView * titleView;                                  //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,readonly) NSArray * leftBarButtonItems; 
@property (nonatomic,readonly) NSArray * rightBarButtonItems; 
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                            //@synthesize editing=_editing - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * cancelBarButtonItem; 
@property (nonatomic,readonly) UIBarButtonItem * deleteAllBarButtonItem; 
@property (assign,nonatomic,__weak) id<CKNavigationBarTitleControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(_UINavigationBarTitleView *)titleView;
-(id<CKNavigationBarTitleControllerDelegate>)delegate;
-(void)_pressedAvatarView;
-(UIBarButtonItem *)deleteAllBarButtonItem;
-(void)_deleteAllBarButtonItemPressed;
-(void)_editCancelButtonPressed;
-(BOOL)isEditing;
-(id)initWithConversation:(id)arg1 ;
-(id)_conversationList;
-(void)setDelegate:(id<CKNavigationBarTitleControllerDelegate>)arg1 ;
-(CKConversation *)conversation;
-(void)setEditing:(BOOL)arg1 ;
-(CKAvatarPickerViewController *)avatarPickerViewController;
-(UIBarButtonItem *)cancelBarButtonItem;
-(NSArray *)leftBarButtonItems;
-(NSArray *)rightBarButtonItems;
@end

