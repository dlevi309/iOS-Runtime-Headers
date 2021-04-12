/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOXPCRequest.h>
#import <libobjc.A.dylib/GEOXPCRequest.h>

@class GEOTransitRouteUpdateRequest, NSString;

@interface GEOTransitRouteUpdateRequestSimple : GEOXPCRequest <GEOXPCRequest> {

	GEOTransitRouteUpdateRequest* _request;

}

@property (nonatomic,retain) GEOTransitRouteUpdateRequest * request;              //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(Class)replyClass;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRequest:(GEOTransitRouteUpdateRequest *)arg1 ;
-(GEOTransitRouteUpdateRequest *)request;
-(BOOL)expectsReply;
@end

