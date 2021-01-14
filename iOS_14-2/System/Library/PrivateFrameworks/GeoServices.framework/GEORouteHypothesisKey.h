/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEORouteHypothesisRequest;

@interface GEORouteHypothesisKey : NSObject <NSCopying, NSSecureCoding> {

	GEORouteHypothesisRequest* _request;

}

@property (nonatomic,readonly) GEORouteHypothesisRequest * request;              //@synthesize request=_request - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(GEORouteHypothesisRequest *)request;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isEqual:(id)arg1 ;
-(id)initWithRouteHypothesisRequest:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

