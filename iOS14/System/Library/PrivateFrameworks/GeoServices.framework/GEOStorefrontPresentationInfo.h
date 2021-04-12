/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOStorefrontView, NSURL;

@interface GEOStorefrontPresentationInfo : NSObject {

	GEOStorefrontView* _closeUpView;
	GEOStorefrontView* _standOffView;
	NSURL* _overlayImageURL;

}

@property (nonatomic,readonly) GEOStorefrontView * closeUpView;               //@synthesize closeUpView=_closeUpView - In the implementation block
@property (nonatomic,readonly) GEOStorefrontView * standOffView;              //@synthesize standOffView=_standOffView - In the implementation block
@property (nonatomic,readonly) NSURL * overlayImageURL;                       //@synthesize overlayImageURL=_overlayImageURL - In the implementation block
-(id)init;
-(GEOStorefrontView *)standOffView;
-(GEOStorefrontView *)closeUpView;
-(id)initWithStorefrontPresentation:(id)arg1 ;
-(NSURL *)overlayImageURL;
@end

