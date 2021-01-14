/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBannerView:(SXADBannerView *)arg1 ;
-(SXAdRequest *)request;
-(SXADBannerView *)bannerView;
@end

