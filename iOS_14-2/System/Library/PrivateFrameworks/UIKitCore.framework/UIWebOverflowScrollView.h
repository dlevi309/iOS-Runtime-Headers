/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class UIWebBrowserView, UIWebOverflowScrollListener, UIWebOverflowContentView, DOMNode, CALayer;

@interface UIWebOverflowScrollView : UIScrollView {

	BOOL _beingRemoved;
	UIWebBrowserView* _webBrowserView;
	UIWebOverflowScrollListener* _scrollListener;
	UIWebOverflowContentView* _overflowContentView;
	DOMNode* _node;
	CALayer* _webLayer;

}

@property (assign,nonatomic) UIWebBrowserView * webBrowserView;                           //@synthesize webBrowserView=_webBrowserView - In the implementation block
@property (nonatomic,retain) UIWebOverflowScrollListener * scrollListener;                //@synthesize scrollListener=_scrollListener - In the implementation block
@property (nonatomic,retain) UIWebOverflowContentView * overflowContentView;              //@synthesize overflowContentView=_overflowContentView - In the implementation block
@property (nonatomic,retain) CALayer * webLayer;                                          //@synthesize webLayer=_webLayer - In the implementation block
@property (nonatomic,retain) DOMNode * node;                                              //@synthesize node=_node - In the implementation block
@property (assign,getter=isBeingRemoved,nonatomic) BOOL beingRemoved;                     //@synthesize beingRemoved=_beingRemoved - In the implementation block
-(CALayer *)webLayer;
-(DOMNode *)node;
-(id)superview;
-(void)setNode:(DOMNode *)arg1 ;
-(void)willBeRemoved;
-(void)replaceLayer:(id)arg1 ;
-(void)setBeingRemoved:(BOOL)arg1 ;
-(void)setOverflowContentView:(UIWebOverflowContentView *)arg1 ;
-(id)initWithLayer:(id)arg1 node:(id)arg2 webBrowserView:(id)arg3 ;
-(UIWebOverflowContentView *)overflowContentView;
-(void)setWebLayer:(CALayer *)arg1 ;
-(BOOL)fixUpViewAfterInsertion;
-(UIWebBrowserView *)webBrowserView;
-(void)setWebBrowserView:(UIWebBrowserView *)arg1 ;
-(UIWebOverflowScrollListener *)scrollListener;
-(void)setScrollListener:(UIWebOverflowScrollListener *)arg1 ;
-(BOOL)isBeingRemoved;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)dealloc;
@end

