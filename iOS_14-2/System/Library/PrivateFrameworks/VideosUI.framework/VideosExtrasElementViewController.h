/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIViewController.h>

@class VideosExtrasBackgroundViewController, NSMapTable;

@interface VideosExtrasElementViewController : UIViewController {

	VideosExtrasBackgroundViewController* _backgroundViewController;
	NSMapTable* _bannerButtonMap;
	BOOL _wide;

}

@property (assign,getter=isWide,nonatomic) BOOL wide;              //@synthesize wide=_wide - In the implementation block
+(id)_borderView;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)backgroundViewController;
-(BOOL)isWide;
-(void)setWide:(BOOL)arg1 ;
-(void)dealloc;
-(void)_prepareLayout;
-(void)_startBackgroundAudio;
-(void)configureBackgroundWithElements:(id)arg1 ;
-(unsigned long long)extrasSize;
-(void)_configureBannerWithElement:(id)arg1 ;
-(void)_didActivateButtonWithItem:(id)arg1 ;
-(id)_installBackdrop:(id)arg1 ;
@end

