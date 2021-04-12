/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class SXAdRequest, SXADBannerView;

@interface SXAdResponse : NSObject {

	SXAdRequest* _request;
	SXADBannerView* _bannerView;

}

@property (nonatomic,retain) SXAdRequest * request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) SXADBannerView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
-(void)setRequest:(SXAdRequest *)arg1 ;
-(SXAdRequest *)request;
-(SXADBannerView *)bannerView;
-(void)setBannerView:(SXADBannerView *)arg1 ;
@end

