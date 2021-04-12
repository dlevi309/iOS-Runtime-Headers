/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/MNRealtimeUpdate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOTransitRouteUpdate;

@interface MNRealtimeTransitUpdate : MNRealtimeUpdate <NSSecureCoding> {

	GEOTransitRouteUpdate* _transitUpdate;

}

@property (nonatomic,readonly) GEOTransitRouteUpdate * transitUpdate;              //@synthesize transitUpdate=_transitUpdate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)routeID;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTransitRouteUpdate:(id)arg1 ;
-(GEOTransitRouteUpdate *)transitUpdate;
@end

