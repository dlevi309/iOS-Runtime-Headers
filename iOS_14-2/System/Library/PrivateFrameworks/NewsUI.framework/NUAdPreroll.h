/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)bannerViewDidLoadAd:(id)arg1 ;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(void)setBannerView:(NUAdBannerView *)arg1 ;
-(void)timeout;
-(NUAdBannerView *)bannerView;
-(id)initWithContext:(id)arg1 timeout:(double)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)finishedLoadingBannerView:(id)arg1 error:(id)arg2 ;
@end

