/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

