/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <UIKitCore/UIImageView.h>

@protocol ICDocCamZoomablePageContentViewDelegate;
@interface ICDocCamZoomablePageContentImageView : UIImageView {

	id<ICDocCamZoomablePageContentViewDelegate> _pageContentViewDelegate;

}

@property (assign,nonatomic,__weak) id<ICDocCamZoomablePageContentViewDelegate> pageContentViewDelegate;              //@synthesize pageContentViewDelegate=_pageContentViewDelegate - In the implementation block
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityScrollAncestorForSelector:(SEL)arg1 ;
-(void)setPageContentViewDelegate:(id<ICDocCamZoomablePageContentViewDelegate>)arg1 ;
-(id<ICDocCamZoomablePageContentViewDelegate>)pageContentViewDelegate;
@end

