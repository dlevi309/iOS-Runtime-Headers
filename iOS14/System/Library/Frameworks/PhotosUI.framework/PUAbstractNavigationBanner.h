/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUAbstractNavigationBannerDelegate;
@class UIView;

@interface PUAbstractNavigationBanner : NSObject {

	id<PUAbstractNavigationBannerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PUAbstractNavigationBannerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) UIView * view; 
-(id<PUAbstractNavigationBannerDelegate>)delegate;
-(double)height;
-(void)setDelegate:(id<PUAbstractNavigationBannerDelegate>)arg1 ;
-(UIView *)view;
@end

