/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOXPCRequest.h>
#import <libobjc.A.dylib/GEOXPCRequest.h>

@class GEOETARequest, NSString;

@interface GEOETARequestSimple : GEOXPCRequest <GEOXPCRequest> {

	GEOETARequest* _request;

}

@property (nonatomic,retain) GEOETARequest * request;               //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)replyClass;
-(void)setRequest:(GEOETARequest *)arg1 ;
-(void)encodeToXPCDictionary:(id)arg1 ;
-(GEOETARequest *)request;
-(BOOL)expectsReply;
-(BOOL)isValid;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
@end

