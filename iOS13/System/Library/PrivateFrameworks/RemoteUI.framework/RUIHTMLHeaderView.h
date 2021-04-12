/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/RUIWebContainerViewDelegate.h>
#import <libobjc.A.dylib/RUIHeader.h>

@protocol RUIHeaderDelegate;
@class RUIWebContainerView, NSURL, NSString;

@interface RUIHTMLHeaderView : UIView <RUIWebContainerViewDelegate, RUIHeader> {

	RUIWebContainerView* _webContainerView;
	BOOL _isFirstSection;
	id<RUIHeaderDelegate> _delegate;
	NSURL* _baseURL;

}

@property (assign,nonatomic,__weak) id<RUIHeaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                    //@synthesize baseURL=_baseURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<RUIHeaderDelegate>)delegate;
-(void)setDelegate:(id<RUIHeaderDelegate>)arg1 ;
-(NSURL *)baseURL;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithAttributes:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(double)headerHeightForWidth:(double)arg1 inView:(id)arg2 ;
-(void)setText:(id)arg1 attributes:(id)arg2 ;
-(void)setSectionIsFirst:(BOOL)arg1 ;
-(void)webContainerView:(id)arg1 didClickLinkWithURL:(id)arg2 ;
@end

