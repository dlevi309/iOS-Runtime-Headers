/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class CKNavigationBarCanvasView;

@interface CKComposeNavbarManagerContentView : UIView {

	CKNavigationBarCanvasView* _canvasView;

}

@property (nonatomic,retain) CKNavigationBarCanvasView * canvasView;              //@synthesize canvasView=_canvasView - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CKNavigationBarCanvasView *)canvasView;
-(void)setCanvasView:(CKNavigationBarCanvasView *)arg1 ;
@end

