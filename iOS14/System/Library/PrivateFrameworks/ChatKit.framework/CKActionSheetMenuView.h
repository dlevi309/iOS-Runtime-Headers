/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIInterfaceActionGroupView.h>
#import <UIKit/UIInterfaceActionHandlerInvocationDelegate.h>

@protocol CKActionSheetMenuViewDelegate;
@class CKActionSheetMenuTitleView, NSString;

@interface CKActionSheetMenuView : UIInterfaceActionGroupView <UIInterfaceActionHandlerInvocationDelegate> {

	CKActionSheetMenuTitleView* _titleView;
	id<CKActionSheetMenuViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CKActionSheetMenuViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CKActionSheetMenuViewDelegate>)delegate;
-(void)interfaceAction:(id)arg1 invokeActionHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setTitle:(id)arg1 ;
-(void)setDelegate:(id<CKActionSheetMenuViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dismissSelf;
-(void)updateTitleConstraintsForBoundingRect:(CGRect)arg1 ;
-(id)initWithTitle:(id)arg1 interfaceActions:(id)arg2 ;
@end

