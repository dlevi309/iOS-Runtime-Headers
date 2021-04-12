/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <UIKitCore/UIImageView.h>

@protocol ICDocCamZoomablePageContentViewDelegate;
@interface ICDocCamZoomablePageContentImageView : UIImageView {

	id<ICDocCamZoomablePageContentViewDelegate> _pageContentViewDelegate;

}

@property (assign,nonatomic,__weak) id<ICDocCamZoomablePageContentViewDelegate> pageContentViewDelegate;              //@synthesize pageContentViewDelegate=_pageContentViewDelegate - In the implementation block
-(id)_accessibilityScrollAncestorForSelector:(SEL)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setPageContentViewDelegate:(id<ICDocCamZoomablePageContentViewDelegate>)arg1 ;
-(id<ICDocCamZoomablePageContentViewDelegate>)pageContentViewDelegate;
@end

