/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSURL *)baseURL;
-(id<RUIHeaderDelegate>)delegate;
-(id)initWithAttributes:(id)arg1 ;
-(void)setDelegate:(id<RUIHeaderDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)setText:(id)arg1 attributes:(id)arg2 ;
-(double)headerHeightForWidth:(double)arg1 inView:(id)arg2 ;
-(void)setSectionIsFirst:(BOOL)arg1 ;
-(void)webContainerView:(id)arg1 didClickLinkWithURL:(id)arg2 ;
@end

