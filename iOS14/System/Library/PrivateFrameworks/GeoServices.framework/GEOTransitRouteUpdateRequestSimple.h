/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(Class)replyClass;
-(void)setRequest:(GEOTransitRouteUpdateRequest *)arg1 ;
-(void)encodeToXPCDictionary:(id)arg1 ;
-(GEOTransitRouteUpdateRequest *)request;
-(BOOL)expectsReply;
-(BOOL)isValid;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
@end

