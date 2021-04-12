/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOXPCReply.h>
#import <libobjc.A.dylib/GEOXPCReply.h>

@class GEOTransitRouteUpdateResponse, NSString;

@interface GEOTransitRouteUpdateReplySimple : GEOXPCReply <GEOXPCReply> {

	GEOTransitRouteUpdateResponse* _response;

}

@property (nonatomic,retain) GEOTransitRouteUpdateResponse * response;              //@synthesize response=_response - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(GEOTransitRouteUpdateResponse *)response;
-(void)setResponse:(GEOTransitRouteUpdateResponse *)arg1 ;
@end

