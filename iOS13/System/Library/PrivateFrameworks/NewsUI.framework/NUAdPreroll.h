/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/ADBannerViewDelegate.h>

@class NUAdBannerView, NSString;

@interface NUAdPreroll : NSObject <ADBannerViewDelegate> {

	/*^block*/id _completionBlock;
	NUAdBannerView* _bannerView;

}

@property (nonatomic,copy) id completionBlock;                         //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NUAdBannerView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)timeout;
-(NUAdBannerView *)bannerView;
-(void)setBannerView:(NUAdBannerView *)arg1 ;
-(void)bannerViewDidLoadAd:(id)arg1 ;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(id)initWithContext:(id)arg1 timeout:(double)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)finishedLoadingBannerView:(id)arg1 error:(id)arg2 ;
@end

