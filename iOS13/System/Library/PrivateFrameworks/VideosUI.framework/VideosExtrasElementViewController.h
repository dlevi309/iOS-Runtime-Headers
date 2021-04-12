/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)backgroundViewController;
-(void)_prepareLayout;
-(void)_startBackgroundAudio;
-(void)configureBackgroundWithElements:(id)arg1 ;
-(BOOL)isWide;
-(unsigned long long)extrasSize;
-(void)_configureBannerWithElement:(id)arg1 ;
-(void)_didActivateButtonWithItem:(id)arg1 ;
-(id)_installBackdrop:(id)arg1 ;
-(void)setWide:(BOOL)arg1 ;
@end

