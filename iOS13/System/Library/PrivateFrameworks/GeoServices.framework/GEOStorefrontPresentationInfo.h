/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(GEOStorefrontView *)closeUpView;
-(GEOStorefrontView *)standOffView;
-(id)initWithStorefrontPresentation:(id)arg1 ;
-(NSURL *)overlayImageURL;
@end

