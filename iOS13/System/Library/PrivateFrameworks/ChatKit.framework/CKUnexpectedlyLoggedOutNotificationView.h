/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CKTwoButtonInlineNotificationViewDelegate.h>

@protocol CKUnexpectedlyLoggedOutNotificationViewDelegate;
@class CKTwoButtonInlineNotificationView, NSString;

@interface CKUnexpectedlyLoggedOutNotificationView : UIView <CKTwoButtonInlineNotificationViewDelegate> {

	id<CKUnexpectedlyLoggedOutNotificationViewDelegate> _delegate;
	CKTwoButtonInlineNotificationView* _inlineNotificationView;

}

@property (nonatomic,retain) CKTwoButtonInlineNotificationView * inlineNotificationView;                       //@synthesize inlineNotificationView=_inlineNotificationView - In the implementation block
@property (assign,nonatomic,__weak) id<CKUnexpectedlyLoggedOutNotificationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL visible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CKUnexpectedlyLoggedOutNotificationViewDelegate>)delegate;
-(void)setDelegate:(id<CKUnexpectedlyLoggedOutNotificationViewDelegate>)arg1 ;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)inlineNotificationView:(id)arg1 didChangeRequestedHeight:(double)arg2 ;
-(CKTwoButtonInlineNotificationView *)inlineNotificationView;
-(void)inlineNotificationViewDidReceiveLeftButtonTap:(id)arg1 ;
-(void)inlineNotificationViewDidReceiveRightButtonTap:(id)arg1 ;
-(void)setInlineNotificationView:(CKTwoButtonInlineNotificationView *)arg1 ;
@end

