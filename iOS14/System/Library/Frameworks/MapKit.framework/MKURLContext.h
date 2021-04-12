/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class GEOCompanionRouteContext;

@interface MKURLContext : NSObject {

	BOOL _originatedFromWatch;
	GEOCompanionRouteContext* _companionRouteContext;

}

@property (nonatomic,readonly) BOOL originatedFromWatch;                                           //@synthesize originatedFromWatch=_originatedFromWatch - In the implementation block
@property (nonatomic,copy,readonly) GEOCompanionRouteContext * companionRouteContext;              //@synthesize companionRouteContext=_companionRouteContext - In the implementation block
-(id)initWithOriginatedFromWatch:(BOOL)arg1 companionRouteContext:(id)arg2 ;
-(GEOCompanionRouteContext *)companionRouteContext;
-(BOOL)originatedFromWatch;
@end

