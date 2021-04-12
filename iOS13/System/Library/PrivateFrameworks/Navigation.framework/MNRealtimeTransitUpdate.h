/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)routeID;
-(id)initWithTransitRouteUpdate:(id)arg1 ;
-(GEOTransitRouteUpdate *)transitUpdate;
@end

