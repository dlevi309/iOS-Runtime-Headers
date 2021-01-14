/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOComposedEnrouteNotice.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEORouteAnnotation, GEOLatLng, GEOPBTransitArtwork, GEOMiniCard;

@interface GEOComposedRouteAnnotation : GEOComposedEnrouteNotice <NSSecureCoding> {

	GEORouteAnnotation* _annotation;
	GEOLatLng* _derivedPosition;

}

@property (nonatomic,readonly) GEOPBTransitArtwork * artwork; 
@property (nonatomic,readonly) GEOMiniCard * infoCard; 
+(BOOL)supportsSecureCoding;
-(id)position;
-(id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 annotation:(id)arg4 onRoute:(id)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(GEOPBTransitArtwork *)artwork;
-(id)initWithCoder:(id)arg1 ;
-(GEOMiniCard *)infoCard;
@end

