/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol _MKPlaceReservationDelegate;
@class NSString, UIImage, NSArray;

@interface _MKPlaceReservationInfo : NSObject {

	NSString* _attributionProviderDisplayName;
	UIImage* _attributionProviderLogoImage;
	NSArray* _openTimes;
	id<_MKPlaceReservationDelegate> _reservationDelegate;

}

@property (nonatomic,copy,readonly) NSArray * openTimes;                                                //@synthesize openTimes=_openTimes - In the implementation block
@property (nonatomic,copy,readonly) NSString * attributionProviderDisplayName;                          //@synthesize attributionProviderDisplayName=_attributionProviderDisplayName - In the implementation block
@property (nonatomic,readonly) UIImage * attributionProviderLogoImage;                                  //@synthesize attributionProviderLogoImage=_attributionProviderLogoImage - In the implementation block
@property (nonatomic,__weak,readonly) id<_MKPlaceReservationDelegate> reservationDelegate;              //@synthesize reservationDelegate=_reservationDelegate - In the implementation block
-(id)initWithOpenTimes:(id)arg1 attributionProviderName:(id)arg2 providerLogoImage:(id)arg3 delegate:(id)arg4 ;
-(id<_MKPlaceReservationDelegate>)reservationDelegate;
-(NSString *)attributionProviderDisplayName;
-(UIImage *)attributionProviderLogoImage;
-(NSArray *)openTimes;
@end

