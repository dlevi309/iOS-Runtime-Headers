/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXMovieProviderDelegate.h>

@class UIViewController, PXMiroMovieProvider, NSString;

@interface PXMiroMoviePresenter : NSObject <PXMovieProviderDelegate> {

	UIViewController* _presentingViewController;
	PXMiroMovieProvider* _miroProvider;

}

@property (nonatomic,retain) PXMiroMovieProvider * miroProvider;                                //@synthesize miroProvider=_miroProvider - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPresentingViewController:(id)arg1 ;
-(UIViewController *)presentingViewController;
-(BOOL)presentMiroMovieViewController:(id)arg1 withPreferredTransitionType:(long long)arg2 ;
-(PXMiroMovieProvider *)miroProvider;
-(BOOL)presentMiroMovieControllerForAssetCollection:(id)arg1 keyAsset:(id)arg2 preferredTransitionType:(long long)arg3 ;
-(long long)_presentationTypeWithPreferredTransitionType:(long long)arg1 ;
-(void)_enableViewControllerChromeForViewController:(id)arg1 ;
-(void)setMiroProvider:(PXMiroMovieProvider *)arg1 ;
-(id)presentingViewControllerForMovieProvider:(id)arg1 ;
@end

