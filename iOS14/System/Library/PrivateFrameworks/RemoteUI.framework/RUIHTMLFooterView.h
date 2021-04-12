/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSURL *)baseURL;
-(id<RUITableFooterDelegate>)delegate;
-(id)initWithAttributes:(id)arg1 ;
-(void)setDelegate:(id<RUITableFooterDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(double)footerHeightForWidth:(double)arg1 inView:(id)arg2 ;
-(void)setText:(id)arg1 attributes:(id)arg2 ;
-(double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(void)webContainerView:(id)arg1 didClickLinkWithURL:(id)arg2 ;
@end

