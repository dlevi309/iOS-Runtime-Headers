/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/RUIWebContainerViewDelegate.h>
#import <RemoteUI/RemoteUITableFooter.h>

@protocol RUITableFooterDelegate;
@class RUIWebContainerView, NSURL, NSString;

@interface RUIHTMLFooterView : UIView <RUIWebContainerViewDelegate, RemoteUITableFooter> {

	RUIWebContainerView* _webContainerView;
	id<RUITableFooterDelegate> _delegate;
	NSURL* _baseURL;

}

@property (assign,nonatomic,__weak) id<RUITableFooterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                         //@synthesize baseURL=_baseURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<RUITableFooterDelegate>)delegate;
-(void)setDelegate:(id<RUITableFooterDelegate>)arg1 ;
-(NSURL *)baseURL;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithAttributes:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)setText:(id)arg1 attributes:(id)arg2 ;
-(void)webContainerView:(id)arg1 didClickLinkWithURL:(id)arg2 ;
-(double)footerHeightForWidth:(double)arg1 inView:(id)arg2 ;
-(double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
@end

