/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOComposedEnrouteNotice.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOTrafficSignal;

@interface GEOComposedTrafficSignal : GEOComposedEnrouteNotice <NSSecureCoding> {

	GEOTrafficSignal* _trafficSignal;

}

@property (nonatomic,readonly) int type; 
+(BOOL)supportsSecureCoding;
-(id)position;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 trafficSignal:(id)arg4 onRoute:(id)arg5 ;
-(int)type;
-(id)initWithCoder:(id)arg1 ;
@end

