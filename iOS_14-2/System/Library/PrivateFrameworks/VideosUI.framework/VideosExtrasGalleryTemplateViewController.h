/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSelectedItemIndex:(unsigned long long)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)selectedItemIndex;
-(id)contentScrollView;
-(id)templateElement;
-(void)_prepareLayout;
-(BOOL)showsPlaceholder;
@end

