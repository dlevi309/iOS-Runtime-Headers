/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosExtrasTemplateViewController.h>

@class VideosExtrasBannerController, VideosExtrasGridElementViewController;

@interface VideosExtrasGalleryTemplateViewController : VideosExtrasTemplateViewController {

	VideosExtrasBannerController* _bannerController;
	VideosExtrasGridElementViewController* _gridViewController;
	unsigned long long _selectedItemIndex;

}

@property (assign,nonatomic) unsigned long long selectedItemIndex;              //@synthesize selectedItemIndex=_selectedItemIndex - In the implementation block
-(void)viewDidLoad;
-(id)contentScrollView;
-(id)templateElement;
-(unsigned long long)selectedItemIndex;
-(void)setSelectedItemIndex:(unsigned long long)arg1 ;
-(BOOL)showsPlaceholder;
-(void)_prepareLayout;
@end

